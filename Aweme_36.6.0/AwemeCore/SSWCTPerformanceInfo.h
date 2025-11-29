@interface SSWCTPerformanceInfo : NSObject

@property (nonatomic) int tablePageReadCount;
@property (nonatomic) int tablePageWriteCount;
@property (nonatomic) int indexPageReadCount;
@property (nonatomic) int indexPageWriteCount;
@property (nonatomic) int overflowPageReadCount;
@property (nonatomic) int overflowPageWriteCount;
@property (nonatomic) long long costInNanoseconds;

- (id)initWithPerformanceInfo:(const struct PerformanceInfo { int x0; int x1; int x2; int x3; int x4; int x5; long long x6; } *)a0;

@end
