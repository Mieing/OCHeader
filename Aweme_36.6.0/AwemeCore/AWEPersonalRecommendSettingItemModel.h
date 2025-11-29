@interface AWEPersonalRecommendSettingItemModel : AWESettingItemModel

- (void)addNotification;
- (BOOL)shouldUseSimpleText;
- (double)maxDetailWidth;
- (double)defaultDetailWidth;
- (void)didReceivePersonalRecommendSwitchStatusChangedNotification:(id)a0;
- (id)initWithFontAdapter:(id)a0;
- (void)setup;
- (double)titleWidth;

@end
