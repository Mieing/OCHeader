@class UIImage, UIView, IESECGCDTimer, BDImageView;

@interface IESECLiveAnimateImageView : UIView

@property (retain, nonatomic) BDImageView *webPPlayerView;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) BOOL hasFlip;
@property (nonatomic) double loopInterval;
@property (nonatomic) double delay;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL enableOptimizeDisplayLink;
@property (nonatomic) BOOL isPreloadAllFrames;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIImage *image;

- (void)setInfinityLoop:(BOOL)a0;
- (void)stopWebPAnimating;
- (void)setCacheAllFrame:(BOOL)a0;
- (void)loadImageWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)loadImageWithImage:(id)a0;
- (void)p_setImage:(id)a0;
- (void)loadImageWithURLs:(id)a0 placeholderImage:(id)a1 fallbackImage:(id)a2 completion:(id /* block */)a3;
- (void)loadImageWithURLs:(id)a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 placeholderImage:(id)a2 fallbackImage:(id)a3 completion:(id /* block */)a4;
- (void)p_prepareAnimating;
- (void)p_startAnimating;
- (void)p_loopAction;
- (void)loadImageWithData:(id)a0;
- (void)clearlCurrentImage;
- (void)setFlip:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)loadImageWithURL:(id)a0 completion:(id /* block */)a1;

@end
