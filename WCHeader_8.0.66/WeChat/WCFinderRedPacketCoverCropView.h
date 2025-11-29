@class AVPlayer, AVAsset, NSURL, AVPlayerItem, UIView, UIImageView, MMUIScrollView, NSString, AVPlayerLayer, WCFinderHeadImageView, UILabel;
@protocol WCFinderRedPacketCoverCropViewDelegate;

@interface WCFinderRedPacketCoverCropView : MMUIView <UIScrollViewDelegate>

@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *cardImgView;
@property (retain, nonatomic) NSURL *videoUrl;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVAsset *playerAVAsset;
@property (nonatomic) double keyFrameRate;
@property (nonatomic) double videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) MMUIScrollView *scrollView;
@property (retain, nonatomic) UIView *playerContainerView;
@property (nonatomic) BOOL shouldIgnoreScrollEvent;
@property (weak, nonatomic) id<WCFinderRedPacketCoverCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoURL:(id)a1;
- (void)setUpView;
- (void)layoutAllSubviews;
- (void)loadPreviewView;
- (void)removeNotification;
- (void)observeNotification;
- (void)playerItemDidReachEnd:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)observePlayerProgress;
- (void)checkProgressByCurrentTime:(double)a0;
- (void)dealloc;
- (void)setupLoopPlaybackWithStartTime:(double)a0;
- (void)sliderPanChangedState:(long long)a0;
- (void)sliderScrollAction;
- (id)rangeModel;
- (id)sliderVideoCropRect;
- (id)getCurThumbImage;
- (void).cxx_destruct;

@end
