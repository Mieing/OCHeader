@protocol BDDPManaging;

@interface BDDPFluencyInfo : NSObject {
    struct __CFRunLoopObserver { } *fluencyObserver;
}

@property (nonatomic) double runloopBeginTimestamp;
@property (nonatomic) double runloopEndTimestamp;
@property (nonatomic) double initMachTime;
@property (nonatomic) double initRealTime;
@property (weak, nonatomic) id<BDDPManaging> delegate;
@property (nonatomic) double shouldReportFrames;

+ (id)sharedWithConfig:(id)a0 delegate:(id)a1;

- (void)addRunloopObserver;
- (void)onHMDWatchDogTimeout:(id)a0;
- (double)currTimestamp;
- (void)releaseObserver;
- (void).cxx_destruct;
- (void)setupNotifications;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
