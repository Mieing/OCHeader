@class NSObject, NSMutableArray, CADisplayLink;
@protocol OS_dispatch_queue;

@interface AWEPerfBlockRatioMonitor : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long actualFrameCount;
@property (nonatomic) double droppedFrames;
@property (nonatomic) double expectedFrames;
@property (nonatomic) double blockRatio;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) double lastTargetTimestamp;
@property (retain, nonatomic) NSMutableArray *blockRatioTimestamps;
@property (retain, nonatomic) NSMutableArray *blockRatios;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blockRatioQueue;

+ (BOOL)blockRatioEnable;
+ (BOOL)blockRatioPredictEnable;
+ (long long)blockRatioCheckFrames;
+ (long long)blockRatioPredictUploadCount;
+ (double)blockRatioPredictUploadThreshold;
+ (id)blockRatioConfig;
+ (id)blockRatioPredictConfig;

- (void)setupBlockRatioArrays;
- (void)recordBlockRatioWithTimestamp:(double)a0 andBlockRatio:(double)a1;
- (void)displayLinkTick:(id)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)setupDisplayLink;
- (void)stopMonitoring;
- (void)dealloc;

@end
