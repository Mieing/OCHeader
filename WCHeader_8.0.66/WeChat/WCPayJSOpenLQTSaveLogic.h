@class NSString;
@protocol WCPayJSOpenLQTSaveLogicDelegate;

@interface WCPayJSOpenLQTSaveLogic : WCPayJSAuthBaseLogic <WCPayLQTMoneyControlLogicDelegate>

@property (weak) id<WCPayJSOpenLQTSaveLogicDelegate> m_delegate;
@property (retain) NSString *traceInfo;
@property (retain) NSString *operateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)authFail;
- (void)authOk;
- (id)packageParam;
- (void)onLQTMoneyControlLogicStop:(BOOL)a0;
- (void).cxx_destruct;

@end
