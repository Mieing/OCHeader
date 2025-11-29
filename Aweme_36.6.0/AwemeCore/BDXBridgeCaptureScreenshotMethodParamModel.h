@class NSNumber, NSString;

@interface BDXBridgeCaptureScreenshotMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *key;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
