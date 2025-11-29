@class UILabel, UIImageView, UIView;

@interface AWEDouPlusRechargeToalBalanceView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIImageView *questionView;

- (void)clickQuestionView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setTotalBalance:(double)a0;

@end
