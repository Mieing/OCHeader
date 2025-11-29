@class UIView, AWEIMMessageTabLeftTextRightIconBannerModel, UILabel, UIButton;

@interface AWEIMMessageTabLeftTextRightIconBannerView : UIView

@property (retain, nonatomic) AWEIMMessageTabLeftTextRightIconBannerModel *viewModel;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UIView *bottomSeparatorLineView;

- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)onTapBackground:(id)a0;
- (void)onTapIcon:(id)a0;
- (void)configTextLabelWithViewModel:(id)a0;
- (void)configIconWithViewModel:(id)a0;
- (void)configBackgroundWithViewModel:(id)a0;
- (void)configLayoutWithViewModel:(id)a0;
- (void)configBottomSeparatorLineWithViewModel:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
