@class NSString, NSDictionary;

@interface BDXBridgePoiCallSessionEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *info;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
