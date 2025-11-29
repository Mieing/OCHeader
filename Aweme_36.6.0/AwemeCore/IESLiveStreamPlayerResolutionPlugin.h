@class NSArray, NSMutableDictionary, IESLiveSmoothSwitchResolutionController, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, NSDictionary, NSString;

@interface IESLiveStreamPlayerResolutionPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerResolutionPluginProtocol>

@property (retain, nonatomic) IESLiveSmoothSwitchResolutionController *smoothSwitchController;
@property (copy, nonatomic) id /* block */ switchResolutionComplete;
@property (copy, nonatomic) id /* block */ smoothlySwitchComplete;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *playerQuality;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *beforePlayerQuality;
@property (copy, nonatomic) NSArray *qualitiesArrayForSpeedMonitor;
@property (retain, nonatomic) NSMutableDictionary *smoothlySwitchBlocks;
@property (copy, nonatomic) NSDictionary *strategyInfo;
@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSString *resolutionKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)didSetAttachingDIContext;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didAutomaticallySwitchFromPreviousResolution:(id)a1 toCurrentResolution:(id)a2 userInfo:(id)a3;
- (void)trackPlay;
- (BOOL)supportResolutionSDKKey:(id)a0;
- (void)switchCurrentItemResolution:(id)a0 callTrace:(id)a1;
- (BOOL)smoothSwitching;
- (void)trackPlayForQuality:(id)a0 type:(long long)a1;
- (id)getDisplayResolutions;
- (void)dealWithRoiBMFSR:(id)a0;
- (BOOL)isNeedROI:(long long)a0;
- (id)resolutionController;
- (id)getOneLevelLowerQualitySDKKey;
- (id)getLowestQualitySDKKey;
- (void)switchQualityWityKey:(id)a0 callTrace:(id)a1 complete:(id /* block */)a2;
- (void)smoothlySwitchResolutionToSDKKey:(id)a0 switchReason:(long long)a1 callTrace:(id)a2 completion:(id /* block */)a3 switchResultCompletion:(id /* block */)a4;
- (void)updateResolutionWithRoomModel:(id)a0 strategyParams:(id)a1 callTrace:(id)a2 complete:(id /* block */)a3;
- (void)smoothSwitchResolution:(id)a0 completion:(id /* block */)a1;
- (BOOL)observerSmoothSwitchCompletion:(id /* block */)a0;
- (id)getStoredResolutionKeyIfNeed:(id)a0 roomModel:(id)a1;
- (id)getQualityFromResolutionKey:(id)a0 andPullData:(id)a1;
- (void)updatePlayerTrackInfo;
- (id /* block */)_findAndClearBlockWithTargetSDKKey:(id)a0;
- (id)getStoredResolutionKeyIfNeed:(id)a0;
- (void)realUpdateResolutionWithStreamData:(id)a0 sdkKey:(id)a1 switchMode:(long long)a2 complete:(id /* block */)a3;
- (void)trackSwitchQuality:(id)a0 type:(id)a1 switchMode:(long long)a2 code:(long long)a3;
- (id)getResolutionFromResolutionKey:(id)a0 andPullData:(id)a1;
- (void)_strategyServiceCollectQualityInfos:(id)a0 withPullData:(id)a1;
- (long long)_getResolutionLevelFromResolutionKey:(id)a0 andPullData:(id)a1;
- (void)notifyDidAutomaticallySwitchFromPreviousResolution:(id)a0 toCurrentResolution:(id)a1 userInfo:(id)a2;
- (void)handleRoiBMFSRMetaInfo:(id)a0;
- (void)pe_bizHostDealloc;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void)pe_willReloadWithStreamData:(id)a0 sdkKey:(id)a1 callTrace:(id)a2;
- (void)pe_didReloadWithStreamData:(id)a0 sdkKey:(id)a1 callTrace:(id)a2;
- (void)updateStoredResolutionKeyIfNeed:(id)a0;
- (void).cxx_destruct;

@end
