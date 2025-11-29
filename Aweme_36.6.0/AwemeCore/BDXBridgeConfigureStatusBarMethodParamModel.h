@class NSString;

@interface BDXBridgeConfigureStatusBarMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL visible;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long style;

+ (id)requiredKeyPaths;
+ (id)styleJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
