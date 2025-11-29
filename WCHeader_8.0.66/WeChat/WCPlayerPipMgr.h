@class WCAudioModule, WCPictureInPictureController, WCPipContentSourcePlayer, NSString, WCPlayerPipSessionInfo, NSMutableArray;

@interface WCPlayerPipMgr : MMUserService <WCPictureInPictureDelegate, MMServiceProtocol, WCAudioModuleExt>

@property (retain, nonatomic) WCPlayerPipSessionInfo *sessionInfo;
@property (retain, nonatomic) WCAudioModule *activeAudioModule;
@property (retain, nonatomic) WCPictureInPictureController *pipController;
@property (retain, nonatomic) WCPipContentSourcePlayer *pipSourcePlayer;
@property (retain, nonatomic) WCPipContentSourcePlayer *oldPipSourcePlayer;
@property (nonatomic) BOOL enablePictureInPictureSeekButton;
@property (retain, nonatomic) NSMutableArray *arrSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)invalidatePlaybackState;
- (BOOL)isAudioModuleInterruptPipResource;
- (BOOL)isPictureInPictureActive;
- (BOOL)isRegisteredPipResource:(id)a0;
- (BOOL)isPipingWithSourcePlayer:(id)a0;
- (void)showPictureInPictureSeekButton:(BOOL)a0;
- (id)getPipSessionInfo;
- (BOOL)canRegisterNewPipSourcePlayer;
- (BOOL)tryRegisterPipSourcePlayer:(id)a0;
- (void)createPipControllerWithSourcePlayer:(id)a0;
- (void)unregisterPipSourcePlayer:(id)a0;
- (void)stopPipAndCleanResource:(id)a0;
- (void)cleanResourceWhenPipNotSuccStart:(id)a0;
- (void)tryDelayStopAutoPipWhenEnterForeground:(id)a0;
- (BOOL)isCloseInterruptCleanPipResouce;
- (void)audioModuleDidActive:(id)a0;
- (void)audioModuleDidDeactive:(id)a0;
- (void)destoryPipSourcePlayer;
- (void)destoryPipController;
- (long long)pictureInPictureState;
- (BOOL)pictureInPictureActive;
- (id)pipView;
- (void)movePlayerViewToPipView:(id)a0 reason:(long long)a1;
- (void)recoverPlayerViewToOriginSuperview:(id)a0 reason:(long long)a1;
- (void)pictureInPictureStateDidChange:(long long)a0;
- (void)printPictureInPictureStatus;
- (void)onPictureInPicturePossibleChanged:(BOOL)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
