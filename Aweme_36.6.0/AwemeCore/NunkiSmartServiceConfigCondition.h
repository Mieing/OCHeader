@class NSArray, NSString, NunkiSmartServiceStrategyConfig;

@interface NunkiSmartServiceConfigCondition : MTLModel <MTLJSONSerializing, NunkiDecisionCondition>

@property (copy, nonatomic) NSArray *factors;
@property (copy, nonatomic) NSString *factorsID;
@property (copy, nonatomic) NSString *smartServiceConfigID;
@property (retain, nonatomic) NunkiSmartServiceStrategyConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)configJSONTransformer;
+ (id)factorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
