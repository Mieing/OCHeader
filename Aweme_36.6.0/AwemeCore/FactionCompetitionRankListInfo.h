@class NSString, RankListWithLiteUser;

@interface FactionCompetitionRankListInfo : IESLivePBBaseMessage

@property (retain, nonatomic) RankListWithLiteUser *baseInfo;
@property (nonatomic) BOOL hasBaseInfo;
@property (nonatomic) BOOL isPerforming;
@property (copy, nonatomic) NSString *groupName;

+ (id)descriptor;

@end
