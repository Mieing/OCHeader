@class DUXBaseLabel, AFDRecommendVisibilitySettingHintView;

@interface AWEFamiliarRecommendCollectionReusableView : DUXBaseCollectionReusableView

@property (retain, nonatomic) DUXBaseLabel *label;
@property (retain, nonatomic) AFDRecommendVisibilitySettingHintView *settingHintView;

- (void)awe_themeReload;
- (void)p_updateLabelWithContent:(id)a0;
- (void)configLabelWithContent:(id)a0 isShouldShowHeader:(BOOL)a1;
- (void).cxx_destruct;
- (id)textFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)textColor;

@end
