@class GetRealTimeChorusRoomListResponse_ResponseData;

@interface GetRealTimeChorusRoomListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRealTimeChorusRoomListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
