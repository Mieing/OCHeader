@class NSString, NSNumber;

@interface BDXBridgeCopyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *isCached;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
