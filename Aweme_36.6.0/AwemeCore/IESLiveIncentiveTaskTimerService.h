@class NSString, BDXBridgeEventSubscriber, NSHashTable, IESLiveGCDTimer;
@protocol IESLiveIncentiveTaskTouchAPI;

@interface IESLiveIncentiveTaskTimerService : IESLiveGeneralBaseService <IESLiveIncentiveTaskTimerService>

@property (nonatomic) double totalCountDownDuration;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;
@property (nonatomic) long long restRounds;
@property (nonatomic) BOOL timerWorking;
@property (nonatomic) BOOL didRequestData;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<IESLiveIncentiveTaskTouchAPI> api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)p_applicationWillTerminate;
- (void)p_invalidateTimer;
- (void)updateWithTreasureBoxParams:(id)a0;
- (double)getRestTime;
- (void)addBoxObserver:(id)a0;
- (void)requestTaskTimeData;
- (void)willExitRoom;
- (void)storeCurrentTaskTime;
- (void)p_addTreasureBoxPanelObserver;
- (void)p_boxRemindObserved;
- (void)p_boxCountDownObserved;
- (void)p_setUpCountDownTimer;
- (void)p_noTreasureBoxObserved;
- (void)p_handleCountDownTimer;
- (void)p_dealWithTaskCenterEntranceResponse:(id)a0;
- (void)p_fetchTaskCenterEntrance;
- (void).cxx_destruct;
- (void)addObserver;
- (id)currentDate;
- (void)dealloc;
- (void)setupTimer;

@end
