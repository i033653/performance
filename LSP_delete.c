LSP_delete()
{
	lr_start_transaction("LSP_delete");
	web_add_header("X-CSRF-Token", "{TOKEN}");
	web_reg_find("Text=200", "Search=Headers", LAST);
	web_reg_find("Text=Language server deleted", "Search=Body", LAST);
	
	lr_save_string(lr_eval_string("/di/lsp/delete?workspaceId={WORKSPACE}"), "DELETE_URL");
			web_custom_request("delete",
	                   
				"URL={URL}{DELETE_URL}", 
				"Method=DELETE", 
				"Resource=0", 
				"Referer={URL}/", 
				"Mode=HTTP", 
				LAST);			

	lr_save_string(lr_eval_string("/di/lsp/getStatus?workspaceId={WORKSPACE}"), "GET_STATUS_URL");
	
	do{
			lr_start_transaction("LSP_POLL_Task");
			web_reg_save_param("LSP_STATUS", "Search=Body", "Notfound=warning", LAST);
			 web_reg_find("Text=200", "Search=Headers", LAST);
			 web_url("Poll Task",
			"URL={URL}{GET_STATUS_URL}", 
			"Resource=0", 
			"Referer={URL}/", 
			LAST);
			
			sleep(2000);
			 
			lr_end_transaction("LSP_POLL_Task", LR_AUTO);
		}while(!strcmp(lr_eval_string("{LSP_STATUS}"), "") == 0);

if(strcmp(lr_eval_string("{LSP_STATUS}"), "") == 0){
		lr_end_transaction("LSP_delete", LR_PASS);
	}
	else{
		lr_end_transaction("LSP_delete", LR_FAIL);
	}
	
	return 0;
}
