@class AWEShowMonetizeAOOPInterceptorManager, NSString, AWEShowMonetizeAOOPContext;
@protocol AWEPaymentEventHandlerProtocol;

@interface AWEPlayInteractionAOOPController : AWEPlayInteractionNewBaseController <AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionUILifeCycleProtocol, AWEPaidStreamPlugin, AWEPaymentEventHandlerDelegate>

@property (retain, nonatomic) AWEShowMonetizeAOOPInterceptorManager *interceptorManager;
@property (retain, nonatomic) AWEShowMonetizeAOOPContext *aoopContext;
@property (retain, nonatomic) id<AWEPaymentEventHandlerProtocol> eventHandler;
@property (nonatomic, getter=isPlayerDidStart) BOOL playerDidStart;
@property (nonatomic, getter=isCellDidDisplay) BOOL cellDidDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didDisplay;
- (id)traceParams;
- (void)handlePayEvent:(id)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)openBillPageWithCurrentPlaybackTime:(double)a0;
- (void)trackAutoOpenOrderPageFailWithReason:(id)a0;
- (id)getPaidStream;
- (BOOL)shouldActiveController;
- (void)openBillPageForRule:(long long)a0;
- (void)openBillPageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)containerID;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
