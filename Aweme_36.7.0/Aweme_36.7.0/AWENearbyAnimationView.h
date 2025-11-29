@class UIImageView, BDImageView;

@interface AWENearbyAnimationView : UIView

@property (retain, nonatomic) UIImageView *staticImageView;
@property (retain, nonatomic) BDImageView *animatedImageView;
@property (nonatomic) BOOL isAnimationPause;
@property (nonatomic) BOOL showStaticImage;
@property (copy, nonatomic) id /* block */ tapHandler;

- (void)__setupUI;
- (void)contentTapped;
- (void)stopImageAnimation;
- (void)configViewWithStaticImageURLs:(id)a0 completion:(id /* block */)a1;
- (void)startImageAnimationWithDelay:(double)a0 playTimes:(long long)a1;
- (void)configViewWithStaticImageURLs:(id)a0 animatedImageURLs:(id)a1 showStaticImage:(BOOL)a2 completion:(id /* block */)a3;
- (void)pauseImageAnimation;
- (void)resumeImageAnimation;
- (void)__loadStaticImageURLs:(id)a0 animatedImageURLs:(id)a1 completion:(id /* block */)a2;
- (void)startDelayWithPlayTimes:(long long)a0;
- (void)configViewWithAnimatedImageURLs:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
