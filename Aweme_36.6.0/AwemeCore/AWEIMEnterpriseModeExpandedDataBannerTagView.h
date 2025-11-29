@class UILabel, AWEIMEnterpriseModeDataBannerTagConfig, UIView;

@interface AWEIMEnterpriseModeExpandedDataBannerTagView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMEnterpriseModeDataBannerTagConfig *tagConfig;

- (id)initWithTagConfig:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
