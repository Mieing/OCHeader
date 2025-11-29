@class CADisplayLink;

@interface AWEIMListFPSChecker : NSObject

@property (nonatomic) long long fps;
@property (nonatomic) long long dropMax;
@property (nonatomic) long long totalDropFrames;
@property (nonatomic) long long drop3Count;
@property (nonatomic) long long drop7Count;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double finishTime;
@property (nonatomic) long long trackStatus;

- (void)startRecord;
- (double)p_randFrom0To1;
- (id)p_msgTrackSampleRateConfigDict;
- (void)stopRecordAndTrackFPSWithContext:(id)a0;
- (void)p_tick:(id)a0;
- (id)p_trackSourceArrayWithCon:(id)a0 teaEventName:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)p_clear;

@end
