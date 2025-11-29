@class NSString, NSMutableArray;

@interface IESLiveGiftDownStreamListener : NSObject

@property (copy, nonatomic) NSString *canvasName;
@property (nonatomic) double containerCreationTime;
@property (nonatomic) double containerFinishLoadTime;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double lastFrameTimestamp;
@property (nonatomic) double firstFrameTimestamp;
@property (nonatomic) double secondFrameTimestamp;
@property (nonatomic) long long totalFrames;
@property (nonatomic) double averageFps;
@property (retain, nonatomic) NSMutableArray *frameIntervals;
@property (nonatomic) long long stutterCount;
@property (nonatomic) long long bigStutterCount;
@property (nonatomic) double totalStutterDuration;
@property (nonatomic) double totalBigStutterDuration;
@property (nonatomic) double jankThreshold;
@property (nonatomic) double bigJankThreshold;

- (id)initWithName:(id)a0 creationTime:(double)a1;
- (void)onFrameAvailable:(long long)a0 end:(long long)a1;
- (void)calculateFrameStatsWithCurrentTime:(double)a0 start:(long long)a1 end:(long long)a2;
- (void).cxx_destruct;
- (void)resetState;
- (void)logMessage:(id)a0;
- (id)stopListen;

@end
