@class UIImageView, IESLiveCoveryImageComposeConfig;

@interface IESLiveCoveryImageComposer : UIView

@property (retain, nonatomic) UIImageView *firstCoveryImageView;
@property (retain, nonatomic) UIImageView *secondCoveryImageView;
@property (retain, nonatomic) UIImageView *resourceImageView;
@property (retain, nonatomic) IESLiveCoveryImageComposeConfig *composeConfig;

- (void)setUpUi;
- (void)refrshLayoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andConfig:(id)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)layoutSubviews;

@end
