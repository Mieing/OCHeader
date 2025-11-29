@class UIView, NSString, UIImage, AVPlayerItem, UIImageView, WCShortVideoToolbarResultPreviewBottomView, AVPlayerLayer, AVPlayer;

@interface ShortVideoToolbarPreviewView : UIView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIView *backgrounView;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) WCShortVideoToolbarResultPreviewBottomView *botView;
@property (retain, nonatomic) UIImageView *m_topBkgView;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (copy, nonatomic) id /* block */ didClickRetakeBlock;
@property (copy, nonatomic) id /* block */ didClickDoneBlock;
@property (copy, nonatomic) id /* block */ didClickMuteBlock;
@property (copy, nonatomic) id /* block */ didClickEditBlock;
@property (copy, nonatomic) id /* block */ didClickEditVideoBlock;
@property (nonatomic) unsigned long long m_scene;
@property (nonatomic) BOOL bOnEditting;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (void)setVideoPath:(id)a0 withOrientation:(long long)a1;
- (id)setImage:(id)a0 Orientation:(long long)a1 isFrontCamera:(BOOL)a2;
- (void)pauseVideo;
- (void)continuePlayVideo;
- (void)playerItemDidReachEnd:(id)a0;
- (void)setupPreviewView;
- (void)setupBottomView;
- (void)didClickRetake;
- (void)didClickDone;
- (void)didClickMute;
- (void)didClickEdit;
- (void)didClickEditVideo;
- (void)stopVideo;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void).cxx_destruct;

@end
