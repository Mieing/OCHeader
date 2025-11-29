@class NSNumber, NSString, NSArray;

@interface BDXBridgeMainArchOpenDoubleColumnMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *defaultLandingTab;
@property (copy, nonatomic) NSString *targetPage;
@property (copy, nonatomic) NSString *targetPageTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSArray *tabList;

+ (id)requiredKeyPaths;
+ (id)tabListJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
