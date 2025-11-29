@class NSString, NSArray;

@interface BDXBridgeSearchDoAiSearchActionRequirementList : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *queryTemplate;
@property (retain, nonatomic) NSArray *detailList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
