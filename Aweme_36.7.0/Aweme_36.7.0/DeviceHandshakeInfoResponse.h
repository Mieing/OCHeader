@class DeviceHandshakeInfoResponse_Data;

@interface DeviceHandshakeInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceHandshakeInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
