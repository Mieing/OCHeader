@class StartSingleTimeLimitPkResp_Data;

@interface StartSingleTimeLimitPkResp : IESLivePBBaseMessage

@property (retain, nonatomic) StartSingleTimeLimitPkResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
