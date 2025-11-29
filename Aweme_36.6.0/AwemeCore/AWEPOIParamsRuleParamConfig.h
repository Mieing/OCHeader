@class NSString, NSArray;

@interface AWEPOIParamsRuleParamConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *logic;
@property (copy, nonatomic) NSArray *paramPredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramPredicatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
