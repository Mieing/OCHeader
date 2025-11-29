@class QuerySelfGroupMemberInfosResp_Data;

@interface QuerySelfGroupMemberInfosResp : IESLivePBBaseMessage

@property (retain, nonatomic) QuerySelfGroupMemberInfosResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
