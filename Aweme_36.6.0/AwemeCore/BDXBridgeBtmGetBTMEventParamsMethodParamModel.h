@class NSString, NSDictionary;

@interface BDXBridgeBtmGetBTMEventParamsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *options;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
