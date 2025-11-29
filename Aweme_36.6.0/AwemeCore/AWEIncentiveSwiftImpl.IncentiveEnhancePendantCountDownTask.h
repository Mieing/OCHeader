@interface AWEIncentiveSwiftImpl.IncentiveEnhancePendantCountDownTask : NSObject <AWELiteTimerTaskProtocol> {
    void /* unknown type, empty encoding */ isFetchingCountDownTask;
    void /* unknown type, empty encoding */ taskScene;
    void /* unknown type, empty encoding */ pendant;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ totalCountingTime;
    void /* unknown type, empty encoding */ taskDuration;
    void /* unknown type, empty encoding */ coinRate;
    void /* unknown type, empty encoding */ taskType;
    void /* unknown type, empty encoding */ inCountDownScene;
    void /* unknown type, empty encoding */ taskProgress;
    void /* unknown type, empty encoding */ intervalSinceLastRequest;
    void /* unknown type, empty encoding */ totalCoinAmount;
    void /* unknown type, empty encoding */ requestInterval;
    void /* unknown type, empty encoding */ coinAmount;
    void /* unknown type, empty encoding */ miniProcessBarModel;
    void /* unknown type, empty encoding */ doneReadModel;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic) double progress;

- (void)didTaskStatusChange:(long long)a0;
- (void)taskDidStoppedCounting;
- (void)taskDidStartedCounting;
- (void)didTaskProgressUpdateWithRule:(id)a0;
- (double)totalTaskTime;
- (double)timeInterval;
- (id)rules;
- (id)taskID;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
