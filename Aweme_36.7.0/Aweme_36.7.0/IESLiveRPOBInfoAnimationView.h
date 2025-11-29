@class UILabel, UIView;

@interface IESLiveRPOBInfoAnimationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *topInfoLabel;
@property (retain, nonatomic) UILabel *bottomInfoLabel;

- (void)updateWithCoinCount:(long long)a0;
- (id)p_getProperCountString:(long long)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupViews;

@end
