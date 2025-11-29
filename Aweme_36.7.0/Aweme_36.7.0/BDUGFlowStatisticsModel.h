@interface BDUGFlowStatisticsModel : BDUGFlowBasicModel <NSCopying>

@property (nonatomic) double flow;
@property (nonatomic) BOOL isOrder;

+ (id)modelWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJsonDictionary;

@end
