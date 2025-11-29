@interface IESGCPFMPCalculateResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) double duration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;

- (id)resultType;

@end
