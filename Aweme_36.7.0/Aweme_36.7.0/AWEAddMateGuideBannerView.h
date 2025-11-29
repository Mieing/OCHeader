@class UIImageView, AWEAddMateGuideBannerConfig, UIView, UILabel, UIButton;

@interface AWEAddMateGuideBannerView : UIView

@property (retain, nonatomic) AWEAddMateGuideBannerConfig *config;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *primaryButton;
@property (copy, nonatomic) id /* block */ closeBtnTapped;
@property (copy, nonatomic) id /* block */ addMateBtnTapped;

- (void)awe_themeReload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updateIconImage;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)primaryButtonTapped:(id)a0;

@end
