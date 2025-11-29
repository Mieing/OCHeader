@class NSDictionary;

@interface BDUGLuckycatGetSettingsInfoDecodedXBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *staticSettings;
@property (copy, nonatomic) NSDictionary *personalSettings;
@property (copy, nonatomic) NSDictionary *pollingSettings;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
