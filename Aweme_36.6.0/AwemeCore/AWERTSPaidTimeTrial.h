@interface AWERTSPaidTimeTrial : NSObject <AWEPaidTrial> {
    void /* unknown type, empty encoding */ trialEventHandlers;
    void /* unknown type, empty encoding */ initialTrialTime;
    void /* unknown type, empty encoding */ maxTrialTime;
    void /* unknown type, empty encoding */ currentTime;
    void /* unknown type, empty encoding */ currentType;
    void /* unknown type, empty encoding */ previewAbility;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL forbidTimeForStreamStop;

- (double)getTrialledValue;
- (id)registeredTrialEventHandlers;
- (void)registerTrialEventHandler:(id)a0;
- (void)unregisterTrialEventHandler:(id)a0;
- (void)start:(double)a0 maxValue:(double)a1 type:(unsigned long long)a2;
- (double)getRemainingValue;
- (void)forceUpdateWithType:(unsigned long long)a0 trialledValue:(double)a1 maxValue:(double)a2;
- (BOOL)inTrial;
- (BOOL)inTrialFinish;
- (void)close;
- (void)pause;
- (void)stop;
- (void)leave;
- (void)resume;
- (double)getCurrentValue;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
