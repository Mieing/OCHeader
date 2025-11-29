@class NSString, UIImageView, UILabel, UIView;

@interface AWENearbySkylightGestureGuideView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIImageView *downArrowImageView;
@property (copy, nonatomic) id /* block */ guideInteruptedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginGuideAnimationWithFeedView:(id)a0 capsuleView:(id)a1 currentInteractionView:(id)a2 skyligtView:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
