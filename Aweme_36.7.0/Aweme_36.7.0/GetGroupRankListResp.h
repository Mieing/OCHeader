@class GetGroupRankListResp_Data;

@interface GetGroupRankListResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetGroupRankListResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
