@class QueryIncomeGroupMemberInfosResp_Data;

@interface QueryIncomeGroupMemberInfosResp : IESLivePBBaseMessage

@property (retain, nonatomic) QueryIncomeGroupMemberInfosResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
