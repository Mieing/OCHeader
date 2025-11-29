@class NSArray;

@interface BDUGLuckycatGetSettingsInfoDecodedXBridgeModel : BDXBridgeModel

@property (nonatomic) long long settingsType;
@property (copy, nonatomic) NSArray *staticSettingsKeys;
@property (copy, nonatomic) NSArray *personalSettingsKeys;
@property (copy, nonatomic) NSArray *pollingSettingsKeys;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
