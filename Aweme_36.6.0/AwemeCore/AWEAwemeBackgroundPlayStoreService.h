@class NSString;

@interface AWEAwemeBackgroundPlayStoreService : HTSService <AWEAwemeBackgroundPlayStoreService>

@property (nonatomic) BOOL switchState;
@property (nonatomic) long long audioSwitchState;
@property (nonatomic) long long audioSceneState;
@property (nonatomic) BOOL bgPlayComponentSwitchState;
@property (nonatomic) long long bgPlaySettings;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSwitch:(BOOL)a0;
- (BOOL)isBGPlayComponentSwitchOn;
- (void)setBGPlayComponentSwitch:(BOOL)a0;
- (long long)userBGPlaySettings;
- (void)updateUserBGPlaySettings:(long long)a0;
- (void)updateUserBGPlaySettingsWithTitle:(id)a0;
- (id)titleForBGPlayComponentSwitch;
- (id)subTitleForBGPlayComponentSwitch;
- (Class)backgroundPlaySettingsPanel;
- (id)backgroundPlaySettingsPageVCWithType:(long long)a0;
- (void)setBackgroundEnterMethod:(id)a0;
- (id)backgroundEnterMethod;
- (long long)bgPlaySwitchState;
- (long long)bgPlaySceneState;
- (void)updateBGPlaySwitchState:(long long)a0;
- (id)iphonePiPManager;
- (BOOL)isSwitchON;
- (void).cxx_destruct;
- (id)init;

@end
