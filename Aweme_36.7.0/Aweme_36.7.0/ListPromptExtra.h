@interface ListPromptExtra : IESLivePBBaseMessage

@property (nonatomic) int duration;
@property (nonatomic) int textLimit;

+ (id)descriptor;

@end
