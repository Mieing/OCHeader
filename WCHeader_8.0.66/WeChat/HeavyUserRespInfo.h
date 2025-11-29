@class NSMutableArray;

@interface HeavyUserRespInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int monitorIdMapVersion;
@property (retain, nonatomic) NSMutableArray *monitorIdMapStrategys;
@property (nonatomic) int respType;

+ (void)initialize;

- (void)setRespType:(int)a0;
- (int)respType;
- (void)setMonitorIdMapStrategys:(id)a0;
- (id)monitorIdMapStrategys;
- (void)setMonitorIdMapVersion:(unsigned int)a0;
- (unsigned int)monitorIdMapVersion;

@end
