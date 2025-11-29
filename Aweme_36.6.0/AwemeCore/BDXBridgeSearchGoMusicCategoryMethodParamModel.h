@class BDXBridgeSearchGoMusicCategoryCategory;

@interface BDXBridgeSearchGoMusicCategoryMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeSearchGoMusicCategoryCategory *category;

+ (id)requiredKeyPaths;
+ (id)categoryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
