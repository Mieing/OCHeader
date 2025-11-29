@class NSMutableDictionary;

@interface WAJSEventHandler_requestVerifyUserIdentity : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate>

@property (retain, nonatomic) NSMutableDictionary *dic;

- (void)handleJSEvent:(id)a0;
- (id)getWCPayPayParam;
- (id)getTinyappUserName;
- (id)getTinyappPath;
- (void).cxx_destruct;

@end
