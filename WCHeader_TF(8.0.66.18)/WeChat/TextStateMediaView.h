@class UIView, MMWebImageView, CADisplayLink, UIImage, WCPlayerView, UIImageView, MMTextStateMediaItem, TextStateIcon, NSString, MMTextStateVideoControlView;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStateMediaView : UIView <WCPlayerConfigDelegate, MMTextStateVideoControlViewDelegate, MMTextStateMediaDownloadImageCdnMgrExt, TextStateBaseMediaView>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) MMWebImageView *bigIconImageView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) MMTextStateVideoControlView *controlView;
@property (nonatomic) double imageCurrentTime;
@property (retain, nonatomic) CADisplayLink *imageDisplayLink;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL isPlayLiveByLongPress;
@property (nonatomic) BOOL isPlayLiveUseFeedBack;
@property (retain, nonatomic) MMTextStateMediaItem *mediaItem;
@property (nonatomic) double transitionProgress;
@property (nonatomic) BOOL useCustomBlurEffect;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) TextStateIcon *iconForDefaultImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateBigIcon;
- (void)setMediaItem:(id)a0 shouldAutoPlay:(BOOL)a1;
- (void)dealWCPlayer:(BOOL)a0 shouldAutoPlay:(BOOL)a1;
- (void)updateImage:(id)a0 effectCacheKey:(id)a1;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (void)resetPlayMedia;
- (BOOL)longPressEvent:(BOOL)a0;
- (BOOL)isCurrentPlaying;
- (void)setIsLivePlayUseFeedBack:(BOOL)a0;
- (void)stopLive;
- (void)tick:(id)a0;
- (void)startDisplayLink;
- (void)stopDisplayLink;
- (void)onVideoPlayerCreated;
- (void)onVideoProgressChange:(double)a0;
- (void)onTextStateMediaThumbDownloadSuccess:(id)a0;
- (void)onTextStateMediaThumbDownloadFail:(id)a0;
- (void)onTextStateMediaImageDownloadSuccess:(id)a0;
- (void)onTextStateMediaImageDownloadFail:(id)a0;
- (void).cxx_destruct;

@end
