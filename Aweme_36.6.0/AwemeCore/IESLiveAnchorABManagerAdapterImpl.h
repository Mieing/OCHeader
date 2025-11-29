@class NSString;

@interface IESLiveAnchorABManagerAdapterImpl : IESLiveBaseAdapter <IESLiveAnchorABManagerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)liveAVPrivacyControlV2Enable;
- (BOOL)liveAnchorPrivacyPermissionOptimize;
- (id)liveAnchorGiftAnimationSwitch;
- (id)liveEffectNewEngineConfig;
- (BOOL)liveEnableAdjustFullDisplay;
- (id)targetInstance;
- (BOOL)liveAudienceEffectLinkOptimizeEnable;
- (BOOL)liveOcclusionCalcNewVCLayerEnable;
- (BOOL)liveOcclusionCalcInNextRunloop;
- (BOOL)liveOcclusionCalcGuardEnable;
- (BOOL)liveOcclusionCalcAlgorithmV2Enable;

@end
