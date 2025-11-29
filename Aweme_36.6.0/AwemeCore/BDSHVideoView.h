@class NSString, UIView, BDSHVideoModel, UIButton;
@protocol BDSHVideoStatusDelegate, BDASDKVideoPlayerProtocol;

@interface BDSHVideoView : NSObject <BDASDKVideoPlayerDelegate, BDSHVideoProtocol>

@property (weak, nonatomic) id<BDSHVideoStatusDelegate> delegate;
@property (retain, nonatomic) BDSHVideoModel *model;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIView<BDASDKVideoPlayerProtocol> *videoPlayer;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) double lastTimeUpdate;
@property (nonatomic) BOOL playButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstanceWithModel:(id)a0;

- (id)createErrorView;
- (void)videoPlayerDidFinished:(id)a0 error:(id)a1;
- (void)videoPlayer:(id)a0 playbackTime:(double)a1;
- (void)videoPlayer:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoPlayerReadyToDisPlay:(id)a0 params:(id)a1;
- (id)getVideoView;
- (void)enablePlayPauseButton;
- (void)setPlayButtonVisible:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setMuted:(BOOL)a0;
- (void)stop;
- (void)destroy;
- (void)setLoop:(BOOL)a0;
- (void)setAutoplay:(BOOL)a0;

@end
