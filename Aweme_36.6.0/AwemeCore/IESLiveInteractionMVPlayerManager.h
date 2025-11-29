@class NSString, IESLiveInteractionMVPlayerBizViewModel, IESLiveVideoPlayerController, IESLiveInteractionMVPlayerBizView, UIView;
@protocol IESLiveRoomService, IESLiveInteractionMVPlayerManagerDelegate;

@interface IESLiveInteractionMVPlayerManager : NSObject <IESLiveVideoPlayerControllerDelegate, IESLiveInteractionMVPlayerManagerRouter>

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (nonatomic) unsigned long long currentResolution;
@property (nonatomic) BOOL needPush;
@property (nonatomic) BOOL needUpdateAudioLayout;
@property (nonatomic) BOOL needResumeAudioLayout;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL readyToResetPushStream;
@property (nonatomic) BOOL isPushingVideoFrames;
@property (nonatomic) BOOL cameraOpen;
@property (retain, nonatomic) IESLiveInteractionMVPlayerBizView *bizView;
@property (retain, nonatomic) IESLiveInteractionMVPlayerBizViewModel *bizViewModel;
@property (weak, nonatomic) id<IESLiveInteractionMVPlayerManagerDelegate> delegate;
@property (readonly, nonatomic) UIView *playerBizView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)pushVideoBuffer:(struct __CVBuffer { } *)a0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)mute:(BOOL)a0;
- (void)seekToProgress:(double)a0;
- (BOOL)isPause;
- (id)initWithRoomModel:(id)a0;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)loadLocalVideoURL:(id)a0;
- (void)loadVideoURL:(id)a0 cacheKey:(id)a1;
- (void)reloadVideoURLs:(id)a0 cacheKey:(id)a1;
- (void)reloadVideoURLs:(id)a0 cacheKey:(id)a1 needPush:(BOOL)a2 needUpdateAudioLayout:(BOOL)a3;
- (void)reloadVideoURLs:(id)a0 cacheKey:(id)a1 needPush:(BOOL)a2;
- (void)updateAtmosphereFrameColorData:(id)a0 startIndex:(unsigned long long)a1 playDuration:(double)a2 staticBG:(BOOL)a3;
- (void)createMVPlayerWithConfig:(id)a0;
- (void)updatePerformanceDegradeMVBackground:(BOOL)a0;
- (double)getCurAtmosphereBackgroundColorValueVector;
- (void)stopPushCheckStreamVideoFrames;
- (void)startPushCheckStreamVideoFrames;
- (BOOL)isKTVCapturing;
- (id)createMVPlayerWithFeature:(unsigned long long)a0 scalingMode:(long long)a1;
- (void)updateScalingModeFillOption:(long long)a0;
- (void)loadVideoVid:(id)a0 token:(id)a1;
- (void)cameraCaptureDidStart;
- (void)cameraCaptureDidStop;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (double)duration;
- (BOOL)isAnchor;
- (void)dealloc;
- (void)prepareToPlay;
- (id)videoID;

@end
