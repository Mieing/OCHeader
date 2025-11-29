@class NSString, NSArray;

@interface BDXBridgeSearchDoAiSearchActionGenreList : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *inputPlaceholder;
@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *queryTemplate;
@property (retain, nonatomic) NSArray *requirementList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
