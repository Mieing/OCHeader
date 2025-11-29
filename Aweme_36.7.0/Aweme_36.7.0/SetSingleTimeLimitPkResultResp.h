@class SetSingleTimeLimitPkResultResp_Data;

@interface SetSingleTimeLimitPkResultResp : IESLivePBBaseMessage

@property (retain, nonatomic) SetSingleTimeLimitPkResultResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
