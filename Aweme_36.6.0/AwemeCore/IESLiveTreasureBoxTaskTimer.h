@class BDXBridgeEventSubscriber, NSHashTable, IESLiveGCDTimer;

@interface IESLiveTreasureBoxTaskTimer : NSObject

@property (nonatomic) double totalCountDownDuration;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;
@property (nonatomic) long long restRounds;
@property (nonatomic) BOOL timerWorking;
@property (retain, nonatomic) NSHashTable *observers;

- (void)p_applicationWillTerminate;
- (void)p_invalidateTimer;
- (void)updateWithTreasureBoxParams:(id)a0;
- (double)getRestTime;
- (void)addBoxObserver:(id)a0;
- (void)willExitRoom;
- (void)storeCurrentTaskTime;
- (void)p_addTreasureBoxPanelObserver;
- (void)p_boxRemindObserved;
- (void)p_boxCountDownObserved;
- (void)p_setUpCountDownTimer;
- (void)p_noTreasureBoxObserved;
- (void)p_handleCountDownTimer;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (id)currentDate;
- (void)dealloc;
- (void)setupTimer;

@end
