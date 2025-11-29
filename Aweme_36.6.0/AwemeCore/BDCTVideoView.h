@class AVPlayer, AVPlayerLayer, NSURL, BDCTFlow, UIButton;

@interface BDCTVideoView : UIView

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) NSURL *videoURL;
@property (weak, nonatomic) BDCTFlow *flow;

- (void)layoutContenViews;
- (void)updateVideoPlayState:(BOOL)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
