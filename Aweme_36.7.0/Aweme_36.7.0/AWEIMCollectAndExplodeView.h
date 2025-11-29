@class UIImageView;

@interface AWEIMCollectAndExplodeView : UIView

@property (nonatomic) long long trigerCount;
@property (nonatomic) long long animationsCount;
@property (weak, nonatomic) UIImageView *centerImageView;
@property (nonatomic) long long explodingCount;
@property (nonatomic) double maxScale;
@property (nonatomic) unsigned long long explodeTrigerCount;
@property (nonatomic) struct CGSize { double width; double height; } explodeSize;
@property (nonatomic) double explodelifetime;
@property (copy, nonatomic) id /* block */ endCollectBlock;
@property (copy, nonatomic) id /* block */ explodeCompletion;

- (void)explodeWithCenterImageView:(id)a0;
- (void)p_checkAllAnimationsEnd;
- (void)performAnimationFromView:(id)a0 image:(id)a1 centerAvatarView:(id)a2;
- (void)triggerExplode;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
