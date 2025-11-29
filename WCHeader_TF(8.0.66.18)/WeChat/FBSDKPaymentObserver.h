@class NSString;

@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver> {
    BOOL _observingTransactions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startObservingTransactions;
+ (void)stopObservingTransactions;
+ (id)singleton;

- (id)init;
- (void)startObservingTransactions;
- (void)stopObservingTransactions;
- (void)paymentQueue:(id)a0 updatedTransactions:(id)a1;
- (void)handleTransaction:(id)a0;

@end
