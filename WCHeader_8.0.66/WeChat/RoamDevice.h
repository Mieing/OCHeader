@class NSString;

@interface RoamDevice : WXPBGeneratedMessage

@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *devicePath;
@property (retain, nonatomic) NSString *deviceNickname;

+ (void)initialize;

- (void)setDeviceNickname:(id)a0;
- (id)deviceNickname;
- (void)setDevicePath:(id)a0;
- (id)devicePath;
- (void)setDeviceId:(id)a0;
- (id)deviceId;
- (void)setDeviceType:(int)a0;
- (int)deviceType;

@end
