@class UIColor, UIImageView, NSDictionary, UILabel, AWENormalModeTabBarNearbyTextViewUIConfig;

@interface AWENormalModeTabBarNearbyTextView : AWENormalModeTabBarTextView

@property (readonly, nonatomic) AWENormalModeTabBarNearbyTextViewUIConfig *nearbyConfig;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *strokeLabel;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) struct CGSize { double width; double height; } gradientSize;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isTeenMode;

- (void)updateTitle:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)textColorChangedWithSelectedStatus:(BOOL)a0;
- (void)updateBackgroundWithCompletion:(id /* block */)a0;
- (void)updateTextStyle;
- (struct CGSize { double x0; double x1; })adjustSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)updateTextColor;

@end
