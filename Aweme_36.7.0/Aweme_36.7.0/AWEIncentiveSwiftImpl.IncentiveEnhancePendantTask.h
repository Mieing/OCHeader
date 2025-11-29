@interface AWEIncentiveSwiftImpl.IncentiveEnhancePendantTask : NSObject <AWELiteTimerTaskProtocol, NSCoding> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ enhancingAweme;
    void /* unknown type, empty encoding */ currentPlayingAweme;
    void /* unknown type, empty encoding */ currentVideoId;
    void /* unknown type, empty encoding */ rewardInterval;
    void /* unknown type, empty encoding */ processBarModel;
    void /* unknown type, empty encoding */ doneReadModel;
    void /* unknown type, empty encoding */ fixTimerCenterIntervalBugSwitch;
    void /* unknown type, empty encoding */ timerInterval;
}

@property (nonatomic) double progress;

- (void)didTaskStatusChange:(long long)a0;
- (void)taskDidStoppedCounting;
- (void)taskDidStartedCounting;
- (void)taskDidWaitedToCounting;
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
