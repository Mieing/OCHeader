@class NSString;

@interface BDXBridgeFormatOpenSharePanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *paramsJsonStr;
@property (copy, nonatomic) NSString *extraJsonStr;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
