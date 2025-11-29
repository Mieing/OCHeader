@interface MMLiteAppMetricsInfo : NSObject

@property (readonly, nonatomic) long long appPhysicalMemory;
@property (readonly, nonatomic) long long appAvailableMemory;
@property (readonly, nonatomic) long long appFootprintMemory;

+ (id)LiteAppMetricsInfoWithAppPhysicalMemory:(long long)a0 appAvailableMemory:(long long)a1 appFootprintMemory:(long long)a2;

- (id)initWithAppPhysicalMemory:(long long)a0 appAvailableMemory:(long long)a1 appFootprintMemory:(long long)a2;
- (id)description;

@end
