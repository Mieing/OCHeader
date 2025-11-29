@interface BDUGFlowExperiments : BDUGFlowBasicModel

@property (nonatomic) long long testId;
@property (nonatomic) long long testGroup;

+ (id)modelWithDictionary:(id)a0;

- (id)toJsonDictionary;

@end
