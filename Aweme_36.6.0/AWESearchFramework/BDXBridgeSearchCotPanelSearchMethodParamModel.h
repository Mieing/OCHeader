@class NSString;

@interface BDXBridgeSearchCotPanelSearchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterMethod;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
