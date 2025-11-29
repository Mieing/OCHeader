@interface MatrixGPUUtilization : NSObject

@property (nonatomic) float deviceUtilization;
@property (nonatomic) float rendererUtilization;
@property (nonatomic) float tilerUtilization;

+ (BOOL)isSupported;
+ (id)currentGPUUtilization;
+ (id)__getPerformanceStatistics;
+ (id)__getPerformanceStatisticsForSGX:(BOOL)a0;
+ (id)__getPerformanceStatisticsForIntel;
+ (id)__getPerformanceStatisticsFromIteractor:(unsigned int)a0 fastPath:(BOOL)a1 outGpuEntry:(unsigned int *)a2;

- (void)add:(id)a0;
- (void)divideBy:(unsigned long long)a0;

@end
