@class UIImageView, NSString;

@interface IESLiveDiggOwnAnimationView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ complete;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *doubleImageView;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (nonatomic) BOOL isDoubleDigg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playDoubleDiggAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 doubleImage:(id)a1;
- (void)playWithEndPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;

@end
