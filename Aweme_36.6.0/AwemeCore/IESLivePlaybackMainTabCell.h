@class HTSLivePaddingLabel, UIImageView, LOTAnimationView, UILabel, UIView, UIButton;

@interface IESLivePlaybackMainTabCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *selectedCoverLayerView;
@property (retain, nonatomic) UIView *selectedBottomView;
@property (retain, nonatomic) LOTAnimationView *livingIcon;
@property (retain, nonatomic) HTSLivePaddingLabel *taglabel;
@property (retain, nonatomic) UIButton *buyButton;
@property (copy, nonatomic) id /* block */ buyAction;

- (void)buyButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
