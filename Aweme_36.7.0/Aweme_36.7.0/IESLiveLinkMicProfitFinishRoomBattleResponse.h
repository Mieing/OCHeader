@class IESLiveLinkMicProfitFinishRoomBattleResponse_ResponseData;

@interface IESLiveLinkMicProfitFinishRoomBattleResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitFinishRoomBattleResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
