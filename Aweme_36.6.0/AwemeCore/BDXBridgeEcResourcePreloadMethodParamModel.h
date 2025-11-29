@class NSNumber, NSString;

@interface BDXBridgeEcResourcePreloadMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *cacheType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *channel;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
