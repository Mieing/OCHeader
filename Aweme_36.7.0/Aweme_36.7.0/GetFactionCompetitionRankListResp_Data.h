@class NSMutableArray;

@interface GetFactionCompetitionRankListResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *rankListUsersArray;
@property (readonly, nonatomic) unsigned long long rankListUsersArray_Count;

+ (id)descriptor;

@end
