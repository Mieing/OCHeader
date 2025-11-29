@class NSString;

@interface IESECBDXBridgeRequestECMarketingBridgeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) id params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
