@class NSString;

@interface BDXBridgePoiFetchSessionStorageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *key;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
