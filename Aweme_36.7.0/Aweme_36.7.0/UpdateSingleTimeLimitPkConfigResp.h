@class UpdateSingleTimeLimitPkConfigResp_Data;

@interface UpdateSingleTimeLimitPkConfigResp : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateSingleTimeLimitPkConfigResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
