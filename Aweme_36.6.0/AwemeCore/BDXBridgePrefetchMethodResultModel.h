@class NSNumber, NSDictionary;

@interface BDXBridgePrefetchMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *cached;
@property (copy, nonatomic) NSDictionary *raw;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
