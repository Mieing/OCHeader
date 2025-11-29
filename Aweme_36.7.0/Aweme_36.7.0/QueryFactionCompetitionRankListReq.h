@interface QueryFactionCompetitionRankListReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int rankType;

+ (id)descriptor;

@end
