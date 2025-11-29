@class IESLiveKtvProfitJumpRealTimeChorusRoomResponse_ResponseData;

@interface IESLiveKtvProfitJumpRealTimeChorusRoomResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitJumpRealTimeChorusRoomResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
