@class NSString, NSDictionary;

@interface BDXBridgePoiSetSessionStorageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *info;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
