@interface HTSLiveLinkmicSubtitleStatus : IESLivePBBaseMessage

@property (nonatomic) int subtitleStyle;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) int subtitleType;
@property (nonatomic) int activateStatus;

+ (id)descriptor;

@end
