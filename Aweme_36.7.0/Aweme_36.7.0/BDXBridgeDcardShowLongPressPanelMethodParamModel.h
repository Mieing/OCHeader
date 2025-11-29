@class NSString, NSDictionary;

@interface BDXBridgeDcardShowLongPressPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *panelConfig;
@property (copy, nonatomic) NSDictionary *shareInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
