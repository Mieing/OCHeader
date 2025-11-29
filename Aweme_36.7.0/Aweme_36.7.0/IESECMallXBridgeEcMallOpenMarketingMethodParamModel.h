@class NSNumber, NSDictionary;

@interface IESECMallXBridgeEcMallOpenMarketingMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSDictionary *pageData;
@property (copy, nonatomic) NSDictionary *bizParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
