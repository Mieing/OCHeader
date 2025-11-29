@class NSString, NSDictionary, CJPayIAPMonitor, NSHashTable;
@protocol CJIAPStoreDelegate;

@interface CJIAPStoreManager : NSObject <CJIAPStoreDelegate, SKRequestDelegate>

@property (readonly, copy, nonatomic) NSHashTable *iapDelegates;
@property (weak, nonatomic) id<CJIAPStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CJPayIAPMonitor *monitor;
@property (nonatomic) BOOL hasStartedupService;
@property (copy, nonatomic) NSHashTable *iapDelegates;
@property (readonly, copy, nonatomic) NSDictionary *productsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)paymentQueue:(id)a0 shouldAddStorePayment:(id)a1 for:(id)a2;
- (void)offerCodeNotificationWithModel:(id)a0;
- (void)startupService;
- (void)preFetchProducts:(id)a0 completion:(id /* block */)a1;
- (void)checkUnverifiedTransaction;
- (void)startIAPWithParams:(id)a0;
- (void)becomeIESStoreDelegateCenter;
- (void)restoreTransactionsWithUid:(id)a0 WithIapIDs:(id)a1 completion:(id /* block */)a2;
- (void)didFinishProductOrder:(id)a0 resultType:(long long)a1 error:(id)a2;
- (void)didFinishProductOrderInBack:(id)a0 resultType:(long long)a1 error:(id)a2;
- (BOOL)shouldHandleProduct:(id)a0;
- (id)businessIdentify:(id)a0;
- (void)iesFetchOrderInfoWithProductID:(id)a0 product:(id)a1;
- (void)iesSendTransactionWithOrderID:(id)a0 receipt:(id)a1 transaction:(id)a2;
- (void)iesCheckFinalResultWithOrderID:(id)a0 receipt:(id)a1 transaction:(id)a2;
- (void)showLoadingWithStage:(long long)a0 productId:(id)a1 text:(id)a2;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:(id)a0 newBuyingProductID:(id)a1 newOrderParams:(id)a2;
- (BOOL)shouldInterceptAppStorePaymentQueue:(id)a0 payment:(id)a1 forProduct:(id)a2;
- (void)iesBuyProduct:(id)a0 productID:(id)a1 orderID:(id)a2 error:(id)a3;
- (void)addCJIAPStoreDelegate:(id)a0;
- (id)iapDelegates;
- (void)removeCJIAPStoreDelegate:(id)a0;
- (id)getCopyIAPDelegates;
- (id)_getFitDelegateShouldHandleProduct:(id)a0;
- (void)eventV:(id)a0 params:(id)a1 productID:(id)a2;
- (void)startIAPWithParams:(id)a0 product:(id)a1;
- (void)newPreFetchProducts:(id)a0 completion:(id /* block */)a1;
- (void)restoreTransactionsWithUid:(id)a0 Completion:(id /* block */)a1;
- (void)configIAPWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canMakePayments;
- (void)presentCodeRedemptionSheet;

@end
