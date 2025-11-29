@class NSString;

@interface BDXBridgeOpenCityPanelQuickAccessList : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *code;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
