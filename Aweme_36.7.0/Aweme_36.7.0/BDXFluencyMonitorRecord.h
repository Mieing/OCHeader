@class NSDictionary, BDXMonitor;

@interface BDXFluencyMonitorRecord : NSObject

@property (readonly, nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) double hitchTime;
@property (nonatomic) double lightDropframeTime;
@property (nonatomic) double middleDropframeTime;
@property (nonatomic) double highDropframeTime;
@property (retain, nonatomic) BDXMonitor *monitor;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0;

@end
