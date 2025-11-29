@class NSString;

@interface BDXBridgeEnOrDecryptPoiContentMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *srcStr;
@property (nonatomic) BOOL encrypt;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
