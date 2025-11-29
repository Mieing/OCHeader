@class NSDictionary, NSString;

@interface IESECMallXBridgeEcPopupSubmitTaskMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *task_config;
@property (copy, nonatomic) NSString *token;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
