@class NSString;

@interface IESECListKitXBridgeEcGetCachedApiResponseMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *majorKey;
@property (copy, nonatomic) NSString *subKey;
@property (copy, nonatomic) NSString *subSubKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
