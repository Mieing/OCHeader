@class NSString;

@interface AWEFeedOfflineCenterModuleService : HTSService <AWEFeedOfflineCenterModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)offlineModeSavePlayedVideoItemID:(id)a0;
+ (void)offlineModePlayedItemIDArrayReport;
+ (long long)offlineCacheSizeTotal;
+ (void)cleanOfflineModeCache;
+ (id)offlineCommentCacheManager;
+ (long long)getOfflineModeCacheVideoCount;
+ (void)setForyouFeedDataController:(id)a0;
+ (BOOL)checkLeftSpaceEnough;
+ (BOOL)shouldBlockOfflineToast;
+ (void)configEnableOfflineMode:(BOOL)a0;
+ (BOOL)networkAlreadyFlag;
+ (void)configNetworkAlreadyFlag:(BOOL)a0;
+ (void)configHomepagePlayerStop:(BOOL)a0;
+ (void)checkVideoSafetyWithModel:(id)a0 index:(long long)a1;
+ (void)showOfflinePanelWithLoadMoreTimeOut;


@end
