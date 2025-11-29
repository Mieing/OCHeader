@class NSDictionary;

@interface IESIMHeavyUserMonitorCPUInfo : NSObject

@property (readonly, nonatomic) double cpuUsage;
@property (readonly, nonatomic) double userUseTime;
@property (readonly, nonatomic) double systemUseTime;
@property (readonly, copy, nonatomic) NSDictionary *threadInfos;

- (id)initWithUsage:(double)a0 userTime:(double)a1 systemTime:(double)a2 threadInfos:(id)a3;
- (void).cxx_destruct;
- (id)description;

@end
