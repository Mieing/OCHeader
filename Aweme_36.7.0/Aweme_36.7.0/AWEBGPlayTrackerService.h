@class NSString;

@interface AWEBGPlayTrackerService : HTSService <AWEBGPlayTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackBGPlayStartWithModel:(id)a0 sceneType:(long long)a1 enterFrom:(id)a2;
- (void)trackBGPlayEndWithModel:(id)a0 sceneType:(long long)a1 enterFrom:(id)a2 duration:(double)a3 exitMethod:(long long)a4 extraParams:(id)a5;
- (id)trackParamsForBGPlayAudioSceneState;
- (id)trackParamsForBGPlayAudioSwitchState;
- (id)trackParamsForBGPlayPiPSceneState;
- (id)trackParamsForBGPlayPiPSwitchState;

@end
