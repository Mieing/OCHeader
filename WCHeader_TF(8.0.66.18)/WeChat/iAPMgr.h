@class JailBreakHelper, NSString, NSMutableSet, NSMutableArray, iAPCache;

@interface iAPMgr : MMUserService <SKPaymentTransactionObserver, SKProductsRequestDelegate, PBMessageObserverDelegate, MMServiceProtocol> {
    NSMutableSet *_setSKProductsRequests;
    NSMutableArray *_arrRestoredTransactions;
    NSMutableArray *_arrRestoredVerifiedTransaction;
    BOOL _bIsRestoring;
    unsigned int _status;
    iAPCache *_iAPCache;
}

@property (retain, nonatomic) JailBreakHelper *m_jailBreakHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getBizTypeOfProductID:(id)a0;
+ (unsigned int)getIdKeyIdIAP;
+ (unsigned int)getIdKeyPreparePurchaseFailed;
+ (unsigned int)getIdKeyIAPPurchaseFailed;
+ (unsigned int)getIdKeyVerifyPurchaseFailed;

- (id)pathForCache;
- (void)writeCache;
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (BOOL)isNonConsumable:(id)a0;
- (BOOL)isHandleByIAPMgr:(id)a0;
- (BOOL)preparePurchase:(id)a0 extInfo:(id)a1;
- (void)verifyTransation:(id)a0 verifyType:(int)a1;
- (void)verifyTransationForUnVerifyTransaction:(id)a0 verifyType:(int)a1 uiscene:(unsigned int)a2;
- (void)verifyTransationForUnVerifyTransactionAll:(unsigned int)a0;
- (void)cancelPurchase:(id)a0 verifyType:(int)a1;
- (void)paymentQueue:(id)a0 updatedTransactions:(id)a1;
- (void)paymentQueue:(id)a0 removedTransactions:(id)a1;
- (void)paymentQueue:(id)a0 restoreCompletedTransactionsFailedWithError:(id)a1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)a0;
- (void)productsRequest:(id)a0 didReceiveResponse:(id)a1;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (BOOL)GetProduct:(id)a0;
- (BOOL)cannotPurchaseDuetoJailbreakPlugin:(BOOL)a0;
- (long long)Purchase:(id)a0 extInfo:(id)a1 NeedCheckJailBreak:(BOOL)a2;
- (long long)Purchase:(id)a0 extInfo:(id)a1;
- (long long)RestoreCompletedTransactionsNeedCheckJailBreak:(BOOL)a0;
- (long long)RestoreCompletedTransactions;
- (BOOL)FinishTransaction:(id)a0;
- (void)finishTransactionForTransactionID:(id)a0;
- (void)onVerifyPurchaseForPurchase:(id)a0 request:(id)a1 IapRet:(long long)a2;
- (void)restoreNextTransaction:(id)a0;
- (void)onVerifyPurchaseForRestore:(id)a0 request:(id)a1;
- (void)onVerifyPurchase:(id)a0;
- (void)onPreparePurchase:(id)a0;
- (long long)covertErrcode:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
