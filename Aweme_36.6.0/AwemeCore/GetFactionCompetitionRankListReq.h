@class NSString;

@interface GetFactionCompetitionRankListReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomId;

+ (id)descriptor;

@end
