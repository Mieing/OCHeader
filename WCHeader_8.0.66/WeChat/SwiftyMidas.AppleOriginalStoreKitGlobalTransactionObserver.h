@interface SwiftyMidas.AppleOriginalStoreKitGlobalTransactionObserver : NSObject <SKPaymentTransactionObserver> {
    void /* unknown type, empty encoding */ pendingHandleTransactions;
    void /* unknown type, empty encoding */ paymentReceiver;
    void /* unknown type, empty encoding */ restoreReceiver;
    void /* unknown type, empty encoding */ hasRegisteredOriginalStoreKitObserver;
    void /* unknown type, empty encoding */ promotedCallbackProductId;
}

- (BOOL)paymentQueue:(id)a0 shouldAddStorePayment:(id)a1 forProduct:(id)a2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)a0;
- (void)paymentQueue:(id)a0 restoreCompletedTransactionsFailedWithError:(id)a1;
- (void)paymentQueue:(id)a0 updatedTransactions:(id)a1;
- (void)paymentQueueDidChangeStorefront:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
