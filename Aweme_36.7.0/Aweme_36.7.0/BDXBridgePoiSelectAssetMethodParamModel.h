@class NSNumber, NSDictionary, BDXBridgePoiSelectAssetVideoConfig;

@interface BDXBridgePoiSelectAssetMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxImageCount;
@property (copy, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) BDXBridgePoiSelectAssetVideoConfig *videoConfig;
@property (nonatomic) long long defaultTab;

+ (id)requiredKeyPaths;
+ (id)defaultTabJSONTransformer;
+ (id)videoConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
