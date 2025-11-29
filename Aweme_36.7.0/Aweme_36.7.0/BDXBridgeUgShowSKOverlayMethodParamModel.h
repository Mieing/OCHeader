@class NSString, BDXBridgeUgShowSKOverlayOverlayConfig;

@interface BDXBridgeUgShowSKOverlayMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BDXBridgeUgShowSKOverlayOverlayConfig *overlayConfig;

+ (id)requiredKeyPaths;
+ (id)overlayConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
