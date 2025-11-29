@class HMDThreadBacktrace;

@interface HMDCPUThreadInfo : NSObject

@property (nonatomic) unsigned int thread;
@property (nonatomic) float usage;
@property (nonatomic) long long priority;
@property (nonatomic) long long weight;
@property (retain, nonatomic) HMDThreadBacktrace *backtrace;

- (id)reportDict;
- (void).cxx_destruct;

@end
