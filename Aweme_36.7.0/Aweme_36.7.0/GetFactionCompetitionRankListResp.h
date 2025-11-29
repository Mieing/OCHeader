@class GetFactionCompetitionRankListResp_Data;

@interface GetFactionCompetitionRankListResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetFactionCompetitionRankListResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
