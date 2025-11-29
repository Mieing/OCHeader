@class GetTimeLimitPkThemeConfigResp_Data;

@interface GetTimeLimitPkThemeConfigResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetTimeLimitPkThemeConfigResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
