@class EndSingleTimeLimitPkResp_Data;

@interface EndSingleTimeLimitPkResp : IESLivePBBaseMessage

@property (retain, nonatomic) EndSingleTimeLimitPkResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
