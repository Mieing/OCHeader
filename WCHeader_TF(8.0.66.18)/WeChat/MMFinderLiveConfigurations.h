@class NSArray, NSString, MMLiveEnergyRule;

@interface MMFinderLiveConfigurations : MMUserService <IExptServiceExt, MMConfigMgrExt, MMServiceProtocol>

@property (readonly, nonatomic) BOOL EnergyController_lowPowerModeAvailable;
@property (readonly, copy, nonatomic) NSArray *EnergyController_lowPowerModeRules;
@property (readonly, nonatomic) BOOL EnergyController_forcesEnableLowPowerMode;
@property (readonly, nonatomic) MMLiveEnergyRule *EnergyController_kitchenRule;
@property (readonly, nonatomic) BOOL EnergyController_WeEffect_allowsAdjustFaceAlignmentToDisabledLevel;
@property (readonly, nonatomic) BOOL EnergyController_WeEffect_allowsAdjustOcclusionSegmentToDisabledLevel;
@property (readonly, nonatomic) float Gift_PAGFrameRate;
@property (readonly, nonatomic) float Gift_fullScreenGiftDisplaySpacingTimeInterval;
@property (readonly, nonatomic) BOOL Cast_autoAirPlayWhileEnteringNewLive;
@property (readonly, nonatomic) BOOL Cast_allowsUsingUPnP;
@property (readonly, nonatomic) double Cast_UPnPDiscoveryTimeoutInterval;
@property (readonly, nonatomic) BOOL DocumentsPresentation_usesTestBizArticles;
@property (readonly, nonatomic) BOOL Flutter_usesStandaloneFlutterLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reloadConfigurations;
- (void)onExptItemListChange;
- (void)onMMDynamicConfigUpdated;
- (void)EnergyController_reloadConfigurations;
- (void)Cast_reloadConfigurations;
- (void).cxx_destruct;

@end
