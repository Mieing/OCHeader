@class NSNumber;

@interface BDXBridgeLocalServiceOptimizationStrategyJato : BDXBridgeModel

@property (retain, nonatomic) NSNumber *enableJato;
@property (retain, nonatomic) NSNumber *enableCloseClassVerify;
@property (retain, nonatomic) NSNumber *enableBlockGC;
@property (retain, nonatomic) NSNumber *duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
