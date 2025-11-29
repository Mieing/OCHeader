@class NSString, NSMutableDictionary;

@interface WAOpenSDKJSEventHandler_requestPayment : WAOpenSDKJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt>

@property (retain, nonatomic) NSMutableDictionary *dic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (void)onWCPayPayMoneySuccess:(id)a0;
- (void)onWCPayJSApiResult:(id)a0 needCloseWebview:(BOOL)a1;
- (void)onWCPayJSApiResult:(id)a0 needCloseWebview:(BOOL)a1 tinyappUsername:(id)a2 tinyappPath:(id)a3;
- (void).cxx_destruct;

@end
