@class NSString, BDXBridgeHunterCreateJSBackgroundRuntimeConfig, BDXBridgeHunterCreateJSBackgroundRuntimePresetData;

@interface BDXBridgeHunterCreateJSBackgroundRuntimeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scriptSchema;
@property (retain, nonatomic) BDXBridgeHunterCreateJSBackgroundRuntimePresetData *presetData;
@property (retain, nonatomic) BDXBridgeHunterCreateJSBackgroundRuntimeConfig *config;

+ (id)requiredKeyPaths;
+ (id)presetDataJSONTransformer;
+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
