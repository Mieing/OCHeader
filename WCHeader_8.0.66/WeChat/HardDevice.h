@class NSString;

@interface HardDevice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceId;

+ (void)initialize;

- (void)setDeviceId:(id)a0;
- (id)deviceId;
- (void)setDeviceType:(id)a0;
- (id)deviceType;

@end
