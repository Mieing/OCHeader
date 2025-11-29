@class UIImageView, UILabel, UIView, UIButton;

@interface AWESearchLoadMoreTipView : UIView

@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) id /* block */ clickButtonBlock;

- (void)setTipText:(id)a0;
- (void)clickButtonAction;
- (void).cxx_destruct;
- (id)init;

@end
