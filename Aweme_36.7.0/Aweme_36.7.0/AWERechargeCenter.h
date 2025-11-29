@class NSDictionary, NSMutableDictionary, NSString;
@protocol AWEYAPModuleService;

@interface AWERechargeCenter : NSObject <AWEYAPIAPStoreDelegateProtocol, AWERechargeCenterProtocol>

@property (nonatomic) BOOL hasTriggerSetup;
@property (copy, nonatomic) id /* block */ buyCompletion;
@property (retain, nonatomic) NSMutableDictionary *delegates;
@property (retain, nonatomic) id<AWEYAPModuleService> payService;
@property (readonly, nonatomic) NSDictionary *productsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCenter;

- (void)startupService;
- (void)buyWithBizParams:(id)a0 completion:(id /* block */)a1;
- (id)cjPayVersion;
- (void)preFetchProducts:(id)a0 completion:(id /* block */)a1;
- (void)checkUnverifiedTransaction;
- (void)didFinishProductOrder:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)didFinishProductOrderInBack:(id)a0 resultType:(long long)a1 error:(id)a2;
- (BOOL)shouldHandleProduct:(id)a0;
- (id)businessIdentify:(id)a0;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:(id)a0 newBuyingProductID:(id)a1 newOrderParams:(id)a2;
- (void)openDYYapDeskWithConfig:(id)a0 orderParams:(id)a1 completion:(id /* block */)a2;
- (void)addDelegate:(id)a0 forBusiness:(id)a1;
- (void)p_didFinishProductOrder:(id)a0 product:(id)a1 success:(BOOL)a2 error:(id)a3;
- (BOOL)p_shouldHandleTransactionOfProduct:(id)a0;
- (id)delegateForProduct:(id)a0;
- (void)removeDelegateForBusiness:(id)a0;
- (BOOL)shouldInterceptAppStorePaymentQueue:(id)a0 payment:(id)a1 forProduct:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canMakePayments;

@end
