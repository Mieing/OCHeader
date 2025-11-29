@interface TeamTask_PeriodConfig : IESLivePBBaseMessage

@property (nonatomic) long long beginSecondRelativeBattleFinish;
@property (nonatomic) long long endSecondRelativeBattleFinish;

+ (id)descriptor;

@end
