@class NSString;

@interface IESLiveGPUMonitor : NSObject

@property (nonatomic) double sampleTime;
@property (retain, nonatomic) NSString *usage;

- (id)getGPUUsageWithTimeLimit:(long long)a0;
- (id)gpuUsageWithConfig:(id)a0;
- (void).cxx_destruct;

@end
