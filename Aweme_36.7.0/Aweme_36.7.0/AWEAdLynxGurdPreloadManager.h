@class NSLock, NSMapTable, NSString;
@protocol AWEWebViewConfigProtocol;

@interface AWEAdLynxGurdPreloadManager : NSObject <IESGurdEventDelegate, IESFalconGurdInterceptionDelegate>

@property (nonatomic) BOOL gurdInitialized;
@property (retain, nonatomic) NSMapTable *adModelCache;
@property (retain, nonatomic) id<AWEWebViewConfigProtocol> webConfig;
@property (retain, nonatomic) NSLock *cacheLock;
@property (copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)gurdWillDownloadPackageForAccessKey:(id)a0 channel:(id)a1 isPatch:(BOOL)a2;
- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)gurdDidRequestConfigForAccessKey:(id)a0 configsDictionary:(id)a1;
- (void)gurdDidCleanCachePackageForAccessKey:(id)a0 channel:(id)a1;
- (BOOL)enableLynxGurdPreloadWithModel:(id)a0;
- (void)didReceiveMemoryWarningNotification;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)updateLogPanel:(id)a0;
- (void)showLogPanel;
- (BOOL)isValidAccessKey:(id)a0;
- (void)trackFeedPlayablePreloadStatusWithAdModel:(id)a0 extraParams:(id)a1;
- (id)feedPlayableAccessKey;
- (id)accessKeyForAdModel:(id)a0;
- (BOOL)isFullScreenLynxSceneWithModel:(id)a0;
- (void)processFullScreenLynxChannels:(id)a0 accessKey:(id)a1 channalListDic:(id)a2 adModel:(id)a3;
- (void)setupGurdForLynxIfNeeded;
- (BOOL)isValidChannel:(id)a0 andAccessKey:(id)a1;
- (id)accessKeyForLynxPageNew;
- (void)syncResourcesWithModelListIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)accessKey;

@end
