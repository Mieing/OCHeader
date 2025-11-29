@class NSString, IESLiveVideoPlayerController, UIView;
@protocol IESLiveVideoPlayerDelegate;

@interface IESLiveVideoPlayer : NSObject <IESLiveVideoPlayerControllerDelegate, IESLiveVideoPlayerProvider>

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *windowView;
@property (nonatomic) unsigned long long loadState;
@property (nonatomic) unsigned long long playbackState;
@property (nonatomic) double progress;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double duration;
@property (weak, nonatomic) id<IESLiveVideoPlayerDelegate> delegate;
@property (nonatomic) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *vid;

- (void)didSetAttachingDIContext;
- (void)seekToProgress:(double)a0;
- (void)attachOnSmallWindow:(id)a0;
- (void)detachWindow;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateCacheProgress:(double)a1;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)playerController:(id)a0 userStop:(id)a1;
- (void)renderOnView:(id)a0;
- (void)reloadVideoUrl:(id)a0;
- (void)reloadVideoId:(id)a0;
- (void)changePlayerContentFrame;
- (void)_loadPlayerIfNeed;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setStartTime:(double)a0;
- (void)prepareForReuse;
- (id)init;
- (void)stop;
- (void)commonInit;
- (void)hide;
- (id)playerView;
- (void)show;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setLoop:(BOOL)a0;

@end
