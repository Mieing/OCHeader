@class NSString, NSDictionary, NSArray;

@interface AWEGrouponTrackVerifyRuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *checkRuleId;
@property (copy, nonatomic) NSDictionary *indexKeyValuesPairs;
@property (copy, nonatomic) NSDictionary *checkContainPairs;
@property (copy, nonatomic) NSDictionary *coverModelMap;
@property (copy, nonatomic) NSArray *checkNullKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)coverModelMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
