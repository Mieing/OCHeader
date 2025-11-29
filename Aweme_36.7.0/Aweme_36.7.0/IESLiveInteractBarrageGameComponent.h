@class NSNumber, HTSLiveLinkmicGameInfo, NSString;
@protocol IESLiveGenericAlertPtotocol;

@interface IESLiveInteractBarrageGameComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveInteractBarrageGameRouter, IESLiveSocialInteractAction>

@property (retain, nonatomic) HTSLiveLinkmicGameInfo *gameInfo;
@property (retain, nonatomic) NSNumber *startLinkTimestamp;
@property (weak, nonatomic) id<IESLiveGenericAlertPtotocol> alert;
@property (nonatomic) BOOL isProcessOpenCamera;
@property (nonatomic) BOOL isManualStopAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentUnmount;
- (void)currentServerLayoutWillChangedFrom:(id)a0 to:(id)a1;
- (id)trackEventParams;
- (void)componentBindContext;
- (BOOL)isProcessingGame;
- (BOOL)isProcessOpenCameraFromAvatar;
- (void)componentEnterRoom;
- (void)trackPlayModeLinkDuration;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)trackPlayModeLink;
- (void)componentDidJoinChannel;
- (void)componentDidLeaveChannel;
- (void)startBarrageGame:(id)a0 startContent:(id)a1;
- (void)stopBarrageGame;
- (void)dismissOpenCameraAlert;
- (void)tryTrackPlaymodeStartEvent:(id)a0;
- (void)componentLeaveRoom;
- (void)showOpenCameraPreview:(id /* block */)a0;
- (void)trackCameraPopupClick:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
