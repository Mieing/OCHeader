@class NSArray, NunkiStrategyResult, NSString;

@interface NunkiStrategyCondition : MTLModel <MTLJSONSerializing, NunkiDecisionCondition>

@property (copy, nonatomic) NSArray *factors;
@property (retain, nonatomic) NunkiStrategyResult *result;
@property (copy, nonatomic) NSString *factorsID;
@property (copy, nonatomic) NSString *resultID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)resultJSONTransformer;
+ (id)factorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
