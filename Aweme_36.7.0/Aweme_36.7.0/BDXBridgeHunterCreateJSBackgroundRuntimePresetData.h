@class NSDictionary;

@interface BDXBridgeHunterCreateJSBackgroundRuntimePresetData : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
