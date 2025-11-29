@class NSString;

@interface AWEGurdSettingsManager : NSObject <AWEAppAwemeSettingMessage, AWEResourcePreloadScheduleDelegate>

@property (class, nonatomic) BOOL gurdEnable;

@property (nonatomic) double freeSpace;
@property (nonatomic) BOOL blockAllResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEGurdSettingsManagerCommonAdapterClass;
+ (id)sharedManager;
+ (void)setup;

- (void)awemeSettingDidChange;
- (long long)monitorFlushCount;
- (void)configGurdSettings;
- (void)abTestConfigurationChanged;
- (void)startResourceMetric;
- (void)setNeedFixDownloadApplyDeadlock;
- (void)setGeckoTimerOpt;
- (void)configExpiredChannels;
- (void)configRequestBlocklist;
- (void)setPreChannel;
- (void)geckoSetOndemandExperiment;
- (void)setGurdForbidCustomRequest;
- (void)setGeckoEnableUnzipOpt;
- (void)setGeckoAllowAsyncFetchConfig;
- (id)aAWEGurdSettingsManagerCommonAdapter;
- (void)geckoOptimizeForLowSpace;
- (void)geckoOptimizeForSensitiveStorage;
- (void)geckoOptimizeForSensitiveStorageLabel;
- (void)lowSpaceExploring;
- (void)resourcePreloadSchedule;
- (BOOL)enableCleanExtremelyTask;
- (void)blockAllResourcePreload;
- (void)addLowSpaceOptimizeWhiteList:(id)a0;
- (void)resumeDownloadIfNeeded;
- (BOOL)firstLaunchAfter:(long long)a0;
- (void)configRequestBlocklistWithStatus:(BOOL)a0;
- (BOOL)isGurdEnabled;
- (void)resourcePreloadScheduleStateDidChange:(id)a0;
- (id)resourcePreloadScheduleQueue;
- (BOOL)isNetworkDelegateEnabled;
- (BOOL)onDemandEnableWithLaunchDays:(long long)a0;
- (void)dealloc;

@end
