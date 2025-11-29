@interface AWESearchTabGuideExitRuleModel : AWEBaseApiModel

@property (nonatomic) long long dailyTabMaxShowNum;
@property (nonatomic) long long dailyTotalTabMaxShowNum;
@property (nonatomic) long long maxGuideNum;
@property (nonatomic) long long maxClickNum;
@property (nonatomic) long long maxShowNum;
@property (nonatomic) long long dailyClickShowNum;
@property (nonatomic) long long noClickMaxShowNum;
@property (nonatomic) long long noClickShowSecond;
@property (nonatomic) long long bubbleShowGapSecond;
@property (nonatomic) long long showSecond;
@property (nonatomic) long long singleClickNotShowSecond;

+ (id)JSONKeyPathsByPropertyKey;

@end
