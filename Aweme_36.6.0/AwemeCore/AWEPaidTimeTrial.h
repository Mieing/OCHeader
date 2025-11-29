@class NSString, AWEGCDTimer, NSHashTable;
@protocol AWEPaidTrialDelegate;

@interface AWEPaidTimeTrial : NSObject <AWEPaidTrial>

@property (retain, nonatomic) NSHashTable *trialEventHandlers;
@property (nonatomic) double initialTrialTime;
@property (nonatomic) double maxTrialTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double restartTrialDelta;
@property (retain, nonatomic) AWEGCDTimer *trialTimer;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) unsigned long long currentType;
@property (nonatomic) BOOL isTimeTrialAlreadyFinished;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (weak, nonatomic) id<AWEPaidTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getTrialledValue;
- (id)registeredTrialEventHandlers;
- (void)registerTrialEventHandler:(id)a0;
- (void)unregisterTrialEventHandler:(id)a0;
- (void)start:(double)a0 maxValue:(double)a1 type:(unsigned long long)a2;
- (double)getRemainingValue;
- (void)forceUpdateWithType:(unsigned long long)a0 trialledValue:(double)a1 maxValue:(double)a2;
- (BOOL)inTrial;
- (BOOL)inTrialFinish;
- (void)sendEventDidStop;
- (void)log:(id)a0 extraParams:(id)a1;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (void)sendEventWillStart:(unsigned long long)a0;
- (void)sendEventDidStart:(unsigned long long)a0;
- (void)sendEventDidPause;
- (void)sendEventDidFinishReason:(unsigned long long)a0;
- (void)sendEventDidChangeValue:(double)a0 totalValue:(double)a1;
- (void)stopTrialTimer;
- (void)start:(double)a0 maxValue:(double)a1 type:(unsigned long long)a2 reason:(unsigned long long)a3;
- (BOOL)isValidCurrentTime:(double)a0 withStartTime:(double)a1 endTime:(double)a2;
- (double)remainingTimeIntervalWithCurrentTime:(double)a0 withStartTime:(double)a1 endTime:(double)a2;
- (void)tryStartTrialTimer;
- (void)updateFreeTrialInfoWithCurrent:(double)a0;
- (BOOL)isTrialEnded:(double)a0;
- (void)tryTrialFinish;
- (void)startTrialTimer;
- (void)close;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)leave;
- (void)reset;
- (void)resume;
- (void)dealloc;
- (double)getCurrentValue;

@end
