@class GetSingleTimeLimitPkThemeConfigResp_Data;

@interface GetSingleTimeLimitPkThemeConfigResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetSingleTimeLimitPkThemeConfigResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
