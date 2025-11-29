@interface JudgePlayModeExclusionReq : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int playMode;
@property (nonatomic) int containerModeType;
@property (nonatomic) int containerLayoutDirection;

+ (id)descriptor;

@end
