@class UIImageView, HTSLiveAmazingBackgroundView, UIView;

@interface IESLiveMultiKTVEmptyProfileView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *iconBackgroundView;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) double scale;
@property (nonatomic) BOOL originalHiddenStatus;

- (void)updateSingBtnBackgroundGradientColorWithStartColor:(id)a0 endColor:(id)a1;
- (void)startAnimating;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithScale:(double)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
