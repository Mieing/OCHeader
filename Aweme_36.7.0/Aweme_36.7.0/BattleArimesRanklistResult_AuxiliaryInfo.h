@interface BattleArimesRanklistResult_AuxiliaryInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL showAuxiliaryTab;
@property (nonatomic) long long auxiliaryIndex;
@property (nonatomic) long long curAuxiliaryType;

+ (id)descriptor;

@end
