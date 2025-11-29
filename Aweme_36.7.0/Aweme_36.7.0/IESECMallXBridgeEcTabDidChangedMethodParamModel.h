@class NSNumber, BDXBridgeEcTabDidChangedPreviousTab, BDXBridgeEcTabDidChangedCurrentTab;

@interface IESECMallXBridgeEcTabDidChangedMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *tabClickTime;
@property (retain, nonatomic) BDXBridgeEcTabDidChangedCurrentTab *currentTab;
@property (retain, nonatomic) BDXBridgeEcTabDidChangedPreviousTab *previousTab;

+ (id)requiredKeyPaths;
+ (id)currentTabJSONTransformer;
+ (id)previousTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
