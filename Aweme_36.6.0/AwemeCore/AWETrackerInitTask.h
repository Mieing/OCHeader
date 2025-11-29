@class NSString;

@interface AWETrackerInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupTracker;
+ (void)setupMonitor;
+ (id)gurdAccessKey;
+ (void)startTrackerService;
+ (BOOL)isTrackerConfigured;
+ (void)setupDataIRISDevTool;
+ (BOOL)awe_nunkiEnableLocSwitchCache;
+ (double)awe_nunkiLocSwitchDidChangedDelayTime;
+ (void)setupInstallAndDevice;
+ (void)setupAddVids;
+ (void)setupTrackerHookers;
+ (void)setUpLocationDelegateIfNeeded;
+ (void)setupBTMTracker;
+ (void)setupTrackerPassthrough;
+ (void)setupDependencyInjection;
+ (void)handleABTestChange;
+ (void)setupInstallServiceConfig;
+ (Class)aAWEInfraConfigModuleServiceHTSAdapterClass;
+ (Class)aAWELaunchLandingDOUYINLGAdapterClass;
+ (void)setEventSampling;
+ (void)setupBacktrackConfig;
+ (BOOL)shouldTurnOnTrackerEventFilter;
+ (void)setupTrackerCustomHeader;
+ (void)setupBDTrackerProtocol;
+ (void)setTrackerProtocol;
+ (BOOL)locSwitchCachedValue;
+ (id)timonInstallUUID;
+ (id)bcmConfigPath;
+ (Class)aAWENewUserActivateTrackAdapterClass;
+ (void)setTTIRISTracker;
+ (void)load;
+ (void)execute;

- (id)aAWEInfraConfigModuleServiceHTSAdapter;
- (id)aAWENewUserActivateTrackAdapter;
- (id)aAWELaunchLandingDOUYINLGAdapter;

@end
