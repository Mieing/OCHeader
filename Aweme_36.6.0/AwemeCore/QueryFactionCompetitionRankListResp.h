@class QueryFactionCompetitionRankListResp_Data;

@interface QueryFactionCompetitionRankListResp : IESLivePBBaseMessage

@property (retain, nonatomic) QueryFactionCompetitionRankListResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
