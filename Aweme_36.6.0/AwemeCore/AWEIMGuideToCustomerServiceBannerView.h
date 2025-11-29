@class AWEIMGuideToCustomerServiceBannerViewConfig, UIImageView, UIView, UILabel, UIButton;
@protocol IESIMRichButtonProtocol;

@interface AWEIMGuideToCustomerServiceBannerView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *actionButton;
@property (retain, nonatomic) AWEIMGuideToCustomerServiceBannerViewConfig *config;

- (void)updateIconImage;
- (void)themeReload:(id)a0;
- (void)updateBgColor;
- (void)updateBannerHeightWithTextHeight:(double)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)actionButtonTapped:(id)a0;

@end
