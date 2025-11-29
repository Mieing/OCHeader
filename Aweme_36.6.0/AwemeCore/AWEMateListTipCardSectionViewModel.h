@class NSString, AFDFrequencyExitRule, AFDFrequencyCountRule;

@interface AWEMateListTipCardSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) BOOL showSearchBar;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) AFDFrequencyCountRule *showRule;
@property (retain, nonatomic) AFDFrequencyExitRule *exitRule;
@property (nonatomic) BOOL didShow;
@property (nonatomic) long long cardGuideType;

+ (id)textCommonSettingKey:(long long)a0;
+ (id)defaultSettingsWithCardType:(long long)a0;

- (void)setupViewModel;
- (id)p_enterFrom;
- (double)sectionHeight:(double)a0;
- (void)closeTipCardByActionType:(id)a0;
- (void)showMateApplicationAlert;
- (void)showTipCard;
- (id)commonSettingKey;
- (void).cxx_destruct;

@end
