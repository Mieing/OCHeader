@class UILabel, AWEGradientView;

@interface AWELiveAuthorLabel : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) AWEGradientView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)__refreshWithStyleOriginWithFontSize:(double)a0;
- (void)__refreshWithStyleCreatorWithFontSize:(double)a0;
- (void)configWithStyle:(long long)a0 fontSize:(double)a1;
- (void).cxx_destruct;

@end
