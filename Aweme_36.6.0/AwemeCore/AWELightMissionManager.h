@class NSArray, NSTimer, NSString, AWELightMissionModel;

@interface AWELightMissionManager : HTSService <AWEGokuPluginTargetProtocol, AWEGokuBridgePlayVideoViewControllerMessage, AWELightMissionManagerProtocol>

@property (nonatomic) double duration;
@property (nonatomic) BOOL isFromHomepage;
@property (nonatomic) BOOL isFromTopic;
@property (retain, nonatomic) AWELightMissionModel *lightMissionModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long maxReportTime;
@property (nonatomic) long long minReportTime;
@property (nonatomic) long long playState;
@property (nonatomic) double realWatchTime;
@property (nonatomic) BOOL isPlayVideo;
@property (nonatomic) BOOL isInSearch;
@property (copy, nonatomic) NSArray *requirements;
@property (copy, nonatomic) NSString *authorIdWhenLeaveVideo;
@property (nonatomic) double stayWatchTime;
@property (nonatomic) BOOL isSuspendReported;
@property (nonatomic) long long idleThreshold;
@property (nonatomic) long long curLoopTime;
@property (nonatomic) BOOL isFromLightMission;
@property (nonatomic) long long reportTimesBetweenIdleThreshold;
@property (nonatomic) BOOL hasAlreadyEnterGoodsPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isParticipateMission:(id)a0;
- (void)reportMissionStayPageDuration;
- (void)destroyLightMissionModel;
- (BOOL)isInLightMissionPeriod:(id)a0;
- (void)forceReportLightMission;
- (BOOL)lightMissionWillEnterSearchScene;
- (BOOL)continueLightMissionWithParam:(id)a0;
- (void)scrollViewChanged;
- (BOOL)isLightMissionStyle;
- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)stopWith:(id)a0;
- (void)playerDidUpdateWith:(id)a0;
- (void)playerWillLoopPlayingWith:(id)a0;
- (BOOL)canReportLightMission;
- (void)handleRequirementModel:(id)a0;
- (void)resetReportedStatus;
- (void)reportMissionWatchVideoTime:(id)a0;
- (BOOL)handleDifferentRequirementID:(unsigned long long)a0;
- (void)reportLightMissionWithSourceType:(long long)a0;
- (BOOL)handleDifferentScene;
- (void)reportLightMission;
- (void)reportAntiSpammngInfoWithSourceType:(long long)a0;
- (BOOL)isInLightMissionPeriod;
- (void)forceReportLightMission:(id)a0;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (unsigned long long)moduleNames;

@end
