@class UIImageView, UILabel, UIView;

@interface AWEIMDSHiHiGroupClaimCountDownView : UIView

@property (retain, nonatomic) UIView *wrapperView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (nonatomic) long long remainHour;
@property (copy, nonatomic) id /* block */ claimAction;

- (void)clickAction;
- (void)setupDoubleShadows;
- (void)updateCountDownWithHour:(long long)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
