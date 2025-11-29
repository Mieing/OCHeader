@class NSString;

@interface IESLiveStreamPlayerCameraPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerCameraPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)changeCameraTo:(id)a0 callTrace:(id)a1;
- (void)changeCameraTo:(id)a0 callTrace:(id)a1 source:(long long)a2;
- (void)changeCameraToID:(id)a0 callTrace:(id)a1;
- (void)changeCameraToID:(id)a0 callTrace:(id)a1 source:(long long)a2;
- (void)changeRoomStyleCallTrace:(id)a0;
- (void)_cameraDidChangeToAudienceVC;
- (void)changeRoomAndCameraStyle:(id)a0;
- (void)changeCameraStyleWithCallTrace:(id)a0;

@end
