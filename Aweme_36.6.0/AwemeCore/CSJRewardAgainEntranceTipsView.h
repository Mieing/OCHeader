@class UIImageView, UILabel;

@interface CSJRewardAgainEntranceTipsView : UIView

@property (retain, nonatomic) UIImageView *rewardAgainIconImgView;
@property (retain, nonatomic) UILabel *rewardAgainTipsLabel;
@property (retain, nonatomic) UIImageView *rewardAgainArrowImgView;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)setupRewardAgainTips;
- (void)tipsViewTapGestureAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
