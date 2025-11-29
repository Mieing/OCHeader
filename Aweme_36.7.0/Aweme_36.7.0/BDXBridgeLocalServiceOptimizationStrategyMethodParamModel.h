@class NSString, NSArray, BDXBridgeLocalServiceOptimizationStrategyJato;

@interface BDXBridgeLocalServiceOptimizationStrategyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *bizCode;
@property (retain, nonatomic) NSArray *preCacheList;
@property (retain, nonatomic) NSArray *preload;
@property (retain, nonatomic) NSArray *preDownload;
@property (retain, nonatomic) BDXBridgeLocalServiceOptimizationStrategyJato *jato;

+ (id)preCacheListJSONTransformer;
+ (id)jatoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
