@interface HTSLiveDuoBattleConfigContent : IESLivePBBaseMessage

@property (nonatomic) long long duration;
@property (nonatomic) int scoreType;

+ (id)descriptor;

@end
