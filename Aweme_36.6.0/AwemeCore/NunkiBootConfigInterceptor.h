@class NSString;

@interface NunkiBootConfigInterceptor : NSObject <HTSBootConfigInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableBGDownload;
+ (id)bootConfigInterceptor;
+ (id)bootSortConfig;
+ (BOOL)enableBackgroundLaunch;
+ (BOOL)inDebugOrInhouseMode;
+ (id)getSubStageWithStage:(id)a0;
+ (unsigned long long)getTaskCountWithBootConfig:(id)a0;
+ (id)LandingPageBootSortConfig;
+ (id)bgAppRefreshBootTaskSet;
+ (BOOL)enableBgFetch;
+ (BOOL)enableLocalNotiPrewarm;
+ (BOOL)enableBGSilentPush;
+ (BOOL)enableCloudkit;

- (BOOL)bootConfigRecoveryEnable;
- (id)deepCopyBootConfig:(id)a0;
- (id)bootSortWithBootConfig:(id)a0 AndCopyConfig:(id)a1;
- (id)backgroundLaunchSilentPushConfig;
- (id)backgroundLaunchCloudkitConfig;
- (id)backgroundLaunchBGDownloadConfig;
- (long long)p_backgroundLaunchEnableVersion;
- (id)bgFetchWithCopyConfig:(id)a0;
- (id)moveLaunchTaskToFirstFGWithConfig:(id)a0;
- (id)debugTaskInsertWithCopyConfig:(id)a0;
- (id)backgroundLaunchBGFetchConfig;
- (id)backgroundLaunchLocalPushConfig;
- (id)getTaskMapWithOriginConfig:(id)a0;
- (void)uploadALogIfNeeded;
- (id)p_bgAppRefreshBootTaskSet;
- (id)p_launchTaskToFirstFgList;
- (id)silentPushBootConfigFromPayload;
- (id)interceptBootConfig:(id)a0;

@end
