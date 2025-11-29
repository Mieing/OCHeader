@class NSString, IESLiveCountTimer, UIView;
@protocol IESLiveAvatarBorderItem, IESLiveWebPPlayer, IESLiveAnimatedImageEffectResourceDelegate;

@interface IESLiveAnimatedImageView : UIView <IESLiveAvatarBorderContainer>

@property (retain, nonatomic) id<IESLiveAvatarBorderItem> borderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *webPPlayerView;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL hasFlip;
@property (nonatomic) BOOL animationOptimize;
@property (nonatomic) double loopInterval;
@property (nonatomic) double delay;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL enableOptimizeDisplayLink;
@property (nonatomic) BOOL isPreloadAllFrames;
@property (nonatomic) BOOL isSyncUpdateImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (weak, nonatomic) id<IESLiveAnimatedImageEffectResourceDelegate> effectReourceDelegate;

- (id)borderItem;
- (void)setBorderItem:(id)a0;
- (void)didUpdatedBorderURLs:(id)a0;
- (void)stopWebPAnimating;
- (void)stopWebPAnimation;
- (void)setCacheAllFrame:(BOOL)a0;
- (void)loadImageWithURLs:(id)a0;
- (void)loadImageWithURLs:(id)a0 completion:(id /* block */)a1;
- (void)loadImageWithURL:(id)a0 complete:(id /* block */)a1;
- (void)loadImageWithImage:(id)a0;
- (void)p_setImage:(id)a0;
- (void)loadImageWithURLs:(id)a0 placeholderImage:(id)a1 fallbackImage:(id)a2 completion:(id /* block */)a3;
- (void)p_prepareAnimating;
- (void)p_startAnimating;
- (void)loadImageWithData:(id)a0;
- (void)clearlCurrentImage;
- (void)setFlip:(BOOL)a0;
- (void)loadWebpWithName:(id)a0;
- (void)loadImageWithURLs:(id)a0 options:(unsigned long long)a1 placeholderImage:(id)a2 fallbackImage:(id)a3 complete:(id /* block */)a4;
- (void)loadImageWithURLs:(id)a0 options:(unsigned long long)a1 placeholderImage:(id)a2 fallbackImage:(id)a3 completion:(id /* block */)a4;
- (id)p_decoderFromData:(id)a0;
- (id)p_setAnimatedImage:(id)a0;
- (id)p_webPDecoderWithEffectID:(unsigned long long)a0;
- (void)loadImageWithAssetID:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)loadImageWithDecoder:(id)a0;
- (void)setWebPPlayerViewInfinityLoopWithSetting:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)loadImageWithURL:(id)a0 completion:(id /* block */)a1;

@end
