@interface RenderConfig : NSObject

@property (nonatomic) long long statsReportInterval;
@property (nonatomic) BOOL isEnablePureDetect;
@property (nonatomic) long long frameQueueSize;
@property (nonatomic) long long pureDetectInterval;
@property (nonatomic) double pureDetectThreshold;
@property (nonatomic) long long fps;
@property (nonatomic) BOOL hasFrame;

- (id)initWithStatsReportInterval:(long long)a0 isEnablePureDetect:(BOOL)a1 frameQueueSize:(long long)a2 pureDetectInterval:(long long)a3 pureDetectThreshold:(double)a4 fps:(long long)a5 hasFrame:(BOOL)a6;

@end
