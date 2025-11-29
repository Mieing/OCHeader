@interface HTSLiveSameTypePKStrategy : IESLivePBBaseMessage

@property (nonatomic) long long priority;
@property (nonatomic) long long judgeActionHigher;
@property (nonatomic) long long judgeActionSame;
@property (nonatomic) long long judgeActionLower;
@property (nonatomic) long long judgeActionDefeated;

+ (id)descriptor;

@end
