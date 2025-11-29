@class NSString, NSArray;

@interface AWEIMExtDecisionNode : MTLModel <BDModelCustom, MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *predicate;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *predicateValue;
@property (copy, nonatomic) NSArray *predicateValues;
@property (copy, nonatomic) NSArray *subValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)subValuesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
