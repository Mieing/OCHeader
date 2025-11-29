@class NSString, NSNumber;

@interface BDXBridgeBulletPreloadMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *availableMemoryThreshold;
@property (copy, nonatomic) NSString *preconnectUrl;
@property (nonatomic) long long strategy;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)strategyJSONTransformer;

- (void).cxx_destruct;

@end
