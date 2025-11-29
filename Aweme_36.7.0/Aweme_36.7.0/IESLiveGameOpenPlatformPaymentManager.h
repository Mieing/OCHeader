@class IESLiveToastLoadingViewController, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveGameOpenPlatformPaymentManager : NSObject <IESLiveGameOpenPlatformPaymentInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestPayQueue;
@property (retain, nonatomic) IESLiveToastLoadingViewController *loadingController;
@property (nonatomic) BOOL isPaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)pay:(id)a0 completion:(id /* block */)a1;
- (id)paymentPreConditionCheck:(id)a0;
- (void)_pay:(id)a0 completion:(id /* block */)a1;
- (BOOL)validateEntry:(id)a0;
- (void)reportEvent:(id)a0 appID:(id)a1 status:(long long)a2 params:(id)a3;
- (void)startPayWithEntry:(id)a0 completion:(id /* block */)a1;
- (void)requestOrderIdWithEntry:(id)a0 completion:(id /* block */)a1;
- (void)showConfirmPaymentViewWithEntry:(id)a0 completion:(id /* block */)a1;
- (void)chargeDiamonds:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)errorToastWithCode:(long long)a0;
- (void)requestPayWithEntry:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldRetryPayRequestWithError:(id)a0 orderStatus:(long long)a1;
- (void)retryPayRequestWithEntry:(id)a0 orderID:(id)a1 completion:(id /* block */)a2 maxRetryCount:(long long)a3;
- (id)errorWithOrderStatus:(int)a0;
- (void)p_requestPayWithEntry:(id)a0 orderID:(id)a1 completion:(id /* block */)a2;
- (void)p_queryOrderWithEntry:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
