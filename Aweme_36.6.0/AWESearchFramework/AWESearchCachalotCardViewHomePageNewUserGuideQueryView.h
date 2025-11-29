@class UIBlurEffect, UIVisualEffectView, UIImageView, AWESearchCachalotCardViewHomePageNewUserGuideQueryModel, UILabel;
@protocol AWESearchCachalotCardViewHomePageNewUserGuideQueryViewDelegate;

@interface AWESearchCachalotCardViewHomePageNewUserGuideQueryView : UIView

@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideQueryModel *model;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *queryLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (weak, nonatomic) id<AWESearchCachalotCardViewHomePageNewUserGuideQueryViewDelegate> delegate;

- (void)updateTheme:(long long)a0;
- (void)didSelectModel;
- (id)queryBackgroundColorOnTheme:(long long)a0;
- (id)labelTextColorOnTheme:(long long)a0;
- (id)themeBlurEffectOnTheme:(long long)a0;
- (id)themeRightArrowImageOnTheme:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
