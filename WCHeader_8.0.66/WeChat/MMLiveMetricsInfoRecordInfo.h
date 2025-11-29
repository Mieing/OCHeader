@interface MMLiveMetricsInfoRecordInfo : NSObject <NSCopying>

@property (nonatomic) double appCPUUsage;
@property (nonatomic) double deviceGPUUsage;
@property (nonatomic) double footprintMemory;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
