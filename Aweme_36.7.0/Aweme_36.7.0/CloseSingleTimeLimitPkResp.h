@class CloseSingleTimeLimitPkResp_Data;

@interface CloseSingleTimeLimitPkResp : IESLivePBBaseMessage

@property (retain, nonatomic) CloseSingleTimeLimitPkResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
