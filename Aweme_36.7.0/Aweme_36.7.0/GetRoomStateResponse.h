@class GetRoomStateResponse_Data;

@interface GetRoomStateResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRoomStateResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
