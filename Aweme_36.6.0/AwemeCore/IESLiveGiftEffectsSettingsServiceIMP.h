@class IESLiveMoreToolsScrollSettingView, IESLiveMoreToolsSettingItem, NSString, NSMutableArray;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveGiftEffectsSettingsServiceIMP : IESLiveGeneralBaseService <IESLiveGiftEffectsSettingsService>

@property (nonatomic) BOOL disableBigGiftAnimation;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *faceEffectSwitch;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *receiveGamePlaySwitch;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *rareGiftSwitch;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *normalGiftSwitch;
@property (retain, nonatomic) NSMutableArray *settingItems;
@property (retain, nonatomic) IESLiveMoreToolsScrollSettingView *settingView;
@property (retain, nonatomic) NSString *requestPageString;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *giftEffectIntroSchema;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (nonatomic) BOOL rareGiftHasSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (BOOL)isEnableBigGiftAnimation;
- (void)enableBigGiftAnimation:(BOOL)a0;
- (void)setFaceEffectsValue:(id)a0;
- (void)updateFaceEffectsOn:(BOOL)a0 anchorID:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (BOOL)getCurrentFaceEffectsOn;
- (BOOL)getCurrentFaceEffectsOff;
- (BOOL)currentRareGiftOn;
- (BOOL)currentRareGiftOff;
- (void)updateRareGiftOn:(BOOL)a0 successCompletion:(id /* block */)a1;
- (void)getServerRareGiftSetting;
- (void)stopBigGiftAnimationsSaved:(BOOL)a0;
- (void)resumeBigGiftAnimations;
- (BOOL)currentDisableBigGiftAnimation;
- (void)showGiftEffectSettingPanelWithType:(unsigned long long)a0 trackParams:(id)a1;
- (BOOL)isEnableReceiveGamePlay;
- (void)enableReceiveGamePlay:(BOOL)a0;
- (void)trackGiftEffectSwitchClickWithParams:(id)a0 effectType:(id)a1 switchState:(BOOL)a2;
- (void)showGiftPlayEffectType:(unsigned long long)a0 switchWillTargetState:(BOOL)a1 description:(id)a2 trackParams:(id)a3;
- (void)trackPopupShowEventWithParams:(id)a0 moduleName:(id)a1 effectType:(id)a2;
- (void)trackGiftEffectSwitchClickWithParams:(id)a0 effectType:(id)a1 switchFinalState:(BOOL)a2 success:(BOOL)a3;
- (void).cxx_destruct;

@end
