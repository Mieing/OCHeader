@class UIButton, AVPlayerItem, UIImageView, AVPlayerLayer, NSString, AVPlayer;
@protocol BDSCVideoPlayerDelegate;

@interface BDSCVideoPlayer : UIView

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerItem *currentPlayerItem;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) float currentTime;
@property (nonatomic) float duration;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *observePlayerItemToken;
@property (copy, nonatomic) NSString *observeTimeControlToken;
@property (weak, nonatomic) id<BDSCVideoPlayerDelegate> delegate;
@property (nonatomic) unsigned long long videoGravity;

- (void)playButtonDidClick;
- (id)layerVideoGravity;
- (void)observePlayerStatus;
- (void)updateURLString:(id)a0;
- (void)observePlayerItemStatus;
- (void)updateSubviewsState;
- (void)setupPlayIcon:(id)a0;
- (void)setupCoverImageWithURLString:(id)a0;
- (void)playWithURLString:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
