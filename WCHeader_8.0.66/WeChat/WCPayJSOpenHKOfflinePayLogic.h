@protocol WCPayJSOpenHKOfflinePayLogicDelegate;

@interface WCPayJSOpenHKOfflinePayLogic : WCPayJSAuthBaseLogic

@property (weak, nonatomic) id<WCPayJSOpenHKOfflinePayLogicDelegate> delegate;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)authOk;
- (void)authFail;
- (void).cxx_destruct;

@end
