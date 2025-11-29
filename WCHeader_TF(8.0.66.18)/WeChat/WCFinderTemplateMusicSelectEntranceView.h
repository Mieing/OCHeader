@class MMUIImageView, CAGradientLayer, UILabel, UIView;
@protocol WCFinderTemplateMusicSelectEntranceViewDelegate;

@interface WCFinderTemplateMusicSelectEntranceView : UIView

@property (retain, nonatomic) MMUIImageView *musicIconView;
@property (retain, nonatomic) UILabel *musicTitleLabel;
@property (retain, nonatomic) MMUIImageView *arrowView;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<WCFinderTemplateMusicSelectEntranceViewDelegate> delegate;

+ (struct CGSize { double x0; double x1; })viewSuggestSizeWithMaxW:(double)a0;
+ (double)viewMargin;
+ (double)viewHeight;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setupViews;
- (void)setupGesture;
- (void)commonLayoutSubViews;
- (void)updateWithTitle:(id)a0;
- (void)onTap:(id)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)stopAnimationAndCenterDisplay;
- (void).cxx_destruct;

@end
