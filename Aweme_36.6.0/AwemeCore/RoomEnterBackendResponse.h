@class RoomEnterBackendResponse_RoomEnterBackendData;

@interface RoomEnterBackendResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RoomEnterBackendResponse_RoomEnterBackendData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
