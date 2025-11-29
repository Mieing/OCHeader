@class NSString, WAReportBaseItem;

@interface WAWebViewPlugin_ReportPageEvent : WAWebViewPluginBase {
    unsigned long long m_clickTimeStamp;
    WAReportBaseItem *_baseItem;
}

@property (copy, nonatomic) NSString *referpagepath;

- (id)getReportBaseItemFromWebview:(unsigned long long)a0;
- (void)reportWebviewMenuAction:(unsigned long long)a0 actionResult:(unsigned long long)a1 actionNote:(id)a2 errCode:(int)a3;
- (void)reportWAJSApiResult:(id)a0 result:(id)a1;
- (void)reportWAJSApiResult:(id)a0 forEvent:(unsigned int)a1;
- (void)reportRequstPaymentApiPreOKCallResult:(id)a0 forEvent:(unsigned int)a1;
- (void)reportWeAppForwardMessage:(id)a0;
- (void)reportWAWebViewPageNotFound;
- (id)getAppID;
- (id)userName;
- (id)getCurrentUrl;
- (unsigned long long)appVersion;
- (unsigned int)getAppType;
- (unsigned long long)useState;
- (unsigned long long)appstate;
- (id)presentingPagePathForReport;
- (BOOL)reportPageEventFrom3rdProvideInfoWithKey:(id)a0 andValue:(id)a1;
- (BOOL)reportPublicJSInsideKVInfo:(unsigned int)a0 andValue:(id)a1 version:(unsigned int)a2 ignoreFreqCheck:(BOOL)a3;
- (void)reportWeAppGameRenderEvent:(unsigned int)a0 eventType:(unsigned int)a1 eventValue:(unsigned int)a2 gameDuration:(long long)a3;
- (void)reportGameCBFPSItem:(id)a0;
- (void)reportHomeButtonEvent:(unsigned long long)a0;
- (void).cxx_destruct;

@end
