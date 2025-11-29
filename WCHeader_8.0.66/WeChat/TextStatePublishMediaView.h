@class WCPlayerPlayArgs, WCPlayerConfigControlView, UIImageView, NSString, UIImage, WCPlayerView;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStatePublishMediaView : UIView <WCPlayerConfigDelegate, TextStateBaseMediaView>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) WCPlayerConfigControlView *controlView;
@property (retain, nonatomic) WCPlayerPlayArgs *livePlayerInfo;
@property (retain, nonatomic) NSString *liveImageUrl;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *videoPath;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL useCustomBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (weak, nonatomic) id<TextStateBaseMediaViewDelegate> textStateDelegate;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isForceMuted) BOOL forceMuted;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setVideoPath:(id)a0 thumbImage:(id)a1;
- (id)getNormalVideoPlayInfo;
- (id)getLiveVideoPlayInfo;
- (void)setLivePhotoVideoURL:(id)a0 imageURL:(id)a1 needPlay:(BOOL)a2;
- (id)createPlayerConfig;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)startPlayLive;
- (void)stopPlayLive;
- (BOOL)isCurrentPlaying;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onPlayerCreated;
- (void)refreshView;
- (void).cxx_destruct;

@end
