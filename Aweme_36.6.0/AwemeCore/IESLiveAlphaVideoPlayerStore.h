@class HTSEventContext, NSString, IESLiveAlphaVideoPlayer, IESLiveAlphaVideoPlayerQueue;
@protocol IESLiveRoomService;

@interface IESLiveAlphaVideoPlayerStore : NSObject <IESLiveGiftModuleAlphaVideoPlayerInterface, IESLiveAlphaVideoPlayerCallbackDelegate, IESLiveAlphaVideoPlayerActionDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAlphaVideoPlayer *alphaVideoPlayer;
@property (retain, nonatomic) IESLiveAlphaVideoPlayerQueue *playerQueue;
@property (nonatomic) BOOL isPlayingVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)createAlphaVideoPlayerWithRoom:(id)a0 trackContext:(id)a1;
- (id)initWithRoom:(id)a0 context:(id)a1 componentContext:(id)a2;
- (void)playerDidFinishedWithConfiguration:(id)a0 error:(id)a1;
- (void)playerSceneError:(id)a0 scene:(unsigned long long)a1;
- (void)buttonDidShowWithType:(long long)a0 close:(BOOL)a1;
- (void)buttonDidClickWithType:(long long)a0 enable:(BOOL)a1;
- (void)startPlayWithConfiguration:(id)a0 displayImmediately:(BOOL)a1;
- (id)descriptionOfButtonType:(long long)a0;
- (void)stopPlaying;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)checkQueue;
- (void)setup;

@end
