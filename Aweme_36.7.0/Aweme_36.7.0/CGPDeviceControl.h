@class NSData;

@interface CGPDeviceControl : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSData *params;

+ (id)descriptor;

@end
