@class RanklistGuestBattleRankResponse_ResponseData;

@interface RanklistGuestBattleRankResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RanklistGuestBattleRankResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
