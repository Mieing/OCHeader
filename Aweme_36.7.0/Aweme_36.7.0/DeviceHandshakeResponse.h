@class DeviceHandshakeResponse_Data;

@interface DeviceHandshakeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceHandshakeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
