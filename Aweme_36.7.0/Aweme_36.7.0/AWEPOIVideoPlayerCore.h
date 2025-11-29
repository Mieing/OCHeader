@class NSString, UIView;
@protocol IESVideoPlayerDelegate, IESVideoPlayerProtocol;

@interface AWEPOIVideoPlayerCore : UIView <IESVideoPlayerDelegate>

@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerWrapper;
@property (weak, nonatomic) id<IESVideoPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currPlaybackTime;
- (void)updateVideoID:(id)a0 playURLs:(id)a1;
- (id)addVideoPlayer;
- (id)createPlayerWrapper;
- (void)updatePlayURLs:(id)a0;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)stop;
- (void)seekToTime:(double)a0;
- (long long)playerState;
- (void)layoutSubviews;
- (void)setMute:(BOOL)a0;
- (void)prepareToPlay;
- (void)setupPlayer;

@end
