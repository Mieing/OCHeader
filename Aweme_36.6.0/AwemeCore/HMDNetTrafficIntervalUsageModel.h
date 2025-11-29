@class NSArray;

@interface HMDNetTrafficIntervalUsageModel : NSObject

@property (retain, nonatomic) NSArray *largeRequest;
@property (retain, nonatomic) NSArray *highFrequencyRequest;
@property (retain, nonatomic) NSArray *largeImage;
@property (retain, nonatomic) NSArray *businessUsage;

- (id)groupByNetType;
- (void).cxx_destruct;

@end
