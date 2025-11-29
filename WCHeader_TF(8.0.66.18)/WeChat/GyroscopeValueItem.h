@interface GyroscopeValueItem : WXPBGeneratedMessage

@property (nonatomic) float axisX;
@property (nonatomic) float axisY;
@property (nonatomic) float axisZ;
@property (nonatomic) unsigned long long sensorRelativeTimestamp;

+ (void)initialize;

@end
