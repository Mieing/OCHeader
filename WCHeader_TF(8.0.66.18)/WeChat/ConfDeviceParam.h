@class DeviceAudioParam, DeviceVideoParam;

@interface ConfDeviceParam : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) DeviceAudioParam *audioParam;
@property (retain, nonatomic) DeviceVideoParam *videoParam;

+ (void)initialize;

@end
