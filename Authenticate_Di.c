	int status;
Authenticate_Di()
{

    web_set_sockets_option("SSL_VERSION","TLS");
    
    web_set_max_html_param_len("50000");
    
    lr_save_string( lr_eval_string ("wf1f52214"), "ACCOUNT");
    lr_save_string( lr_eval_string ("workspaceq3oamicgocb8jikc"), "WORKSPACE_ID");
    lr_save_string( lr_eval_string ("https://diperf1-{ACCOUNT}.dispatcher.int.sap.hana.ondemand.com"), "URL");
    lr_save_string( lr_eval_string ("http://10.26.156.125:50000/saml2/idp/sso"), "SAML_REDIRECT_URL");
    
    
    lr_start_transaction("001_SAML");
 

/*Correlation comment - Do not change!  Original value='PEF1dGhuUmVxdWVzdCB4bWxucz0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOnByb3RvY29sIiB4bWxuczpuczI9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphc3NlcnRpb24iIHhtbG5zOm5zMz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC8wOS94bWxkc2lnIyIgeG1sbnM6bnM0PSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzA0L3htbGVuYyMiIEFzc2VydGlvbkNvbnN1bWVyU2VydmljZVVSTD0iaHR0cHM6Ly9sb2FkcnVubmVycGVyZnRlc3Qtc2FwcGVyZi5oY3Byb3h5Lm5lby5vbmRlbWFuZC5jb20vIiBEZXN0aW5hdGlvbj0iaHR0cHM6Ly9hY2NvdW50czUwMC5zYXAuY29tL3NhbWwyL2lkcC9zc28vYWNjb3VudHMuc2FwLmNvbSIgRm9yY2VBdXRobj0iZmFsc2UiIElEPSJTMzc5NWYwM2YtNjVlZi00MmRlLWJiODYtMjRiYjg4NTM5OThkLTdzZTg4Y3ZKLi5PRG1MNWNqMG01NVkxUHNQM0VwYXZ5ZDBHQno3aldxRXciIElzc3VlSW5zdGFudD0iMjAxNC0wNS0xNVQwNjoyNjo1OC41MTRaIiBWZXJzaW9uPSIyLjAiPjxuczI6SXNzdWVyPmh0dHBzOi8vcHJvZC5qcGFhcy5zYXBieWRlc2lnbi5jb20vc2FwcGVyZjwvbnMyOklzc3Vlcj48ZHM6U2lnbmF0dXJlIHhtbG5zOmRzPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwLzA5L3htbGRzaWcjIj48ZHM6U2lnbmVkSW5mbz48ZHM6Q2Fub25pY2FsaXphdGlvbk1ldGhvZCBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyIvPjxkczpTaWduYXR1cmVNZXRob2QgQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwLzA5L3htbGRzaWcjcnNhLXNoYTEiLz48ZHM6UmVmZXJlbmNlIFVSST0iI1MzNzk1ZjAzZi02NWVmLTQyZGUtYmI4Ni0yNGJiODg1Mzk5OGQtN3NlODhjdkouLk9EbUw1Y2owbTU1WTFQc1AzRXBhdnlkMEdCejdqV3FFdyI+PGRzOlRyYW5zZm9ybXM+PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvMDkveG1sZHNpZyNlbnZlbG9wZWQtc2lnbmF0dXJlIi8+PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyIvPjwvZHM6VHJhbnNmb3Jtcz48ZHM6RGlnZXN0TWV0aG9kIEFsZ29yaXRobT0iaHR0cDovL3d3dy53My5vcmcvMjAwMC8wOS94bWxkc2lnI3NoYTEiLz48ZHM6RGlnZXN0VmFsdWU+QkV5WXd4S0tuUm5pYzhNaElLSGN4Z1UwQ2JVPTwvZHM6RGlnZXN0VmFsdWU+PC9kczpSZWZlcmVuY2U+PC9kczpTaWduZWRJbmZvPjxkczpTaWduYXR1cmVWYWx1ZT5MSzZDRWplRngrN3VQNlJ0akI4NitlaTdTQnUzQXpNV3lPNE5LMWJsR2JJR0ZLcTBmWmhpbCt5YzRXM21CelBqUG1SNHorR3NkUnlZQktvaGxsYVpJVmhnSDZDV2JHWTB2a0hHOWpCaFFqV2RQckVJbzNJUkwvektRV1BuK1JuTTFCOWF0V3JjcEttdFFKT1Bld1RDTy9zRnNnT2Rva2tHRVNkZmFsczcyaFlHM0VBcjZPUkQ3NFF6T2xtU2J6bldaTnRsemdZNzlIQVpySU1ZMTZYY2l1bkpiM0FqMTVwaTNCaVNZYytCY0s5WXVSalA5L0g4Q1Eydm9pSVFsUjFiNGJoc1FtWkxYYjdhaW94S2pOS0tGNTA5MDcrbTJKNkp0WG9UWEc0MnhsaEtPTFRoV2VhdzF3eEQrMzNGdS9SRFpJTlIwb0FXSE5wNFlmeTZuZkppd2c9PTwvZHM6U2lnbmF0dXJlVmFsdWU+PC9kczpTaWduYXR1cmU+PC9BdXRoblJlcXVlc3Q+' Name ='CorrelationParameter' Type ='ResponseBased'*/
    web_reg_save_param_regexp(
        "ParamName=CorrelationParameter",
        "RegExp=name=\"SAMLRequest\"\\ value=\"(.*?)\"/><input\\ type",
        "DFEs=XSS",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        LAST);

/*Correlation comment - Do not change!  Original value='oucrssnlobxfazsqefzdsjozd' Name ='CorrelationParameter_1' Type ='ResponseBased'*/
    web_reg_save_param_regexp(
        "ParamName=CorrelationParameter_1",
        "RegExp=url\\.length\\)\\{var\\ anchorCookie='(.*?)_anchor",
        "DFEs=XSS",
        SEARCH_FILTERS,
        "Scope=Body",
        "IgnoreRedirections=No",
        LAST);
      
        // launch site
    web_url("{URL}", 
        "URL={URL}/", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=", 
        "Snapshot=t1.inf", 
        "Mode=HTML", 
        LAST);

        web_reg_save_param("SAMLRequest_2",
            "LB=\"SAMLRequest\" value=\"",
            "RB=\"",
            "Ord=1",
            "Search=Body",
            LAST);

        web_reg_save_param("RelayState_2",
            "LB=\"RelayState\" value=\"",
            "RB=\"",
            "Ord=1",
            "Search=Body",
            LAST);

        //name="sap.com/initial_post_parameters" value="
        web_reg_save_param("initial_post_parameters",
         //   "LB=initial_post_parameters\" value=\"",
          "LB=sap.com/initial_post_parameters\" value=\"",
            "RB=\"",
               "Ord=1",
            "Search=Body",
            LAST);
        
        // name="j_salt" value="TyNyRznBQfOoMKaWqOeWVLuNRJA="
        web_reg_save_param("j_salt",
            "LB=j_salt\" value=\"",
            "RB=\"",
            "Ord=1",
            "Search=Body",
            LAST);



        web_reg_save_param("IDP_Response",
             "LB=",
             "RB=",
             "Ord=1",
             "Search=All",
             LAST);


        status = web_submit_data("submit user to ilperf125", 
                    "Action={SAML_REDIRECT_URL}", 
                    "Method=POST", 
                    "RecContentType=application/x-www-form-urlencoded", 
                    "Referer=https://{URL}", 
                    "Snapshot=t2.inf", 
                    "Mode=HTML", 
                    ITEMDATA, 
                    "Name=SAMLRequest", "Value={CorrelationParameter}", ENDITEM,
                    "Name=RelayState", "Value={CorrelationParameter_1}", ENDITEM,
                    LAST);


        if ( status == LR_FAIL ) 
        {
            lr_save_datetime("%B %d %Y at %H:%M", DATE_NOW, "error_date");
            lr_error_message(" %s  -  Response for user %s", lr_eval_string("{error_date}") , lr_eval_string("{USER_ID}"));
            lr_exit(LR_EXIT_VUSER, LR_FAIL);
        }

        lr_end_transaction("001_SAML" , LR_AUTO);
        
   //     lr_think_time(tt);
        
        
        lr_start_transaction("002_Logon_SDN");


        //////////////////////////////////////////////////////////////////////////////
        // SUBMIT LOGON FORM to http://ilperf125.perflab.com:50000/saml2/idp/sso
        // //////////////////////////////////////////////////////////////////////////

        web_reg_save_param("SAMLResponse",
                "LB=\"SAMLResponse\" value=\"",
                "RB=\"",
                "Ord=1",
                "Search=Body",
                LAST);

        web_reg_save_param("RelayState_3",
                "LB=\"RelayState\" value=\"",
                "RB=\"",
                "Ord=1",
                "Search=Body",
                LAST);

        
           
        status = web_submit_data("submit user to ilperf125", 
            "Action={SAML_REDIRECT_URL}", 
            "Method=POST", 
            "TargetFrame=", 
            "RecContentType=text/html", 
            "Referer={SAML_REDIRECT_URL}", 
            "Mode=HTML", 
            ITEMDATA, 
            "Name=method", "Value=POST", ENDITEM, 
            "Name=j_username", "Value={USER_ID}", ENDITEM, 
            "Name=j_password", "Value=Start123!", ENDITEM, 
            "Name=SAMLRequest", "Value={SAMLRequest_2}", ENDITEM, 
            "Name=RelayState", "Value={RelayState_2}", ENDITEM,
            "Name=j_salt", "Value={j_salt}", ENDITEM,
            "Name=sap.com/initial_post_parameters", "Value={initial_post_parameters}", ENDITEM,
            "Name=uidPasswordLogon","Value=Log On", ENDITEM,
            LAST);
    
        if ( status == LR_FAIL ) 
        {
            lr_save_datetime("%B %d %Y at %H:%M", DATE_NOW, "error_date");
            lr_error_message(" %s  -  Problem with for user[%s]", lr_eval_string("{error_date}"), lr_eval_string("{USER_ID}"));
            lr_vuser_status_message(" %s  -  Problem with user[%s]", lr_eval_string("{error_date}"), lr_eval_string("{USER_ID}"));
        }

        lr_vuser_status_message(" Logged in with user[%s]", lr_eval_string("{USER_ID}"));


        
        lr_end_transaction("002_Logon_SDN", LR_AUTO);
        
        
    web_submit_form("test", 
        "Snapshot=t5.inf", 
        LAST);


  	web_add_header("X-CSRF-Token", "Fetch");
	web_save_header(RESPONSE,"response header");
	
	web_reg_save_param("TOKEN",
					"LB=X-CSRF-Token: ", 
					"RB=\r", 
					"Search=Headers",
					"Notfound=warning",
					"RelFrameId=1", 
					LAST);	

	web_reg_save_param("WORKSPACE", 
				"LB=\"id\":\"", 
				"RB=\"}", 
				"Search=Body",
				"Notfound=warning",
				"RelFrameId=1", 
				LAST);	
	
		web_reg_save_param("GetWorkspaceResponse",
                   "LB=",
                   "RB=",
                   "Search=Body",
                   LAST);
	
		web_url("get workspace", 
		"URL={URL}/di/workspace/all", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/", 
		LAST);
        
		if (strcmp(lr_eval_string("{GetWorkspaceResponse}"), "[]") == 0)
	{
			
		web_add_header("X-CSRF-Token", "{TOKEN}");
			
		web_custom_request("create workspace",
				"URL={URL}/di/workspace", 
				"Method=POST", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer={URL}/", 
				"Mode=HTTP", 
				"EncType=application/json", 
				"Body={\"accountId\":\"{ACCOUNT}\",\"name\":\"webide-{USER_ID}-{ACCOUNT}\",\"attributes\":{}}", 
				LAST);
		
		
				web_reg_save_param("WORKSPACE", 
				"LB=\"id\":\"", 
				"RB=\"}", 
				"Search=Body",
				"Notfound=warning",
				"RelFrameId=1", 
				LAST);	
	
		web_url("get workspace", 
		"URL={URL}/di/workspace/all", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/", 
		LAST);

	}

	return 0;
}
