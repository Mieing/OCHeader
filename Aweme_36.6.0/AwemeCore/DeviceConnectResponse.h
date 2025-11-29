@class DeviceConnectResponse_Data;

@interface DeviceConnectResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceConnectResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
