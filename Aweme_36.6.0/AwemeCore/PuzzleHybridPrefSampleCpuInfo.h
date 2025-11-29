@class NSNumber;

@interface PuzzleHybridPrefSampleCpuInfo : NSObject

@property (retain, nonatomic) NSNumber *cpu_rate;
@property (retain, nonatomic) NSNumber *total_rate;
@property (retain, nonatomic) NSNumber *main_thread_usage;
@property (retain, nonatomic) NSNumber *cost;
@property (retain, nonatomic) NSNumber *generateTime;

- (id)toDictinary;
- (void).cxx_destruct;

@end
