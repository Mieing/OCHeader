@class NSNumber;

@interface BDXBridgeGetDeviceStatsMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *memory_all;
@property (retain, nonatomic) NSNumber *memory_use;
@property (retain, nonatomic) NSNumber *memory_rest;
@property (retain, nonatomic) NSNumber *memory_limit;
@property (retain, nonatomic) NSNumber *cpu_usage;
@property (retain, nonatomic) NSNumber *temperature;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
