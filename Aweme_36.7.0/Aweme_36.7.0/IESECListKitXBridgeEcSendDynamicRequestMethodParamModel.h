@class NSString, NSDictionary;

@interface IESECListKitXBridgeEcSendDynamicRequestMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
