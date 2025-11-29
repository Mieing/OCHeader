@interface WCDisplayMetrics : NSObject

@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long totalFrames;
@property (readonly, nonatomic) double framesPerSecond;
@property (readonly, nonatomic) double minimumFrameDuration;
@property (readonly, nonatomic) double maximumFrameDuration;
@property (readonly, nonatomic) double averageFrameDuration;

- (id)init;
- (void)screenDidUpdateAtTime:(double)a0;
- (id)description;

@end
