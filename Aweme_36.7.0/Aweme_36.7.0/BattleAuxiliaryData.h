@class NSString, BattleTitleConfig;

@interface BattleAuxiliaryData : IESLivePBBaseMessage

@property (retain, nonatomic) BattleTitleConfig *titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (copy, nonatomic) NSString *ruleContent;

+ (id)descriptor;

@end
