@interface CJSwiftIAPStore.CJSwiftIAPSK1Store : NSObject <SKPaymentTransactionObserver> {
    void /* unknown type, empty encoding */ productsDic;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ productRequestDelegates;
    void /* unknown type, empty encoding */ callBackDic;
    void /* unknown type, empty encoding */ restoreCallBack;
    void /* unknown type, empty encoding */ restoredTransactions;
    void /* unknown type, empty encoding */ isFirstLaunch;
}

- (void)paymentQueue:(id)a0 updatedTransactions:(id)a1;
- (void)paymentQueue:(id)a0 restoreCompletedTransactionsFailedWithError:(id)a1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)a0;
- (BOOL)paymentQueue:(id)a0 shouldAddStorePayment:(id)a1 forProduct:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
