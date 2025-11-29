@class NSString;

@interface BDXBridgePoiRegisterSessionEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
