LSP()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("sso", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_form("sso_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=j_username", "Value=p710800", ENDITEM, 
		"Name=j_password", "Value=Start123!", ENDITEM, 
		"Name=uidPasswordLogon", "Value=Log On", ENDITEM, 
		LAST);

	web_submit_form("diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com_2", 
		"Action=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		EXTRARES, 
		"Url=/sap-ui-cachebuster", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/saptoolsets/common/plugin/ide/css/MainLayout.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/lib/requirejs/require.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/core/Global.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/core/Core-preload.js", ENDITEM, 
		"Url=/env.json", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap-ui-core.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/core/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/commons/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/table/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/m/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/ux3/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/unified/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/uxap/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/comp/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/tnt/library-preload.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ui/library-preload.json", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/layout/library-preload.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/fl/library-preload.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ui/library.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/m/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ui/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/uxap/themes/sap_flat/library.css", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/uxap/i18n/i18n.properties", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/tnt/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/ui/comp/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/preload/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/core/FeatureConfig.js", ENDITEM, 
		"Url=/di/workspace/all", ENDITEM, 
		"Url=/di/profile", ENDITEM, 
		"Url=/api/listDestinations", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/tree/?depth=1", ENDITEM, 
		"Url=/di/project-type", ENDITEM, 
		"Url=/di/profile/prefs/?filter=watt%2FuserEnabledFeatures%2F.%2A", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/sd", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/MTA_PERF_ALL", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/tree/?depth=1000&includeFiles=true", ENDITEM, 
		"Url=/di/client/features", ENDITEM, 
		"Url=/resources/sap/watt/config-preload.json", ENDITEM, 
		"Url=/javatoolsclient_w9b8ba97a/client/v2.0.0_1506385218314/config-preload.json", ENDITEM, 
		"Url=/resources/sap/watt/i18n/config-preload.js", ENDITEM, 
		"Url=/resources/sap/watt/config-preload.js", ENDITEM, 
		"Url=/javatoolsclient_w9b8ba97a/client/v2.0.0_1506385218314/config-preload.js", ENDITEM, 
		"Url=/javatoolsclient_w9b8ba97a/client/v2.0.0_1506385218314/i18n/config-preload.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/run/ui/TitleExtendedControl.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/aceeditor/control/lib/ace-noconflict/ace.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/aceeditor/control/lib/ace-noconflict/ext-searchbox.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/core/messagebundle.properties", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/debug/core/Plugin.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/che/plugin/chebackend/Plugin.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/platform/plugin/console/view/Console.view.xml", ENDITEM, 
		"Url=/resources/sap/watt/saptoolsets/ui5/project/plugin/servicecatalog/Plugin.js", ENDITEM, 
		"Url=/services/userapi/currentUser", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/debug/core/service/DebugPlatform.js", ENDITEM, 
		"Url=/di/workspace/workspace8e0eap0s1q9nmgo4", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/m/messagebundle.properties", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/ide/Plugin.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/content/view/Content.view.xml", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/content/control/EditorArea.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/table/messagebundle.properties", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/runinnewprocess/css/PopupBlockerDialogStyles.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/runinnewprocess/img/PopupBlockerChrome.gif", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/platform/plugin/toprightpane/view/TopRightPaneContainer.view.xml", ENDITEM, 
		"Url=/di/profile/prefs", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/usernotification/css/userNotification.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/perspective/css/perspective.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/lib/mousetrap/mousetrap-global-bind.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/displayinformation/css/displayinformation.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/toolbar/css/Toolbar.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/displayinformation/css/featuresinfo.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/lib/mousetrap/mousetrap-record.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/uitools/version.json", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/content/css/content.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/console/css/console.css", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/menu/css/LTRMenu.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/platform/plugin/repositorybrowser/view/RepositoryBrowser.view.xml", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/commons/messagebundle.properties", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/layout/messagebundle.properties", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/test/testresult/command/ToggleTestPartCommand.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/debug/core/command/ToggleDebugClientCommand.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/problemsView/css/problemsView.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/runconsole/css/runconsole.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/css/gitClient.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/css/gitFileSearch.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/css/gitAmountIndicator.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/css/gitToolbarButtons.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/css/Controls-Table-Delta.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/platform/plugin/perspective/command/AbstractUIPartToggler.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/run/view/RunConfigurations.fragment.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/run/css/runConfigurationsStyles.css", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/MTA_PERF_ALL/Java", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/run/util/DocumentWindowsUtil.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/che/plugin/chebackend/io/Request.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/usernotificationbar/css/userNotificationBar.css", ENDITEM, 
		"Url=/resources/sap/watt/common/plugin/builder/css/Builder.css", ENDITEM, 
		"Url=/resources/sap/watt/saptoolsets/runner/common/mockpreview/service/MockHtmlProducer.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/platform/plugin/document/Document.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/che/plugin/chebackend/service/ProjectTypeDAO_Consolidation.js", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/MTA_PERF_ALL/HDB", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/MTA_PERF_ALL/HTML5", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/MTA_PERF_ALL/simplejava", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/projectType/service/ProjectTypeMetadata.js", ENDITEM, 
		"Url=/di/", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/aceeditor/css/aceeditor.css", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/file/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/intellisence/control/AutoCompletePopup.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/intellisence/control/AutoCompleteList.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/intellisence/control/AutoCompletePopover.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/intellisence/control/AutoCompleteItem.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/intellisence/css/intellisence.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/aceeditor/control/lib/ace-noconflict/mode-java.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/tipsandtricks/css/TipsAndTricksDialogStyles.css", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/gitclient/tip/InitRepositoryTip.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/template/tips/TemplateFavoritesTip.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/keyboardShortcutsSetting/tips/DefineKeyboardShortcutsTip.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/run/tips/HashFragmentTip.js", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/hcpconnectivity/tips/LinkToCockpitTip.js", ENDITEM, 
		"Url=/resources/sap/watt/saptoolsets/fiori/project/plugin/fioriexttemplate/tips/OpenLayoutEditorFromExtPaneTip.js", ENDITEM, 
		"Url=/di/lsp/getStatus?workspaceId=workspace8e0eap0s1q9nmgo4", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/jsonrpc2/service/JsonRpcProxy.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/jsonrpc2/service/RpcBuilder.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/websocketconnectivity/service/WebsocketProxy.js", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/core/themes/base/fonts/SAP-icons.woff2", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/aceeditor/themes/theme-sap-cumulus.js", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/runconsole/view/RunConsole.view.xml", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/runconsole/view/RunConsole.controller.js", ENDITEM, 
		"Url=/resources/sap/watt/platform/plugin/pluginmanager/css/pluginManager.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/ideplatform/plugin/welcomescreen/ui/view/WelcomeContent.view.xml", ENDITEM, 
		"Url=/di/project/workspace8e0eap0s1q9nmgo4/modules/MTA_PERF_ALL", ENDITEM, 
		"Url=/resources/sap/watt/ideplatform/plugin/welcomescreen/ui/css/welcomescreen.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/saptoolsets/fiori/common/plugin/welcomescreenimpl/helpfullinks.json", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.46.7/resources/sap/ui/core/cldr/en.json", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/js/privacy.js", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/js/piwik.js", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/js/piwik_plugin.js", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?action_name=SAP%20Web%20IDE&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=804400&h=13&m=4&s=24&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=1&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&"
		"java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=featureLoaded&custom2=USAGE&custom3=NONE_SAP&custom4=wf1f52214&custom5=javatoolsclient_w9b8ba97a&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&element_type=page&event_type=load", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPDocumentAdapter&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=869483&h=13&m=4&s=25&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=onTabSelected&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPManager&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=964461&h=13&m=4&s=26&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getControllerInstance&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.platform.jsonrpc2%2Fservice%2FJsonRpcProxy&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=747111&h=13&m=4&s=27&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&"
		"send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.platform.websocketconnectivity%2Fservice%2FWebsocketProxy&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=914221&h=13&m=4&s=27&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.runregistry%2Fservice%2FRunRegistry&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=819269&h=13&m=4&s=31&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&"
		"send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getProcessInfo&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_OptionalFeatureLoaded&e_a=Tools%20for%20Java%20Development&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=228824&h=13&m=4&s=31&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&"
		"pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.che.chebackend%2Fservice%2FRun&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=101213&h=13&m=4&s=31&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&"
		"send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getProcesses&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.runconsole%2Fservice%2FRunConsole&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=991959&h=13&m=4&s=31&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&"
		"send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getInitialStatus&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		LAST);

	web_url("index.html", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/index.html?1506420236676", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("prefs", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/profile/prefs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"watt/sap.watt.platform.tipsandtricks.service.tipsandtricks/showonstartup\":false,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProjectCommon\":1506405607266,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/sap.xs.java.project.web.template\":1506319377511,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProject\":1506405608178,\"watt/"
		"sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/nodes\":\"[\\\"folder::workspace\\\",\\\"folder:/MTA_PERF_ALL:workspace\\\",\\\"folder:/sd:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/"
		"extensiontemplate:workspace\\\"]\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/linked\":false,\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/selected\":\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/version\":1,\"watt/sap.watt.platform.plugin.notificationmanager.service.NotificationManager/messages"
		"\":\"[]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_HTML5.run/settings\":\"[{\\\"filePath\\\":\\\"/HTML5/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\""
		"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":5800856,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506262568523},\\\"moduleType\\\":\\\"com.sap.hcp.html5\\\"}]\",\"watt/sap.watt.common.service.ui.Perspective/_currentPerspective\":\"development\",\"watt/sap.watt.common.service.ui.Perspective/version\":1,\"watt/sap.watt.common.service.ui.Perspective/userpreference_lastKnown\":\"{\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/"
		"userpreference\":\"{\\\"content\\\":{\\\"userpreference_left\\\":\\\"userpref_master\\\",\\\"userpreference_center\\\":\\\"userpref_detail\\\"},\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/development\":\"{\\\"content\\\":{\\\"left\\\":\\\"repositorybrowser\\\",\\\"center_top\\\":\\\"content\\\",\\\"center_bottom\\\":\\\"console\\\"},\\\"left\\\":\\\"60.03976143141153%\\\",\\\"right\\\":\\\"hidden\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/"
		"sap.watt.common.service.ui.Perspective/development_lastKnown\":\"{\\\"left\\\":\\\"60.03976143141153%\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/activetab\":\"{\\\"editor\\\":\\\"aceeditor\\\",\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/version\":1,\"watt/"
		"sap.watt.common.content.service.ContentServicePersistence/tabs\":\"[{\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/pom.xml:workspace\\\",\\\"editor\\\":\\\"aceeditor\\\"},{\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\",\\\"editor\\\":\\\"aceeditor\\\"}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._sd.run/settings\":\"[{\\\"filePath\\\":\\\"/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\""
		"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177}}]\",\"watt/userEnabledFeatures/enabledFeatures\":\"[\\\""
		"javatools\\\"]\",\"watt/userEnabledFeatures/disabledFeatures\":\"[]\",\"watt/sap.watt.common.plugin.welcomescreen.service.Version/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"v_171012\",\"watt/sap.watt.common.plugin.run.service.history/configurationNames\":\"{\\\"5800856\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/HTML5\\\"},\\\"6460937\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"},\\\""
		"8182912\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"},\\\"8423384\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/sd\\\"},\\\"9999279\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}\",\"watt/sap.watt.common.plugin.run.service.history/runConfigurations\":\"[{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\""
		"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177,\\\"projectPath\\\":\\\"/sd\\\"}},{\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\""
		":1506328166718,\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_simplejava.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"workspaceId\\\":\\\""
		"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/simplejava/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/"
		"UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\",\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\""
		"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"hasIssues\\\":true}}]\",\"watt/sap.watt.common.Monitoring/FioriCloudEditionUser\":false,\"watt/sap.watt.common.service.ui.WelcomeScreen/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"{\\\"bIsVersionUpdate\\\":false,\\\"oVersionUpdate\\\":{\\\"from\\\":\\\"170928\\\",\\\"to\\\":\\\"171012\\\"}}\",\"watt/sap.watt.ideplatform.generationwizard.sortMode/sortMode\""
		":\"recentlyUsed\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTAP710800_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTAP710800/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTAP710800/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\"
		"\"lastRunTimeStamp\\\":1506328166718},\\\"sModulePath\\\":\\\"/MTAP710800/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/sap.watt.platform.filefilter.FileFilterHide/hidden\":true,\"watt/sap.watt.common.plugin.platform.service.keepalive.KeepAlive/nLastLogonTimestamp\":1506420253446}", 
		EXTRARES, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/ui/fonts/SAP-icons-watt.woff", "Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/preload/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/ui/commons/themes/base/img/toolbar/overflow.png", "Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/preload/themes/sap_flat/library.css", ENDITEM, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/ui/commons/themes/base/img/splitter/splitter_horiz_grip.gif", "Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/preload/themes/sap_flat/library.css", ENDITEM, 
		LAST);

	web_add_cookie("_pk_id.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=32913ab9a23df268.1506420264.0.1506420264..; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_add_cookie("_swa_ref.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=%5B%22%22%2C%22%22%2C1506420264%2C%22http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso%22%5D; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_add_cookie("_swa_id.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=45af37ff84697ea0.1506420264.1.1506420264.1506420264.; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_add_cookie("_swa_ses.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=*; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_url("getHashedUser", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/usageAnalytics/getHashedUser", 
		"Resource=0", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/ui/commons/themes/base/img/splitter/checkerboard.png", "Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/resources/~5cfddba6c4c93a9574da8795b231db9795ec15e1~/sap/watt/preload/themes/sap_flat/library.css", ENDITEM, 
		LAST);

	web_add_cookie("_swa_id.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=45af37ff84697ea0.1506420264.1.1506420272.1506420264.; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_custom_request("prefs_2", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/profile/prefs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"watt/sap.watt.platform.tipsandtricks.service.tipsandtricks/showonstartup\":false,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProjectCommon\":1506405607266,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/sap.xs.java.project.web.template\":1506319377511,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProject\":1506405608178,\"watt/"
		"sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/version\":1,\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/nodes\":\"[\\\"folder::workspace\\\",\\\"folder:/MTA_PERF_ALL:workspace\\\",\\\"folder:/sd:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main"
		"/java/com/company/MTA_PERF_ALL/Java/extensiontemplate:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java:workspace\\\"]\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/selected\":\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/linked\":false,\"watt/sap.watt.platform.plugin.notificationmanager.service.NotificationManager/messages\":\"[]\","
		"\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_HTML5.run/settings\":\"[{\\\"filePath\\\":\\\"/HTML5/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\""
		":\\\"webapprunner\\\",\\\"id\\\":5800856,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506262568523},\\\"moduleType\\\":\\\"com.sap.hcp.html5\\\"}]\",\"watt/sap.watt.common.service.ui.Perspective/_currentPerspective\":\"development\",\"watt/sap.watt.common.service.ui.Perspective/version\":1,\"watt/sap.watt.common.service.ui.Perspective/userpreference_lastKnown\":\"{\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/userpreference\":\""
		"{\\\"content\\\":{\\\"userpreference_left\\\":\\\"userpref_master\\\",\\\"userpreference_center\\\":\\\"userpref_detail\\\"},\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/development\":\"{\\\"content\\\":{\\\"left\\\":\\\"repositorybrowser\\\",\\\"center_top\\\":\\\"content\\\",\\\"center_bottom\\\":\\\"console\\\"},\\\"left\\\":\\\"30.077619663648125%\\\",\\\"right\\\":\\\"hidden\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/"
		"sap.watt.common.service.ui.Perspective/development_lastKnown\":\"{\\\"left\\\":\\\"30.077619663648125%\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/activetab\":\"{\\\"editor\\\":\\\"aceeditor\\\",\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/version\":1,\"watt/"
		"sap.watt.common.content.service.ContentServicePersistence/tabs\":\"[{\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/pom.xml:workspace\\\",\\\"editor\\\":\\\"aceeditor\\\"},{\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\",\\\"editor\\\":\\\"aceeditor\\\"}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._sd.run/settings\":\"[{\\\"filePath\\\":\\\"/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\""
		"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177}}]\",\"watt/userEnabledFeatures/enabledFeatures\":\"[\\\""
		"javatools\\\"]\",\"watt/userEnabledFeatures/disabledFeatures\":\"[]\",\"watt/sap.watt.common.plugin.welcomescreen.service.Version/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"v_171012\",\"watt/sap.watt.common.plugin.run.service.history/configurationNames\":\"{\\\"5800856\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/HTML5\\\"},\\\"6460937\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"},\\\""
		"8182912\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"},\\\"8423384\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/sd\\\"},\\\"9999279\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}\",\"watt/sap.watt.common.plugin.run.service.history/runConfigurations\":\"[{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\""
		"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177,\\\"projectPath\\\":\\\"/sd\\\"}},{\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\""
		":1506328166718,\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_simplejava.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"workspaceId\\\":\\\""
		"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/simplejava/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/"
		"UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\",\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\""
		"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"hasIssues\\\":true}}]\",\"watt/sap.watt.common.Monitoring/FioriCloudEditionUser\":false,\"watt/sap.watt.common.service.ui.WelcomeScreen/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"{\\\"bIsVersionUpdate\\\":false,\\\"oVersionUpdate\\\":{\\\"from\\\":\\\"170928\\\",\\\"to\\\":\\\"171012\\\"}}\",\"watt/sap.watt.ideplatform.generationwizard.sortMode/sortMode\""
		":\"recentlyUsed\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTAP710800_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTAP710800/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTAP710800/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\"
		"\"lastRunTimeStamp\\\":1506328166718},\\\"sModulePath\\\":\\\"/MTAP710800/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/sap.watt.platform.filefilter.FileFilterHide/hidden\":true,\"watt/sap.watt.common.plugin.platform.service.keepalive.KeepAlive/nLastLogonTimestamp\":1506420253446}", 
		LAST);

	web_url("diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com_3", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/?rand=94188", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_filepath&e_a=unknown&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=831344&h=13&m=4&s=50&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&"
		"java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=unhandledError&custom2=USAGE&custom3=NONE_SAP&custom4=&custom5=&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", ENDITEM, 
		LAST);

	web_add_cookie("_swa_id.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=45af37ff84697ea0.1506420264.1.1506420327.1506420264.; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_url("Plugin.js", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/resources/sap/watt/platform/plugin/content/Plugin.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("SampleServiceModelExt.java", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/project/workspace8e0eap0s1q9nmgo4/file/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/extensiontemplate/SampleServiceModelExt.java", 
		"Resource=1", 
		"RecContentType=text/x-java", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_custom_request("prefs_3", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/profile/prefs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"watt/sap.watt.platform.tipsandtricks.service.tipsandtricks/showonstartup\":false,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProjectCommon\":1506405607266,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/sap.xs.java.project.web.template\":1506319377511,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProject\":1506405608178,\"watt/"
		"sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/version\":1,\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/nodes\":\"[\\\"folder::workspace\\\",\\\"folder:/MTA_PERF_ALL:workspace\\\",\\\"folder:/sd:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main"
		"/java/com/company/MTA_PERF_ALL/Java/extensiontemplate:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java:workspace\\\"]\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/selected\":\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/extensiontemplate/SampleServiceModelExt.java:workspace\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/linked\":false,\"watt/"
		"sap.watt.platform.plugin.notificationmanager.service.NotificationManager/messages\":\"[]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_HTML5.run/settings\":\"[{\\\"filePath\\\":\\\"/HTML5/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\""
		"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":5800856,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506262568523},\\\"moduleType\\\":\\\"com.sap.hcp.html5\\\"}]\",\"watt/sap.watt.common.service.ui.Perspective/_currentPerspective\":\"development\",\"watt/sap.watt.common.service.ui.Perspective/version\":1,\"watt/sap.watt.common.service.ui.Perspective/userpreference_lastKnown\":\"{\\\""
		"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/userpreference\":\"{\\\"content\\\":{\\\"userpreference_left\\\":\\\"userpref_master\\\",\\\"userpreference_center\\\":\\\"userpref_detail\\\"},\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/development\":\"{\\\"content\\\":{\\\"left\\\":\\\"repositorybrowser\\\",\\\"center_top\\\":\\\"content\\\",\\\"center_bottom\\\":\\\"console\\\"},\\\"left\\\":\\\""
		"30.077619663648125%\\\",\\\"right\\\":\\\"hidden\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/development_lastKnown\":\"{\\\"left\\\":\\\"30.077619663648125%\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/version\":1,\"watt/sap.watt.common.content.service.ContentServicePersistence/tabs\":\"[]\",\"watt/sap.watt.common.content.service.ContentServicePersistence/activetab\":\"{\\\"editor\\\":\\\"aceeditor\\"
		"\",\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/extensiontemplate/SampleServiceModelExt.java:workspace\\\"}\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._sd.run/settings\":\"[{\\\"filePath\\\":\\\"/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":["
		"],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177}}]\",\"watt/userEnabledFeatures/enabledFeatures\":\"[\\\"javatools\\\"]\",\"watt/userEnabledFeatures/disabledFeatures\":\"[]\",\"watt/sap.watt.common.plugin.welcomescreen.service.Version/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\""
		"v_171012\",\"watt/sap.watt.common.plugin.run.service.history/configurationNames\":\"{\\\"5800856\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/HTML5\\\"},\\\"6460937\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"},\\\"8182912\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"},\\\"8423384\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\""
		":\\\"/sd\\\"},\\\"9999279\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}\",\"watt/sap.watt.common.plugin.run.service.history/runConfigurations\":\"[{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177,\\\"projectPath\\\":\\\"/sd\\\"}},{\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\","
		"\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506328166718,\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java "
		"Application\\\",\\\"lastRunTimeStamp\\\":1506320631895,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_simplejava.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/simplejava/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\""
		"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/Java/pom.xml\\\","
		"\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\",\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"hasIssues\\\":true}}]\",\"watt/sap.watt.common.Monitoring/FioriCloudEditionUser\":false,\"watt/"
		"sap.watt.common.service.ui.WelcomeScreen/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"{\\\"bIsVersionUpdate\\\":false,\\\"oVersionUpdate\\\":{\\\"from\\\":\\\"170928\\\",\\\"to\\\":\\\"171012\\\"}}\",\"watt/sap.watt.ideplatform.generationwizard.sortMode/sortMode\":\"recentlyUsed\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTAP710800_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTAP710800/Java\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\""
		":\\\"/MTAP710800/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506328166718},\\\"sModulePath\\\":\\\"/MTAP710800/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/sap.watt.platform.filefilter.FileFilterHide/hidden\":true,\"watt/"
		"sap.watt.common.plugin.platform.service.keepalive.KeepAlive/nLastLogonTimestamp\":1506420253446}", 
		EXTRARES, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPDocumentAdapter&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=071848&h=13&m=5&s=48&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=onTabSelected&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPManager&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=298072&h=13&m=5&s=48&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getControllerInstance&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPDocumentAdapter&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=253897&h=13&m=5&s=53&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=onDocumentClosed&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPManager&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=284134&h=13&m=5&s=53&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getControllerInstance&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPDocumentAdapter&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=246424&h=13&m=5&s=55&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=onTabSelected&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://trackerexta90daed17.hana.ondemand.com/tracker/log?e_c=ide_module&e_a=sap.watt.ideplatform.languageserverprotocol%2Fservice%2FLSPManager&idsite=7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5&rec=1&r=735960&h=13&m=5&s=55&url=https%3A%2F%2Fdiperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com%2F&urlref=http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&_id=45af37ff84697ea0&_idts=1506420264&_idvc=1&_idn=0&_refts=1506420264&_viewts=1506420264&_ref="
		"http%3A%2F%2F10.26.156.125%3A50000%2Fsaml2%2Fidp%2Fsso&send_image=0&pdf=1&qt=0&realp=0&wma=0&dir=0&fla=0&java=0&gears=0&ag=0&cookie=1&res=1630x983&gt_ms=80&timezone=-180&locale=en-US&pageTitle=SAP+Web+IDE&pageWidth=1630&pageHeight=877&custom1=serviceTimeout&custom2=USAGE&custom3=NONE_SAP&custom4=method&custom5=getControllerInstance&custom6=171012&custom7=CANARY&custom8=&custom9=&custom10=wf1f52214&custom11=&event_type=custom&element_type=event", "Referer=https://"
		"diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNjEuMC4zMTYzLjEwMBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAIaAhgFDlxDKCIEIAEgAigGGicIChAIGhkKDQgKEAgYASIDMDAxMAUQLxoCGAXP1Q7oIgQgASACKAUaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBctREociBCABIAIoAxonCAkQARoZCg0ICRAGGAEiAzAwMTABEAgaAhgFcStgsyIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQkfECGgIYBVRRm1oiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEIsBGgIYBY3ty_YiBCABIAIoARopCAIQARobCg0IAhAGGAEiAzAwMTABENSGAxoCGAWCznKWIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC9ggMaAhgF6KOhdCIEIAEgAigBGikIBxABGhsKDQ"
		"gHEAYYASIDMDAxMAEQp_IBGgIYBcfF3CciBCABIAIoARooCAEQCBoaCg0IARAIGAEiAzAwMTAEEIgGGgIYBdmLC2giBCABIAIoBBonCAoQCBoZCg0IChAIGAEiAzAwMTABEAQaAhgFd5sjkSIEIAEgAigBGicIDRABGhkKDQgNEAYYASIDMDAxMAEQBhoCGAWNPp1QIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_swa_id.7a7ab2fe-3cf9-4eab-892a-9dc80cad0ca5.0079=45af37ff84697ea0.1506420264.1.1506420356.1506420264.; DOMAIN=diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com");

	web_custom_request("prefs_4", 
		"URL=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/di/profile/prefs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"watt/sap.watt.platform.tipsandtricks.service.tipsandtricks/showonstartup\":false,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProjectCommon\":1506405607266,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/sap.xs.java.project.web.template\":1506319377511,\"watt/sap.watt.ideplatform.generationwizard.recentlyUsedTemplates/ui5template.basicSAPUI5ApplicationProject\":1506405608178,\"watt/"
		"sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/version\":1,\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/nodes\":\"[\\\"folder::workspace\\\",\\\"folder:/MTA_PERF_ALL:workspace\\\",\\\"folder:/sd:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java/src/main"
		"/java/com/company/MTA_PERF_ALL/Java/extensiontemplate:workspace\\\",\\\"folder:/MTA_PERF_ALL/Java:workspace\\\"]\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/selected\":\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\",\"watt/sap.watt.common.repositorybrowser.service.RepositoryBrowserPersistence/linked\":false,\"watt/sap.watt.platform.plugin.notificationmanager.service.NotificationManager/messages\":\"[]\","
		"\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_HTML5.run/settings\":\"[{\\\"filePath\\\":\\\"/HTML5/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\""
		":\\\"webapprunner\\\",\\\"id\\\":5800856,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506262568523},\\\"moduleType\\\":\\\"com.sap.hcp.html5\\\"}]\",\"watt/sap.watt.common.service.ui.Perspective/_currentPerspective\":\"development\",\"watt/sap.watt.common.service.ui.Perspective/version\":1,\"watt/sap.watt.common.service.ui.Perspective/userpreference_lastKnown\":\"{\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/userpreference\":\""
		"{\\\"content\\\":{\\\"userpreference_left\\\":\\\"userpref_master\\\",\\\"userpreference_center\\\":\\\"userpref_detail\\\"},\\\"userpreference_left\\\":\\\"20%\\\"}\",\"watt/sap.watt.common.service.ui.Perspective/development\":\"{\\\"content\\\":{\\\"left\\\":\\\"repositorybrowser\\\",\\\"center_top\\\":\\\"content\\\",\\\"center_bottom\\\":\\\"console\\\"},\\\"left\\\":\\\"30.077619663648125%\\\",\\\"right\\\":\\\"hidden\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/"
		"sap.watt.common.service.ui.Perspective/development_lastKnown\":\"{\\\"left\\\":\\\"30.077619663648125%\\\",\\\"center_top\\\":\\\"70%\\\"}\",\"watt/sap.watt.common.content.service.ContentServicePersistence/version\":1,\"watt/sap.watt.common.content.service.ContentServicePersistence/tabs\":\"[{\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\",\\\"editor\\\":\\\"aceeditor\\\"}]\",\"watt/"
		"sap.watt.common.content.service.ContentServicePersistence/activetab\":\"{\\\"editor\\\":\\\"aceeditor\\\",\\\"keystring\\\":\\\"file:/MTA_PERF_ALL/Java/src/main/java/com/company/MTA_PERF_ALL/Java/dpc/MyDataProvider.java:workspace\\\"}\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._sd.run/settings\":\"[{\\\"filePath\\\":\\\"/webapp/index.html\\\",\\\"previewMode\\\":1,\\\"dataMode\\\":1,\\\"workspace\\\":\\\"withoutWorkspace\\\",\\\"ui5ActiveVersion\\\":null,\\\"ui5VerSource\\\":null,\\\""
		"isDefaultVersion\\\":0,\\\"isDefaultConfiguration\\\":false,\\\"urlParameters\\\":[],\\\"hashParameter\\\":\\\"\\\",\\\"backendSystem\\\":[],\\\"urlParametersNotNeeded\\\":false,\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177}}]\",\"watt/userEnabledFeatures/enabledFeatures\":\"[\\\"javatools\\\"]\",\"watt/userEnabledFeatures/disabledFeatures\":\"[]\",\"watt/"
		"sap.watt.common.plugin.welcomescreen.service.Version/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"v_171012\",\"watt/sap.watt.common.plugin.run.service.history/configurationNames\":\"{\\\"5800856\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/HTML5\\\"},\\\"6460937\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"},\\\"8182912\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\""
		":\\\"/MTA_PERF_ALL/Java\\\"},\\\"8423384\\\":{\\\"displayName\\\":\\\"Run index.html\\\",\\\"projectPath\\\":\\\"/sd\\\"},\\\"9999279\\\":{\\\"displayName\\\":\\\"Run Java Application\\\",\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}\",\"watt/sap.watt.common.plugin.run.service.history/runConfigurations\":\"[{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"webapprunner\\\",\\\"id\\\":8423384,\\\"displayName\\\":\\\"Run index.html\\\",\\\"lastRunTimeStamp\\\":1506405658177,\\\"projectPath\\\":\\\"/"
		"sd\\\"}},{\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\"}},{\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506328166718,\\\"projectPath\\\":\\\"/MTAP710800/Java\\\"}},{\\\"_metadata\\\":{\\\""
		"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895,\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\"}}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_simplejava.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/simplejava/pom.xml\\\",\\\"debug\\\":{\\\""
		"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":9999279,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506320631895},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/simplejava\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTA_PERF_ALL_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\""
		"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTA_PERF_ALL/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"sModulePath\\\":\\\"/MTA_PERF_ALL/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\",\\\"_metadata\\\":{\\\"id\\\":8182912,\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506340711393,\\\"hasIssues\\\":true}}]\",\"watt/"
		"sap.watt.common.Monitoring/FioriCloudEditionUser\":false,\"watt/sap.watt.common.service.ui.WelcomeScreen/diperf-wf1f52214.dispatcher.int.sap.hana.ondemand.com\":\"{\\\"bIsVersionUpdate\\\":false,\\\"oVersionUpdate\\\":{\\\"from\\\":\\\"170928\\\",\\\"to\\\":\\\"171012\\\"}}\",\"watt/sap.watt.ideplatform.generationwizard.sortMode/sortMode\":\"recentlyUsed\",\"watt/UserProjectSettings.workspace8e0eap0s1q9nmgo4._MTAP710800_Java.run/settings\":\"[{\\\"projectPath\\\":\\\"/MTAP710800/Java\\\",\\\""
		"workspaceId\\\":\\\"workspace8e0eap0s1q9nmgo4\\\",\\\"filePath\\\":\\\"/MTAP710800/Java/pom.xml\\\",\\\"debug\\\":{\\\"enabled\\\":false},\\\"window\\\":{\\\"open\\\":false,\\\"path\\\":\\\"/\\\"},\\\"_metadata\\\":{\\\"runnerId\\\":\\\"sap.xs.java.project.javaWebRunner\\\",\\\"id\\\":6460937,\\\"displayName\\\":\\\"Run Java Application\\\",\\\"lastRunTimeStamp\\\":1506328166718},\\\"sModulePath\\\":\\\"/MTAP710800/Java\\\",\\\"moduleType\\\":\\\"sap.java\\\"}]\",\"watt/"
		"sap.watt.platform.filefilter.FileFilterHide/hidden\":true,\"watt/sap.watt.common.plugin.platform.service.keepalive.KeepAlive/nLastLogonTimestamp\":1506420253446}", 
		LAST);

	return 0;
}