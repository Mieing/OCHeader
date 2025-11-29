@class IESLiveAnimatedImageView, UILabel;

@interface IESLiveGiftTrayPostEffectView : UIView

@property (nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updatePostEffect:(id)a0 title:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
