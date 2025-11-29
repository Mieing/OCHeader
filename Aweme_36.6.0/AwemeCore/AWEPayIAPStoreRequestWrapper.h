@class NSString;
@protocol AWEPayIAPStoreRequestWrapperProtocol, AWEYAPIAPStoreDelegateProtocol;

@interface AWEPayIAPStoreRequestWrapper : NSObject <CJIAPStoreDelegate>

@property (weak, nonatomic) id<AWEYAPIAPStoreDelegateProtocol> originalDelegate;
@property (weak, nonatomic) id<AWEPayIAPStoreRequestWrapperProtocol> wrapperProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDelegate:(id)a0;

- (void)event:(id)a0 params:(id)a1;
- (void)paymentQueue:(id)a0 shouldAddStorePayment:(id)a1 for:(id)a2;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
