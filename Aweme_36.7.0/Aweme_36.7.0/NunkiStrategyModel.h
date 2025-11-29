@class NSArray, NSString;

@interface NunkiStrategyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *conditions;
@property (nonatomic) unsigned long long strategyType;
@property (copy, nonatomic) NSString *smartServiceName;
@property (retain, nonatomic) NSArray *smartServiceConditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)conditionsJSONTransformer;
+ (id)smartServiceConditionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
