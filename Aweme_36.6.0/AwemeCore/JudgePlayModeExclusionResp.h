@class JudgePlayModeExclusionResp_Data;

@interface JudgePlayModeExclusionResp : IESLivePBBaseMessage

@property (retain, nonatomic) JudgePlayModeExclusionResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
