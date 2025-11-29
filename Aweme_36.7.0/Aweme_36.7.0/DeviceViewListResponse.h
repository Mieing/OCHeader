@class DeviceViewListResponse_Data;

@interface DeviceViewListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeviceViewListResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
