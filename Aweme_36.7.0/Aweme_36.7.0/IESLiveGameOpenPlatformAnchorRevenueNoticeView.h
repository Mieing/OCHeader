@class UIImageView, IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel, UILabel, UIButton;

@interface IESLiveGameOpenPlatformAnchorRevenueNoticeView : UIView

@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorRevenueNoticeViewModel *viewModel;
@property (retain, nonatomic) UIButton *containerButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *revenueLabel;
@property (retain, nonatomic) UILabel *nextRevenueLabel;
@property (copy, nonatomic) id /* block */ onClickedBlock;

- (void)onClicked:(id /* block */)a0;
- (void)updateLabelLayout;
- (void)showNextRevenue:(id)a0 animationStyle:(long long)a1;
- (void)hideRevenueWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
