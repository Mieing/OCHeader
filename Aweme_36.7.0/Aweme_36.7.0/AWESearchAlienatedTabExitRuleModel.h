@interface AWESearchAlienatedTabExitRuleModel : AWEBaseApiModel

@property (nonatomic) long long noClickMaxShowDays;
@property (nonatomic) long long maxShowDays;
@property (nonatomic) long long noClickMaxShowDaysWithBackDays;
@property (nonatomic) long long noClickBackDays;
@property (nonatomic) long long showDaysWithBackDays;
@property (nonatomic) long long backDays;

+ (id)JSONKeyPathsByPropertyKey;

@end
