@interface JudgePlayModeExclusionResp_AdjustPlayModInfo : IESLivePBBaseMessage

@property (nonatomic) int playMode;
@property (nonatomic) int containerModeType;
@property (nonatomic) int containerLayoutDirection;

+ (id)descriptor;

@end
