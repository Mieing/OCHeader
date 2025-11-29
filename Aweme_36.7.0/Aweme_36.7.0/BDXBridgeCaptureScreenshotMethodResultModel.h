@class NSString;

@interface BDXBridgeCaptureScreenshotMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *screenshot;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
