@class IESECLiveAtomicSchedulerModel, IESECLiveContext, NSString, IESECGCDTimer;

@interface IESECLiveAtomicAbilityScheduler : NSObject <IESECLiveAtomicSchedulerService>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) IESECLiveAtomicSchedulerModel *schedulerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTimerIfNeeded;
- (id)initWithLiveContext:(id)a0;
- (void)p_analyseDSL:(id)a0;
- (void)p_routerActionByScheduleType;
- (void)p_doActionImmediately;
- (void)p_doActionDelay;
- (void)p_doActionCycle;
- (void)p_doActionRandom;
- (void)scheduleExecuteWithConfig:(id)a0;
- (BOOL)checkIntervalCycleSchedulerExist;
- (void).cxx_destruct;
- (void)cancelSchedule;

@end
