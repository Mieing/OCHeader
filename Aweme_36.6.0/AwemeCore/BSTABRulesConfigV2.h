@class NSDictionary, NSString;

@interface BSTABRulesConfigV2 : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *trackRuleMap;
@property (retain, nonatomic) NSDictionary *pageControlMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageControlsJSONTransformer;
+ (id)trackRuleMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
