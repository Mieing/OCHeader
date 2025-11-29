@class NSString, NSMutableDictionary, IESECPDPVideoPlayStateManagerState;
@protocol IESECPDPVideoAudioStateManagerProtocol, IESECPDPVideoPlayerInitializerProtocol;

@interface IESECPDPVideoPlayStateManager : NSObject <IESECPDPVideoPlayStateManagerProtocol>

@property (retain, nonatomic) IESECPDPVideoPlayStateManagerState *prevState;
@property (retain, nonatomic) IESECPDPVideoPlayStateManagerState *curState;
@property (retain, nonatomic) NSMutableDictionary *sceneToStateMap;
@property (weak, nonatomic) id<IESECPDPVideoAudioStateManagerProtocol> audioStateCalculator;
@property (weak, nonatomic) id<IESECPDPVideoPlayerInitializerProtocol> initializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)play:(id)a0 isForce:(BOOL)a1;
- (void)forceChangeMuteState:(BOOL)a0 withPlayer:(id)a1;
- (BOOL)isPlayerPlayingAudio:(id)a0;
- (void)pausePlay:(id)a0;
- (BOOL)existPlayerPlayingVideo;
- (BOOL)isPlayerPlayingVideo:(id)a0;
- (void)changeConfigForPlayerInScene:(id)a0 mute:(BOOL)a1;
- (void)playerDidEndPlay:(id)a0;
- (BOOL)isPlayerPlayingAudioWithPlayerScene:(id)a0;
- (BOOL)isPlayerPlayingVideoWithPlayerScene:(id)a0;
- (BOOL)shouldPlayerBeControlled:(id)a0;
- (void)onAudioPlayerChangeTo:(id)a0 from:(id)a1 isForce:(BOOL)a2;
- (void)doChangeMuteStatus:(BOOL)a0 withPlayer:(id)a1 isForce:(BOOL)a2;
- (void)doPausePlayer:(id)a0 isForce:(BOOL)a1 shouldCallback:(BOOL)a2;
- (BOOL)canPlayerPlay:(id)a0;
- (void)doPlayPlayer:(id)a0 isForce:(BOOL)a1;
- (id)getDenyListWhenPlayerIsPlay:(id)a0;
- (void)doChangePlayerState:(id)a0 toIsPlaying:(BOOL)a1 isForce:(BOOL)a2;
- (BOOL)existPlayerPlayingAudio;
- (void).cxx_destruct;
- (void)applyState:(id)a0;
- (id)init;

@end
