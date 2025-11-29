@class NSString, IESLiveGCDTimer, NSHashTable;

@interface IESLivePaidTimeTrial : NSObject <IESLivePaidTrial>

@property (retain, nonatomic) NSHashTable *trialEventHandlers;
@property (nonatomic) double initialTrialTime;
@property (nonatomic) double minTrialTime;
@property (nonatomic) double maxTrialTime;
@property (nonatomic) double currentTrialTime;
@property (nonatomic) double remainingTime;
@property (nonatomic) double restartTrialDelta;
@property (copy, nonatomic) NSString *persistKey;
@property (retain, nonatomic) IESLiveGCDTimer *trialTimer;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registeredTrialEventHandlers;
- (void)registerTrialEventHandler:(id)a0;
- (void)unregisterTrialEventHandler:(id)a0;
- (double)getRemainingValue;
- (BOOL)inTrial;
- (BOOL)inTrialFinish;
- (void)reuse;
- (void)sendEventDidStop;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (void)sendEventWillStart:(unsigned long long)a0;
- (void)sendEventDidStart:(unsigned long long)a0;
- (void)sendEventDidPause;
- (void)sendEventDidFinishReason:(unsigned long long)a0;
- (void)stopTrialTimer;
- (void)tryStartTrialTimer;
- (void)tryTrialFinish;
- (void)startTrialTimer;
- (void)start:(double)a0 maxValue:(double)a1 persistKey:(id)a2;
- (void)forceUpdateTrialValue:(double)a0;
- (void)sendEventValueDidChange:(double)a0;
- (void)start:(double)a0 maxValue:(double)a1 persistKey:(id)a2 reason:(unsigned long long)a3;
- (double)verifyRemainingTime:(double)a0;
- (void)persistLocalRecord;
- (double)localTrialedRecord;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)leave;
- (void)resume;
- (void)dealloc;
- (double)getCurrentValue;

@end
