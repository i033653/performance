LSP_Start()
{
	lr_start_transaction("LSP_Start");

	web_add_header("X-CSRF-Token", "{TOKEN}");
	
	lr_save_string(lr_eval_string("/di/lsp/start?workspaceId={WORKSPACE}&supportedLanguages=eslint"), "START_URL");
	
	web_reg_find("Text=200", "Search=Headers", LAST);
	web_reg_find("Text=Language server start triggered", "Search=Body", LAST);
			web_custom_request("start",
	                   
				"URL={URL}{START_URL}", 
				"Method=POST", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer={URL}/", 
				"Mode=HTTP", 
				"EncType=application/json", 
				"Body=", 
				LAST);
			

	lr_save_string(lr_eval_string("/di/lsp/getStatus?workspaceId={WORKSPACE}"), "GET_STATUS_URL");
	
	do{
			lr_start_transaction("LSP_POLL_Task");
			web_reg_save_param("LSP_START_STATUS", "LB=status\":\"", "RB=\"",LAST);
			 web_reg_find("Text=200", "Search=Headers", LAST);
			 web_url("Poll Task",
			"URL={URL}{GET_STATUS_URL}", 
			"Resource=0", 
			"Referer={URL}/", 
			LAST);
			
			sleep(2000);
			 
			lr_end_transaction("LSP_POLL_Task", LR_AUTO);
		}while(strcmp(lr_eval_string("{LSP_START_STATUS}"), "STARTING") == 0 || strcmp(lr_eval_string("{LSP_START_STATUS}"), "") == 0  || strcmp(lr_eval_string("{LSP_START_STATUS}"), "SYNCING") == 0 || strcmp(lr_eval_string("{LSP_START_STATUS}"), "DOWN") == 0);

if(strcmp(lr_eval_string("{LSP_START_STATUS}"), "READY") == 0){
		lr_end_transaction("LSP_Start", LR_PASS);
	}
	else{
		lr_end_transaction("LSP_Start", LR_FAIL);
	}
	
	lr_think_time(atoi(lr_eval_string("{ThinkTime}")));
	
	
	
	return 0;

}
