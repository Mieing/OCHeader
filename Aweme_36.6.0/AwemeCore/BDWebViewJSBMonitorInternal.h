@class NSString, NSMutableDictionary;

@interface BDWebViewJSBMonitorInternal : NSObject <IESBridgeEngineInterceptor>

@property (retain, nonatomic) NSMutableDictionary *invokeTS;
@property (retain, nonatomic) NSMutableDictionary *callbackTS;
@property (retain, nonatomic) NSMutableDictionary *fireEventTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getErrorInfoWithBridgeMessage:(id)a0 period:(long long)a1;
+ (id)createSLMonitorJSBParamsWithMessage:(id)a0;
+ (BOOL)switchStatusWith:(id)a0 webview:(id)a1;
+ (BOOL)isTurnOnJSBMonitor:(id)a0;
+ (BOOL)isTurnOnJSBPerfMonitor:(id)a0;
+ (BOOL)isTurnOnFetchErrorMonitor:(id)a0;
+ (id)getInfoWithFetchQueueInfo:(id)a0;
+ (id)shareInstance;

- (void)bridgeEngine:(id)a0 willHandleBridgeMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didHandleBridgeMessage:(id)a1;
- (void)bridgeEngine:(id)a0 willCallbackWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didCallbackWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 willFireEventWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didFireEventWithMessage:(id)a1;
- (void)bridgeEngine:(id)a0 didFetchQueueWithInfo:(id)a1;
- (BOOL)isRequestJSB:(id)a0;
- (void)monitorSLJSBCall:(id)a0 message:(id)a1;
- (id)getFetchServerInfoFromMessage:(id)a0;
- (long long)codeForDict:(id)a0 key:(id)a1 defaultCode:(long long)a2;
- (id)msgForDict:(id)a0 key:(id)a1 cls:(Class)a2;
- (id)getXRequestInfoFromMessage:(id)a0 serverInfo:(id)a1;
- (id)getInfoWithBridgeMessage:(id)a0;
- (id)createSLMonitorXRequestParams:(id)a0;
- (void)reportErrorWithBridgeEngine:(id)a0 message:(id)a1 period:(long long)a2;
- (void)reportRequestErrorIfNeeded:(id)a0 withResultMessage:(id)a1 requestType:(unsigned long long)a2;
- (void)reportPerfWithBridgeEngine:(id)a0 message:(id)a1;
- (id)toAdapterWebFetchError:(id)a0 withResultMessage:(id)a1;
- (id)toNormalWebFetchError:(id)a0 withResultMessage:(id)a1 webView:(id)a2;
- (id)toAdapterWebXRequestError:(id)a0 withResultMessage:(id)a1;
- (id)toNormalWebXRequestError:(id)a0 withResultMessage:(id)a1 webView:(id)a2;
- (void)monitorSLXRequestCall:(id)a0 bridgeMessage:(id)a1;
- (id)reportFetchErrorIfNeeded:(id)a0 serverInfo:(id)a1 webView:(id)a2;
- (id)getFetchInfoFromMessage:(id)a0 serverInfo:(id)a1 httpCode:(long long)a2 errCode:(long long)a3;
- (id)reportXRequestErrorIfNeeded:(id)a0 serverInfo:(id)a1 webView:(id)a2;
- (id)dictionaryWithJsonString:(id)a0;
- (void).cxx_destruct;

@end
