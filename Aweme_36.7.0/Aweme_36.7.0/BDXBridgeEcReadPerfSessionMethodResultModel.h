@class NSDictionary, NSArray;

@interface BDXBridgeEcReadPerfSessionMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *common;
@property (retain, nonatomic) NSArray *stages;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
