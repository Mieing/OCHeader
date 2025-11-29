@class NSString;
@protocol WCPayJSOpenLQTDepositPlanAddLogicDelegate;

@interface WCPayJSOpenLQTDepositPlanAddLogic : WCPayJSAuthBaseLogic <WCBaseControlMgrExt>

@property (weak) id<WCPayJSOpenLQTDepositPlanAddLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 param:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)authFail;
- (void)authOk;
- (void)startLQTFixedDepositAddPlan;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void).cxx_destruct;

@end
