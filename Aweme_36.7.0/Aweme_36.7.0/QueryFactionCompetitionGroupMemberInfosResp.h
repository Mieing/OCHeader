@class QueryFactionCompetitionGroupMemberInfosResp_Data;

@interface QueryFactionCompetitionGroupMemberInfosResp : IESLivePBBaseMessage

@property (retain, nonatomic) QueryFactionCompetitionGroupMemberInfosResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
