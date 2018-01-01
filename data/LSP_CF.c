LSP_CF()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170514; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=03363BA987E367043FA1312383E36167; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("optimizelyEndUserId=oeu1495469716696r0.6036088116151879; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MC1=GUID=b6f664c96b0e457e817158e8f6ff125b&HASH=b6f6&LV=201705&V=4&LU=1495469720460; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MSFPC=ID=b6f664c96b0e457e817158e8f6ff125b&CS=3&LV=201705&V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAAxCQAAuFXVH2RBFlJ4uAmiSdnleA!!&V=4; DOMAIN=c.urs.microsoft.com");

	web_url("l1.dat", 
		"URL=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.14393.0&os=10.0.14393.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t84.inf", 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=42696306E4B34187BB765213EBD72C02; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170514; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MUID=03363BA987E367043FA1312383E36167; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("optimizelyEndUserId=oeu1495469716696r0.6036088116151879; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MC1=GUID=b6f664c96b0e457e817158e8f6ff125b&HASH=b6f6&LV=201705&V=4&LU=1495469720460; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("MSFPC=ID=b6f664c96b0e457e817158e8f6ff125b&CS=3&LV=201705&V=1; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAAxCQAAuFXVH2RBFlJ4uAmiSdnleA!!&V=4; DOMAIN=ieonline.microsoft.com");

	web_url("suggestions.he-IL", 
		"URL=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.he-IL", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("rules.xml", 
		"URL=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=he-IL", 
		"Resource=1", 
		"RecContentType=application/xml", 
		"Referer=", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("fwlink", 
		"URL=http://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}