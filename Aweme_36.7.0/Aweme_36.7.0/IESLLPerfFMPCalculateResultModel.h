@class NSDictionary;

@interface IESLLPerfFMPCalculateResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;
@property (copy, nonatomic) NSDictionary *fmpLastViewDictionary;

- (void).cxx_destruct;

@end
