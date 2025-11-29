@interface WAReportUtil : MMObject

+ (void)fillReportBase:(id)a0 appID:(id)a1;
+ (void)reprotWAWebViewPV:(id)a0;
+ (void)reprotWAWebViewMenuAction:(id)a0;
+ (void)reportJSApiAction:(id)a0;
+ (void)reportWAOuterMenuAction:(id)a0;
+ (void)reportDestopOperateAction:(id)a0;
+ (void)reportDestopShowAction:(id)a0;
+ (void)reportStarListShowAction:(id)a0;
+ (void)reportJSError:(id)a0;
+ (void)reportWAWebViewPageError:(id)a0;
+ (void)reportAppInstallOrUpdate:(id)a0;
+ (void)reportTemplateMsgAction:(id)a0;
+ (void)reportKFSessionMsgAction:(id)a0;
+ (void)reportKFSessionAction:(id)a0;
+ (void)reportKFSessionPageEnterItem:(id)a0;
+ (void)reportNativeProfilePageActionItem:(id)a0;
+ (void)reportNearByWeappActionItem:(id)a0;
+ (void)reportKFSessionMsgPageActionItem:(id)a0;
+ (void)reportForwardMessageAction:(id)a0;
+ (void)reportWKTerminateAction:(id)a0;
+ (void)reportGameRenerAction:(id)a0;
+ (void)reportMainFrameTaskBarAction:(id)a0;
+ (void)reportPackageDeleteAction:(id)a0;
+ (void)reportPackageCheckAction:(id)a0;
+ (void)reportGameCBFPSAction:(id)a0;
+ (void)reportEvaluateSheetAction:(id)a0;
+ (void)reportNavBackAlertAction:(id)a0;
+ (void)reportError:(unsigned long long)a0 contact:(id)a1 appType:(unsigned long long)a2 scene:(unsigned long long)a3 sceneNote:(id)a4;
+ (void)reportWithItem:(id)a0;
+ (void)reportWeAppLog:(int)a0 reportString:(id)a1;
+ (void)reportWeAppLog:(int)a0 item:(id)a1;
+ (id)getNetType;
+ (id)getUserAgent;
+ (unsigned long long)getCurrentTimeStamp;
+ (unsigned long long)getCurrentTimeStampInMsSince1970;
+ (unsigned long long)getCostTimeInMsWithBeginTime:(unsigned long long)a0 endTime:(unsigned long long)a1;
+ (id)genSessionIDWithPrefix:(id)a0 hostScene:(int)a1;
+ (id)getAppBrandInfoByUserName:(id)a0;
+ (unsigned long long)conventDebugModeType2ReportAppState:(unsigned long long)a0;
+ (unsigned int)publicLibVersion;
+ (void)reportLoadPackageInvalid:(id)a0;

@end
