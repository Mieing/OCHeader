@class IESLiveInteractiveMediaService, NSString, IESLiveScreencastLinkerStreamLayout;
@protocol IESLiveScreencastLinkerAnchorInstanceDelegate;

@interface IESLiveScreencastLinkerAnchorInstance : NSObject <IESLiveInteractiveMediaServiceDelegate>

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveScreencastLinkerStreamLayout *streamLayout;
@property (weak, nonatomic) id<IESLiveScreencastLinkerAnchorInstanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopInteract;
- (void)startInteract;
- (void)muteRemoteAudioStreamWithLinkmicID:(id)a0 mute:(BOOL)a1 reason:(id)a2;
- (void)interactiveMediaServiceDidStart:(id)a0;
- (void)interactiveMediaService:(id)a0 receivesError:(id)a1;
- (void)interactiveMediaService:(id)a0 firstRemoteAudioFrameWithLinkmicUid:(id)a1;
- (void)interactiveMediaService:(id)a0 didOfflineOfUid:(id)a1 sessions:(id)a2 reason:(unsigned long long)a3;
- (BOOL)needPlayOuxAuxAudio;
- (void).cxx_destruct;

@end
