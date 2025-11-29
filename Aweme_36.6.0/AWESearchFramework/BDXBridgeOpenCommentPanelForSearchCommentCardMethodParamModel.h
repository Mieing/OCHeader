@class NSDictionary;

@interface BDXBridgeOpenCommentPanelForSearchCommentCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *commentInfo;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *businessParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
