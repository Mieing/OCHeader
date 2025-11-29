@class NSTimer;

@interface AWESearchBizMainCostRecorder : NSObject

@property (nonatomic) double autoCleanGap;
@property (nonatomic) double autoCleanThreshold;
@property (retain, nonatomic) NSTimer *autoCleanTimer;

+ (void)appendCostInfo:(id)a0 from:(double)a1 to:(double)a2;
+ (void)appendCostInfo:(id)a0 from:(double)a1 to:(double)a2 extra:(id)a3;
+ (void)setGlobalEnabled:(BOOL)a0;
+ (void)setEnableFixLeak:(BOOL)a0;
+ (void)setEnableTimerOpt:(BOOL)a0;
+ (id)fetchCostInfoFrom:(double)a0 to:(double)a1;
+ (id)sharedInstance;
+ (void)stopRecording;
+ (void)startIfNeeded;

- (void)p_clean:(id /* block */)a0;
- (void)resumeDoCleanTimerIfNeeded;
- (void)doClean;
- (void)startAutoClean;
- (void)pauseDoCleanTimerIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
