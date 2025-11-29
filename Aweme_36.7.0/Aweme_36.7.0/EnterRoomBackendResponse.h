@class EnterRoomBackendResponse_BackendData;

@interface EnterRoomBackendResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EnterRoomBackendResponse_BackendData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
