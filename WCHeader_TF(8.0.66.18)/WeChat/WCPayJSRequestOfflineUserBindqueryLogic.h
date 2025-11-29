@class NSString, KindaJSEvent;
@protocol WCPayJSRequestOfflineUserBindqueryLogicDelegate;

@interface WCPayJSRequestOfflineUserBindqueryLogic : WCPayJSAuthBaseLogic <WCPayOfflineLogicExt>

@property (weak, nonatomic) id<WCPayJSRequestOfflineUserBindqueryLogicDelegate> delegate;
@property (retain, nonatomic) KindaJSEvent *jsEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)authOk;
- (void)authFail;
- (void)onOfflineLogicHandleRequestUserBindqueryJSAPIRet:(BOOL)a0;
- (BOOL)checkIsKindaOfflinePay;
- (void).cxx_destruct;

@end
