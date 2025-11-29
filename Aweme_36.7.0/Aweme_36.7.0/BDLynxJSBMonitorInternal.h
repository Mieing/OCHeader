@class NSString;

@interface BDLynxJSBMonitorInternal : NSObject <BDLynxBridgeListenerDelegate>

@property (nonatomic) BOOL turnOnJSBMonitor;
@property (nonatomic) BOOL turnOnFetchMonitor;
@property (nonatomic) BOOL turnOnJSBPerfMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getErrorInfoWithBridgeMessage:(id)a0 period:(long long)a1;
+ (id)createSLMonitorJSBParamsWithMessage:(id)a0;
+ (id)shareInstance;

- (void)lynxBridge:(id)a0 willCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 didCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 willHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 didHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 willCallback:(id)a1;
- (void)lynxBridge:(id)a0 didCallback:(id)a1;
- (BOOL)isRequestJSB:(id)a0;
- (void)reportErrorWithBridge:(id)a0 message:(id)a1 period:(long long)a2;
- (void)reportFetchErrorIfNeeded:(id)a0 withResultMessage:(id)a1;
- (void)reportXRequestErrorIfNeeded:(id)a0 withResultMessage:(id)a1;
- (void)reportPerfWithBridge:(id)a0 message:(id)a1;
- (void)monitorSLJSBCall:(id)a0 message:(id)a1;
- (id)toAdapterFetchErrorReport:(id)a0 withResultMessage:(id)a1;
- (id)toNormalFetchErrorReport:(id)a0 withResultMessage:(id)a1;
- (id)getFetchServerInfoFromMessage:(id)a0;
- (long long)codeForDict:(id)a0 key:(id)a1 defaultCode:(long long)a2;
- (id)getFetchInfoFromMessage:(id)a0 serverInfo:(id)a1 errCode:(long long)a2;
- (id)msgForDict:(id)a0 key:(id)a1 cls:(Class)a2;
- (id)toAdapterXRequestReport:(id)a0 withResultMessage:(id)a1;
- (id)toNormalXRequestReport:(id)a0 withResultMessage:(id)a1;
- (void)monitorSLXRequestCall:(id)a0 withResultMessage:(id)a1;
- (id)getXRequestInfoFromMessage:(id)a0 serverInfo:(id)a1;
- (id)getInfoWithBridgeMessage:(id)a0;
- (id)createSLMonitorXRequestParams:(id)a0;
- (id)dictionaryWithJsonString:(id)a0;

@end
