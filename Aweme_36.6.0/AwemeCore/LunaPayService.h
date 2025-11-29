@class NSString, NSMutableDictionary;
@protocol AWEMusicIAPServiceDelegate, AWEYAPModuleService;

@interface LunaPayService : HTSService <AWEYAPIAPStoreDelegateProtocol, AWEMusicCommerceService>

@property (retain, nonatomic) id<AWEYAPModuleService> payService;
@property (retain, nonatomic) NSMutableDictionary *productsDict;
@property (weak, nonatomic) id<AWEMusicIAPServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startupService;
- (void)startIAPWithParams:(id)a0;
- (void)becomeIESStoreDelegateCenter;
- (void)preloadIAPProductsWithIDList:(id)a0 finishBlock:(id /* block */)a1;
- (BOOL)shouldHandleThisIapID:(id)a0;
- (void)didFinishProductOrder:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)didFinishProductOrderInBack:(id)a0 resultType:(long long)a1 error:(id)a2;
- (BOOL)shouldHandleProduct:(id)a0;
- (id)businessIdentify:(id)a0;
- (void)iesFetchOrderInfoWithProductID:(id)a0 product:(id)a1;
- (void)iesSendTransactionWithOrderID:(id)a0 receipt:(id)a1 transaction:(id)a2;
- (void)iesCheckFinalResultWithOrderID:(id)a0 receipt:(id)a1 transaction:(id)a2;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:(id)a0 newBuyingProductID:(id)a1 newOrderParams:(id)a2;
- (BOOL)shouldInterceptAppStorePaymentQueue:(id)a0 payment:(id)a1 forProduct:(id)a2;
- (BOOL)isUserCancel:(id)a0;
- (void)etReportSettleLogProduct:(id)a0 duration:(double)a1 error:(id)a2 fromBackground:(BOOL)a3 logExtra:(id)a4;
- (void)etReportCreateOrderSuccess:(BOOL)a0 duration:(double)a1 orderStatus:(long long)a2 orderCreateStatus:(long long)a3 error:(id)a4 logExtra:(id)a5;
- (void)etReportValidateResultSuccess:(BOOL)a0 duration:(double)a1 purchPrice:(double)a2 settleCode:(long long)a3 orderStatusCode:(long long)a4 orderCreateStatusCode:(long long)a5 retry:(long long)a6 error:(id)a7 logId:(id)a8 logExtra:(id)a9;
- (void)settleFinishWithProduct:(id)a0 resultType:(long long)a1 error:(id)a2 inBack:(BOOL)a3;
- (void)iesBuyProduct:(id)a0 productID:(id)a1 orderID:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasService;

@end
