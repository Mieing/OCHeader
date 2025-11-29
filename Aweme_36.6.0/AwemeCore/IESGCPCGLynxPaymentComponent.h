@class NSString, BDXBridgeEventSubscriber, UIView, IESGCPXPlayGameAPI;

@interface IESGCPCGLynxPaymentComponent : IESGCPCGInstanceBaseComponent <IESGCPCGStandardizedLynxActions, IESGCPCGLynxPaymentRouter>

@property (nonatomic) BOOL isLynxBenefitViewShow;
@property (nonatomic) long long payType;
@property (retain, nonatomic) BDXBridgeEventSubscriber *paySubscriber;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (retain, nonatomic) UIView *doubleBallView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (void)_dismissDoubleBallLoading;
- (void)_showDoubleBallLoading;
- (void)onLynxContainer:(id)a0 lifeCycle:(long long)a1;
- (void)requestGetEnjoyCardInfoWithOrderId:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)_registerPayEventCallbackSubscriber;
- (void)_handleEnjoyCardPayEventWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
