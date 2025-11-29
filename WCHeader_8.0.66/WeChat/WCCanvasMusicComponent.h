@class NSString, WCCanvasMusicProgressBar, WCCanvasMusicPlayButton, MMUIView, WCCanvasComponentMusicInfo, WCAdURLImageView, MMMusicInfo, UIVisualEffectView, WCMarqueeLabel;

@interface WCCanvasMusicComponent : WCCanvasComponent <WCCanvasMusicProgressBarDelegate, ICanvasMusicMgrExt>

@property (retain, nonatomic) MMUIView *musicCardView;
@property (retain, nonatomic) MMUIView *bgView;
@property (retain, nonatomic) WCAdURLImageView *bgImageView;
@property (retain, nonatomic) UIVisualEffectView *bgBlurView;
@property (retain, nonatomic) MMUIView *bgMaskView;
@property (retain, nonatomic) WCAdURLImageView *coverImageView;
@property (retain, nonatomic) WCMarqueeLabel *titleLabel;
@property (retain, nonatomic) WCMarqueeLabel *subTitleLabel;
@property (retain, nonatomic) WCCanvasMusicPlayButton *playButton;
@property (retain, nonatomic) WCCanvasMusicProgressBar *progressBar;
@property (retain, nonatomic) WCCanvasComponentMusicInfo *canvasMusicInfo;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) MMMusicInfo *mmMusicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)initMMMusicInfo;
- (void)initMusicCardView;
- (void)initCoverImageView;
- (void)initTitleAndSubTitle;
- (void)initPlayButton;
- (void)initProgressBar;
- (void)onClickPlayButton:(id)a0 forEvent:(id)a1;
- (void)setPlayState:(long long)a0;
- (void)setCurrentTime:(double)a0 duration:(double)a1;
- (void)onSliderSeekToTime:(double)a0;
- (void)onMusicPlayStatusChanged:(id)a0 playState:(long long)a1;
- (void)onMusicPlayTimeChanged:(id)a0 currentTime:(double)a1 duration:(double)a2;
- (void).cxx_destruct;

@end
