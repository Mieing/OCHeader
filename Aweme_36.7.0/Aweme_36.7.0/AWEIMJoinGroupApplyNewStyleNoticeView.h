@class UIImageView, AWEIMTopNoticeTipViewConfig, UILabel, UIView;

@interface AWEIMJoinGroupApplyNewStyleNoticeView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIView *rightIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (copy, nonatomic) id /* block */ actionClickBlock;

- (void)updateBackgroundColorAfterAppUserInterfaceStyleDidChanged;
- (void)onClickBannerView;
- (void)initBannerSubView;
- (void)addBannerSubView;
- (void)updateTipViewWithConfig:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
