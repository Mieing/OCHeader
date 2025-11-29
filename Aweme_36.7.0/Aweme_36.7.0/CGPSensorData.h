@class NSData;

@interface CGPSensorData : GPBMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSData *data_p;

+ (id)descriptor;

@end
