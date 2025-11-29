@class NSNumber;

@interface BDXBridgeVibrateMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) long long style;

+ (id)requiredKeyPaths;
+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
