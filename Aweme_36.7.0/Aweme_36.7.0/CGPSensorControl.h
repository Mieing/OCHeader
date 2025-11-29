@interface CGPSensorControl : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL state;

+ (id)descriptor;

@end
