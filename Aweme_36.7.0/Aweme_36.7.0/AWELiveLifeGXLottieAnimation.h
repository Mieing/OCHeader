@class LOTAnimationView, NSString;

@interface AWELiveLifeGXLottieAnimation : UIView <GXLottieAniamtionProtocal>

@property (retain, nonatomic) LOTAnimationView *explainingLottieView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gx_playAnimation:(id)a0 completion:(id /* block */)a1;
- (BOOL)gx_isAnimationPlaying;
- (void)gx_stop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
