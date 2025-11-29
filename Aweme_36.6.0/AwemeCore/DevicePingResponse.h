@class DevicePingResponse_Data;

@interface DevicePingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DevicePingResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
