@class IESLiveKtvProfitGetRoomChorusInfoResponse_ResponseData;

@interface IESLiveKtvProfitGetRoomChorusInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvProfitGetRoomChorusInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
