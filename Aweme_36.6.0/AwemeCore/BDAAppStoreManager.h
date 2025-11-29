@class BDAAppStorePreloadList, BDAAppStorePreloadItem, NSString;

@interface BDAAppStoreManager : NSObject <SKStoreProductViewControllerDelegate>

@property (nonatomic) BOOL presenting;
@property (retain, nonatomic) BDAAppStorePreloadList *preloadList;
@property (retain, nonatomic) BDAAppStorePreloadItem *presentingItem;
@property (nonatomic) BOOL preloadOnlyWIFI;
@property (nonatomic) BOOL enablePreventSKGesture;
@property (nonatomic) unsigned long long maxPreloadCount;
@property (nonatomic) BOOL isReusePreload;
@property (readonly, nonatomic) long long supportPreloadType;
@property (nonatomic) BOOL isPresentAnimated;
@property (nonatomic) BOOL isEnableFixRetainCycle;
@property (nonatomic) BOOL isCallSkanImpressionInAsyncThread;
@property (nonatomic) BOOL isForbidAppStoreLogic;
@property (nonatomic) BOOL shouldRequestAppManager;
@property (nonatomic) BOOL isHalfAppStore;
@property (nonatomic) unsigned long long halfAppStoreFrameY;
@property (nonatomic) BOOL isForbidSKStoreProductViewController;
@property (nonatomic) BOOL enableRetainSkvcAvoidCrash;
@property (nonatomic) BOOL isForbidSkanLogic;
@property (copy, nonatomic) id /* block */ SKStoreInitAction;
@property (copy, nonatomic) id /* block */ openURLAction;
@property (copy, nonatomic) id /* block */ openURLWithCompletionAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endImpressionWithSkanParamsString:(id)a0 adEventData:(id)a1 completionHandler:(id /* block */)a2;
+ (void)startImpressionWithSkanParamsString:(id)a0 adEventData:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasControllerPreloadedByAppID:(id)a0;
+ (id)controllerPreloadedByAppID:(id)a0;
+ (void)clearPreloadCacheByAppID:(id)a0;
+ (void)clearPreloadCacheBySKController:(id)a0;
+ (id)convertProductParamsWithModel:(id)a0;
+ (void)trackCommerceJumpEventWithModel:(id)a0 isPermit:(BOOL)a1 errorCode:(long long)a2 errorCodeMessage:(id)a3;
+ (void)checkAppStorePermissionWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)trackCommerceOpenEventWithModel:(id)a0 isPermit:(BOOL)a1 errorCode:(long long)a2 errorCodeMessage:(id)a3;
+ (void)trackReserveInfoIfNeededWithModel:(id)a0;
+ (void)clearAllPreloadCache;
+ (void)requestAppStoreManagerWithModel:(id)a0 times:(long long)a1 completion:(id /* block */)a2;
+ (void)trackAppManagerRequestEventWithModel:(id)a0 complianceData:(id)a1 appleId:(id)a2 status:(long long)a3 duration:(double)a4 times:(long long)a5 message:(id)a6;
+ (id)complianceDataMonitors:(id)a0;
+ (void)preloadAppStoreControllerWithModel:(id)a0;
+ (void)openAppStoreControllerWithModel:(id)a0;
+ (id)duplicatedControllerWithAppID:(id)a0 dismissAnimated:(BOOL)a1;
+ (id)convertProductParamsWithSKAdParamString:(id)a0;
+ (id)convertSKAdImpressionParamsWithSKAdParamString:(id)a0;
+ (id)sharedManager;

- (BOOL)hasControllerPreloadedByAppID:(id)a0;
- (id)controllerPreloadedByAppID:(id)a0;
- (void)clearPreloadCacheByAppID:(id)a0;
- (void)clearPreloadCacheBySKController:(id)a0;
- (void)sdkSessionLaunchMonitor;
- (void)preloadAppStoreControllerWithAppID:(id)a0 skAdNetworkParams:(id)a1 businessIdentifyInfo:(id)a2 adID:(id)a3 logExtra:(id)a4 isDuplicate:(BOOL)a5 completion:(id /* block */)a6 preloadScene:(id)a7;
- (void)openAppStoreControllerWithAppID:(id)a0 downloadUrl:(id)a1 model:(id)a2;
- (void)clearAllPreloadCache;
- (id)duplicatedControllerPreloadedByAppID:(id)a0 dismissAnimated:(BOOL)a1;
- (BOOL)shouldStartPreloadWithAppID:(id)a0 error:(id *)a1;
- (void)trackPreloadEndEventWithAdId:(id)a0 logExtra:(id)a1 appleId:(id)a2 status:(BOOL)a3 hasPresent:(BOOL)a4 failedReason:(long long)a5 duration:(int)a6 error:(id)a7;
- (void)trackOpenEndEventWithAdId:(id)a0 logExtra:(id)a1 appleId:(id)a2 status:(BOOL)a3 successStyle:(long long)a4 failedReason:(long long)a5 duration:(int)a6 trackParams:(id)a7 error:(id)a8 adExtraData:(id)a9;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
