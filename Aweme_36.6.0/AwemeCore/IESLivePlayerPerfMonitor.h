@class NSNumber;

@interface IESLivePlayerPerfMonitor : NSObject

@property (retain) NSNumber *cpuUsage;
@property (retain) NSNumber *usedMemory;
@property (nonatomic) double lastMemoryUpdateTime;
@property (nonatomic) double lastCPUUpdateTime;
@property (nonatomic) double cacheTimeInterval;
@property (nonatomic) BOOL enableOptimize;

+ (id)sharedInstance;

- (unsigned long long)fetchUsedMemory:(BOOL)a0;
- (unsigned long long)fetchCpuUsage;
- (unsigned long long)fetchUsedMemory;
- (unsigned long long)fetchCpuUsage:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
