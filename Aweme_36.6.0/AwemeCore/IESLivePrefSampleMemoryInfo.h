@class NSNumber;

@interface IESLivePrefSampleMemoryInfo : NSObject

@property (retain, nonatomic) NSNumber *app_usage;
@property (retain, nonatomic) NSNumber *cost;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSNumber *totalUsage;
@property (copy, nonatomic) NSNumber *availableMemory;
@property (copy, nonatomic) NSNumber *generateTime;

- (void).cxx_destruct;

@end
