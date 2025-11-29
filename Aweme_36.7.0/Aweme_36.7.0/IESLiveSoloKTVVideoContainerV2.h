@class NSString, UIImageView, IESLiveSoloKTVPlayer, CALayer, UIView, IESLiveSoloKTVPlayerSliderV2;

@interface IESLiveSoloKTVVideoContainerV2 : UIView <IESLiveSoloKTVPlayerDelegate>

@property (retain, nonatomic) CALayer *playerLayer;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *playBtn;
@property (nonatomic) BOOL enablePlayBtn;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) long long scaleRatio;
@property (retain, nonatomic) IESLiveSoloKTVPlayer *player;
@property (retain, nonatomic) IESLiveSoloKTVPlayerSliderV2 *slider;
@property (copy, nonatomic) id /* block */ didPlayOrPauseBlock;
@property (copy, nonatomic) id /* block */ didSeekBlock;
@property (copy, nonatomic) id /* block */ didProgresseChangedBlock;
@property (nonatomic) BOOL needCountDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPlayerPlayFinish;
- (void)layoutPlayerView;
- (void)removePlayerView;
- (void)didPlayerStatusChange:(long long)a0;
- (void)didPlayerProgressChangeWithTime:(double)a0;
- (void)showPlayBtn:(BOOL)a0;
- (void)loadCoverWithImage:(id)a0;
- (void)enablePlayBtn:(BOOL)a0;
- (void)loadCoverWithURL:(id)a0;
- (void)showProgressView:(BOOL)a0;
- (void)playPauseClick:(id)a0;
- (id)alphaAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateProgress:(double)a0;

@end
