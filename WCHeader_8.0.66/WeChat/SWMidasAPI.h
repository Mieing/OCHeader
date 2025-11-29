@class NSString, UIViewController, UIWindowScene;

@interface SWMidasAPI : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_restoreHelper;
}

@property (class, nonatomic, retain) UIWindowScene *availableWindowScene;
@property (class, nonatomic, readonly) NSString *sdkVersion;
@property (class, nonatomic, retain) UIViewController *currentTopViewController;

@property (nonatomic) void /* unknown type, empty encoding */ currentProcess;
@property (nonatomic) void /* unknown type, empty encoding */ currentEnvrionment;
@property (nonatomic) void /* unknown type, empty encoding */ currentLocale;
@property (nonatomic, retain) void /* unknown type, empty encoding */ currentUser;

+ (void)setRuntimeDelegateWithDelegate:(id)a0;
+ (void)getSubscriptionProductStatusWithSubscriptionProductIDs:(id)a0 usingStoreKit2:(BOOL)a1 shouldUpdateReceipt:(BOOL)a2 completion:(id /* block */)a3;
+ (void)getPromotionalOfferEligibleInfoUsingStoreKit2:(BOOL)a0 shouldUpdateReceipt:(BOOL)a1 completion:(id /* block */)a2;
+ (void)showDowngradeManageSubscriptionPageWithCompletion:(id /* block */)a0;
+ (void)showManageSubscriptionPageWithShouldDowngrade:(BOOL)a0 completion:(id /* block */)a1;
+ (void)showRefundPageWithTransactionID:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)bindingPaymentMethodWithPinningID:(id)a0 completion:(id /* block */)a1;
+ (void)queryAppleProductInfosInObjCWithAppleProductIDs:(id)a0 useMemoryCached:(BOOL)a1 usingStoreKit2Above15:(BOOL)a2 shouldQueryIntroOfferQualification:(BOOL)a3 completion:(id /* block */)a4;
+ (id)queryAppleProductInfosInMemoryWithProductIDs:(id)a0;
+ (BOOL)canMakePayments;
+ (void)clearMemory;
+ (void)setCustomLoadingWithLoading:(id)a0;
+ (void)setIndependentDeploymentInfoWithInfo:(id)a0;
+ (void)setKVStorageContainerWithContainer:(id)a0;

- (void)restoreWithCompletion:(id /* block */)a0;
- (BOOL)reprovideManuallyWithShouldFinishTransactionWhenReprovideFail:(BOOL)a0;
- (void)purchaseInObjCWithContent:(id)a0 forUser:(id)a1 with:(id)a2 completion:(id /* block */)a3;
- (id)initWithUser:(id)a0 process:(long long)a1 environment:(long long)a2 locale:(long long)a3 reprovideDelegate:(id)a4 usingStoreKit2Above15:(BOOL)a5;
- (void)setPromotedIAPCallbackWithCallback:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
