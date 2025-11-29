@class GetSingleTimeLimitPkInfosResp_Data;

@interface GetSingleTimeLimitPkInfosResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetSingleTimeLimitPkInfosResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
