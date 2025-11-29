@class NSString, NSNumber, NSDictionary;

@interface IESECXBridgeEcMallRequestShowResultMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *canShow;
@property (copy, nonatomic) NSDictionary *bizParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
