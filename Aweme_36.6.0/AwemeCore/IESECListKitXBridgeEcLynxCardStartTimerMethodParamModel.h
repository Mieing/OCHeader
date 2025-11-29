@class NSString, NSNumber;

@interface IESECListKitXBridgeEcLynxCardStartTimerMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *repeat;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
