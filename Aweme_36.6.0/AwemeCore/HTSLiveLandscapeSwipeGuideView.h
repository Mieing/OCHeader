@class UIImageView, HTSLiveLandscapeSwipeGuideAnimationView, HTSLiveLandscapeSwipeGuideSubView;

@interface HTSLiveLandscapeSwipeGuideView : UIView

@property (retain, nonatomic) HTSLiveLandscapeSwipeGuideSubView *leftView;
@property (retain, nonatomic) UIImageView *leftSplitImageView;
@property (retain, nonatomic) HTSLiveLandscapeSwipeGuideAnimationView *centerView;
@property (retain, nonatomic) UIImageView *rightSplitImageView;
@property (retain, nonatomic) HTSLiveLandscapeSwipeGuideSubView *rightView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
