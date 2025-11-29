@class NSMutableDictionary, NSTimer, NSString, IESLiveDynamicIslandActivityModel;
@protocol IESLiveDynamicIslandOuterService;

@interface IESLiveDynamicIslandActivityService : IESLiveGeneralBaseService <IESLiveDynamicIslandActivityService>

@property (nonatomic) BOOL isFirstEnter;
@property (nonatomic) BOOL isActivityBusinessChanged;
@property (retain, nonatomic) id<IESLiveDynamicIslandOuterService> activityService;
@property (retain, nonatomic) IESLiveDynamicIslandActivityModel *activityModel;
@property (retain, nonatomic) NSTimer *startActivityTimer;
@property (retain, nonatomic) NSTimer *updateActivityTimer;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) double startTime;
@property (nonatomic) double watchDuration;
@property (nonatomic) double watchTotalDuration;
@property (retain, nonatomic) NSMutableDictionary *businessDict;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *enterWidgetType;
@property (nonatomic) BOOL dynamicActivityShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (BOOL)dynamicIslandIsShowing;
- (void)initParams;
- (void)p_applicationWillTerminate;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (BOOL)isEcomLiveRoom;
- (void)p_didEnterBackground;
- (void)startDynamicActivity;
- (void)updateDynamicActivity;
- (void)updateDynamicRealtimeActivityStyle:(long long)a0;
- (void)startDynamicRealtimeWithActivityType:(long long)a0 activityDuration:(id)a1;
- (void)endDynamicRealtimeWithActivityType:(long long)a0;
- (void)endDynamicActivityAll;
- (void)p_didBecomeActiveNotification;
- (void)invalidateStartActivityTimer;
- (void)invalidateUpdateActivityTimer;
- (void)invalidateCountDownTimer;
- (void)p_enterTracker;
- (void)p_durationTracker;
- (void)updateDynamicRealtimeActivityIfNeed;
- (id)roomSchemaWithParams;
- (id)activityModelParamsDictionary;
- (void)p_activityAuthorizationTracker:(BOOL)a0;
- (long long)fetchCurrentActivityType;
- (void)updateDynamicRealtimeActivityWithDuration:(id)a0 activityType:(long long)a1;
- (void)cleanDynamicRealtimeActivity;
- (void)p_afterIslandDurationTracker;
- (void)endDynamicActivity;
- (long long)getPriorityWithType:(long long)a0;
- (id)fetchSortedKeyArray;
- (void).cxx_destruct;
- (void)addObserver;
- (void)removeObserver;
- (void)setEnterType:(id)a0;

@end
