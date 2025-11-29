@class NSTimer;

@interface AWELuckCatCommerceAdTask : NSObject

@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double progress;
@property (nonatomic) double executionTime;
@property (nonatomic) long long status;

- (void)markFinshAndStopTimer;
- (void)startTheTimer;
- (void)pauseTheTimer;
- (void)resumeTheTimer;
- (void)stopTheTimer;
- (void)addCountDuration:(unsigned long long)a0;
- (void)liveUpdateProgress:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(unsigned long long)a0;
- (void)updateProgress;
- (void)dealloc;

@end
