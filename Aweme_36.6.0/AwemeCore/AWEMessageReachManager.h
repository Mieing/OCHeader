@class AWEMessageReachDelayRequestBubbleManager, NSString, NSArray, AWEMessageReachColdLaunchCacheModel, MMKV, AWEMessageReachLaunchBubbleScheduler, AWEMessageReachOpportunityManager, AWEMessageReachMonitorManager;
@protocol AWEMessageReachDataAbilityProtocol, AWEMessageReachShowCountInnerAbilityProtocol, AWEMessageReachChannelAbilityProtocol, AWEMessageReachRecordAbilityProtocol, AWEMessageReachSideBarStrategyAbilityProtocol;

@interface AWEMessageReachManager : NSObject <AWEMessageReachInternalAbilityProtocol, AWEMessageReachManagerProtocol>

@property (retain, nonatomic) AWEMessageReachOpportunityManager *opportunityManager;
@property (retain, nonatomic) id<AWEMessageReachDataAbilityProtocol> dataAbility;
@property (retain, nonatomic) id<AWEMessageReachChannelAbilityProtocol> channelAbility;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWEMessageReachColdLaunchCacheModel *cacheModel;
@property (nonatomic) BOOL coldLaunchRecoveryTimeArrived;
@property (retain, nonatomic) id<AWEMessageReachRecordAbilityProtocol> recordAbility;
@property (retain, nonatomic) id<AWEMessageReachSideBarStrategyAbilityProtocol> sideBarStrategyAbility;
@property (retain, nonatomic) id<AWEMessageReachShowCountInnerAbilityProtocol> dotShowCountManager;
@property (copy, nonatomic) NSArray *componentScenes;
@property (retain, nonatomic) AWEMessageReachMonitorManager *monitorManager;
@property (retain, nonatomic) AWEMessageReachDelayRequestBubbleManager *delayRequestBubbleManager;
@property (retain, nonatomic) AWEMessageReachLaunchBubbleScheduler *launchBubbleScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)messageReachFollowChannelComponentMoveEnable;
- (BOOL)mrMallMigrateEnable;
- (BOOL)mrMallColdLaunchMigrateEnable;
- (BOOL)mrMallTrackEnable;
- (long long)getMessageReachGrouponKeyVersionFlag;
- (BOOL)messageReachTabDotMoveEnable:(id)a0;
- (BOOL)messageReachComponentMoveEnable;
- (BOOL)messageReachGrouponComponentMoveEnable;
- (BOOL)messageReachChannelComponentMoveEnable:(id)a0;
- (BOOL)messageReachGetGrouponColdLaunchMoveEnableWithTabStatus:(BOOL)a0;
- (void)setupDotAbilityConfig;
- (void)setupBasicAbilityConfig;
- (void)setUpComponentScenes;
- (void)setUpCache;
- (void)messageReachColdLaunchLoadCacheComplete;
- (void)appDidFinishColdLaunch;
- (void)appDidFinishHotLaunch;
- (BOOL)messageReachGrouponColdLaunchMoveEnabled;
- (BOOL)mrGrouponGuideBubbleVideoCheck;
- (BOOL)getMRGrouponMigrateTrackEnable;
- (void).cxx_destruct;
- (void)setup;
- (void)setupConfig;

@end
