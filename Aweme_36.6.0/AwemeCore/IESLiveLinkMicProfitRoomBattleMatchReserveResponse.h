@class IESLiveLinkMicProfitRoomBattleMatchReserveResponse_ResponseData;

@interface IESLiveLinkMicProfitRoomBattleMatchReserveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitRoomBattleMatchReserveResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
