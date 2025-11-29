@class NSString;
@protocol WCPayJSOpenLQTDetailLogicDelegate;

@interface WCPayJSOpenLQTDetailLogic : WCPayJSAuthBaseLogic <WCPayLQTDetailControlLogicDelegate>

@property (weak) id<WCPayJSOpenLQTDetailLogicDelegate> m_delegate;
@property (retain) NSString *traceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)authFail;
- (void)authOk;
- (void)onLQTDetailControlLogicStop;
- (void).cxx_destruct;

@end
