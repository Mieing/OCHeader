@class IESLiveLinkMicProfitRoomBattleMatchStatusContent;

@interface IESLiveLinkMicProfitRoomBattleMatchResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) IESLiveLinkMicProfitRoomBattleMatchStatusContent *statusContent;
@property (nonatomic) BOOL hasStatusContent;

+ (id)descriptor;

@end
