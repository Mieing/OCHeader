@interface MMLiveMagicEnginePerformanceRecord : NSObject

@property (nonatomic) double mostCPUIncrease;
@property (nonatomic) double mostGPUInscrease;
@property (nonatomic) double mostMemoryInscrease;
@property (nonatomic) long long thermalState;

- (id)description;

@end
