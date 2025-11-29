@class DeviceInfo;

@interface DeviceHandshakeInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceInfo *mainDeviceInfo;
@property (nonatomic) BOOL hasMainDeviceInfo;

+ (id)descriptor;

@end
