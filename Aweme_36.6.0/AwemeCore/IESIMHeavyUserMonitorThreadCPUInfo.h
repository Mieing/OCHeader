@class NSString;

@interface IESIMHeavyUserMonitorThreadCPUInfo : NSObject

@property (readonly, copy, nonatomic) NSString *threadName;
@property (readonly, nonatomic) double cpuUsage;
@property (readonly, nonatomic) double userUseTime;
@property (readonly, nonatomic) double systemUseTime;

- (id)initWithName:(id)a0 usage:(double)a1 userTime:(double)a2 systemTime:(double)a3;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;

@end
