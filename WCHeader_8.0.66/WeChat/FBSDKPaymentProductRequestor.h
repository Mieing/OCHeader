@class NSString, NSSet, NSMutableSet, NSDateFormatter, SKProductsRequest, SKPaymentTransaction;

@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate> {
    NSMutableSet *_originalTransactionSet;
    NSSet *_eventsWithReceipt;
    NSDateFormatter *_formatter;
}

@property (retain, nonatomic) SKProductsRequest *productRequest;
@property (retain, nonatomic) SKPaymentTransaction *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithTransaction:(id)a0;
- (void)resolveProducts;
- (id)getTruncatedString:(id)a0;
- (void)logTransactionEvent:(id)a0;
- (BOOL)isSubscription:(id)a0;
- (id)getEventParametersOfProduct:(id)a0 withTransaction:(id)a1;
- (void)appendOriginalTransactionID:(id)a0;
- (void)clearOriginalTransactionID:(id)a0;
- (BOOL)isStartTrial:(id)a0 ofProduct:(id)a1;
- (BOOL)hasStartTrial:(id)a0;
- (id)durationOfSubscriptionPeriod:(id)a0;
- (void)productsRequest:(id)a0 didReceiveResponse:(id)a1;
- (void)requestDidFinish:(id)a0;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)cleanUp;
- (void)logImplicitSubscribeTransaction:(id)a0 ofProduct:(id)a1;
- (void)logImplicitPurchaseTransaction:(id)a0 ofProduct:(id)a1;
- (void)logImplicitTransactionEvent:(id)a0 valueToSum:(double)a1 parameters:(id)a2;
- (id)fetchDeviceReceipt;
- (void).cxx_destruct;

@end
