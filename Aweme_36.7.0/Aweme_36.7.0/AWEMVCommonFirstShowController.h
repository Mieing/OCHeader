@class NSString, AWEMVKeychainSharing, AWEMVDataRequestContext, AWEMVChannelPageContext;

@interface AWEMVCommonFirstShowController : AWEDCFeedBaseController <AWEMVFirstLaunchControllerProtocol, AWEMVDataPluginProtocol>

@property (nonatomic) long long lastNetworkStatus;
@property (nonatomic) BOOL shouldAppendFirstFetch;
@property (nonatomic) BOOL deviceIdRegistered;
@property (readonly, nonatomic) BOOL shouldObserveDeviceId;
@property (nonatomic) BOOL inDetail;
@property (copy, nonatomic) id /* block */ pendingCompletion;
@property (nonatomic) BOOL isFetchingFirstFetch;
@property (nonatomic) BOOL isFirstFetchData;
@property (nonatomic) BOOL shouldTriggerFirstFetchForBackgroundLaunch;
@property (nonatomic) BOOL enableKeychainShareDID;
@property (copy, nonatomic) NSString *keychainSharingDID;
@property (retain, nonatomic) AWEMVKeychainSharing *keychainSharing;
@property (retain, nonatomic) AWEMVDataRequestContext *waitDeviceIDRequestContext;
@property (copy, nonatomic) id /* block */ waitDIDCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEFeedModuleServiceCommonAdaperClass;

- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)initialFetchData;
- (void)handleConnectionChanged:(id)a0;
- (void)addNotifications;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEFeedModuleServiceCommonAdaper;
- (BOOL)shouldInterceptResponseCompletion:(id /* block */)a0 responseModel:(id)a1 context:(id)a2;
- (BOOL)shouldInterceptResponseCompletion:(id /* block */)a0 context:(id)a1 error:(id)a2;
- (BOOL)autoAttachToDataController:(id)a0;
- (void)checkRefreshAnimationWhenAppearIfNeeded;
- (void)recordStartPlayTimeForCacheVideoIfNeeded;
- (void)initialFetchDataOnForeground;
- (id)appendedSkeletonWithModels:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
