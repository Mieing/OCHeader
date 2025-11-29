@class UIImageView, UITapGestureRecognizer, AWEIMSocialEffectCoplayView;

@interface AWEIMVideoContentView : UIView

@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AWEIMSocialEffectCoplayView *coplayContainer;
@property (retain, nonatomic) UIImageView *videoPosterImageView;
@property (copy, nonatomic) id /* block */ coverTapAction;
@property (copy, nonatomic) id /* block */ coplayTapAction;
@property (copy, nonatomic) id /* block */ didSetImageBlock;

- (void)p_coplayDidTaped;
- (void)p_setupSubview;
- (void)setCoplayViewHidden:(BOOL)a0 atPosition:(unsigned long long)a1 bottomOffset:(double)a2;
- (void)setEnableDisplayCoplayJoinBtn:(BOOL)a0;
- (void)setCoplyViewScaleRadius:(double)a0;
- (void)setPlayIconHidden:(BOOL)a0;
- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithImage:(id)a0;

@end
