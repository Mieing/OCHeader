@class IESLiveChargeLoadingView, RACDisposable, NSString;
@protocol IESLiveCJPayService;

@interface IESLiveCJPayPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveCJPayService> cjpayService;
@property (weak, nonatomic) IESLiveChargeLoadingView *loadingView;
@property (retain, nonatomic) RACDisposable *handler;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)p_removeLoading;
- (void)p_addLoadingViewIfNeeded;
- (void)registerAuthYapilaWithBridge:(id)a0;
- (id /* block */)CJPrefetchCallHandler;
- (id /* block */)CJModalViewCallHandler;
- (id /* block */)authCertifiFromFinanceCallHandler;
- (id /* block */)notifyCouponDeleteSuccessCallHandler;
- (id /* block */)ttpayCallHandler;
- (id /* block */)iapPayCallHandler;
- (void)pr_buyProductWithIapID:(id)a0 productId:(id)a1 source:(id)a2 extra:(id)a3 showNewLoading:(BOOL)a4 callBack:(id /* block */)a5;
- (void).cxx_destruct;

@end
