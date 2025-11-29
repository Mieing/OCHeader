@class NSNumber;

@interface IESLivePrefSampleCpuInfo : NSObject

@property (retain, nonatomic) NSNumber *cpu_rate;
@property (retain, nonatomic) NSNumber *total_rate;
@property (retain, nonatomic) NSNumber *main_thread_usage;
@property (retain, nonatomic) NSNumber *threadCount;
@property (retain, nonatomic) NSNumber *waitingCount;
@property (retain, nonatomic) NSNumber *cost;
@property (retain, nonatomic) NSNumber *generateTime;

- (void).cxx_destruct;

@end
