@class NSTimer, UIImageView;
@protocol IESLiveWebPPlayer;

@interface HTSLiveAudioAnimationView : UIView

@property (retain, nonatomic) NSTimer *rippleTimer;
@property (nonatomic) BOOL shouldStop;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *audioWebpAnimator;
@property (nonatomic) BOOL isWebpAnimationStyle;

- (void)setImageUrls:(id)a0;
- (void)setImageUrls:(id)a0 completion:(id /* block */)a1;
- (void)loadWebPAnimator;
- (void)startRipple;
- (void)setDefaultImageCompletion:(id /* block */)a0;
- (void)addRippleLayer;
- (void)closeRippleTimer;
- (id)defaultWebpImage;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
