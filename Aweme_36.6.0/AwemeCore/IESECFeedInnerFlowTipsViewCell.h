@class UILabel, UIImageView, UIView;

@interface IESECFeedInnerFlowTipsViewCell : IESECGoodsFeedBaseCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *tips;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *tipsContainer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)updateWithViewModel:(id)a0;

@end
