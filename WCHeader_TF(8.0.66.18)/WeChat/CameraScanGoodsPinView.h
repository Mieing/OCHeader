@class UIImageView, POPSpringAnimation;

@interface CameraScanGoodsPinView : MMUIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) POPSpringAnimation *shakingAnimation;
@property (retain, nonatomic) UIImageView *fgImageView;

- (id)init;
- (void)setupSubviews;
- (void)setupAnimation;
- (void)layoutSubviews;
- (void)startShakingAnimation;
- (void)stopShakingAnimation;
- (void).cxx_destruct;

@end
