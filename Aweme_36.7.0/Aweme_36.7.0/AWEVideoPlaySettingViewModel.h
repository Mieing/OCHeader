@class NSString, NSArray;
@protocol AWEVideoPlaySettingDelegate;

@interface AWEVideoPlaySettingViewModel : AWESettingBaseViewModel <AFDSettingSearchDelegate, AWEBGPlayUserSettingsChangedMessage, AWELivePipSettingMessage> {
    NSArray *_sectionDataArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEVideoPlaySettingDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldShowPinchModePiPSwitch;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:(id)a0;
+ (BOOL)shouldShowBackgroundPlaySwitch;
+ (Class)aAWESearchKnowledgeFullPageMuteMainDOUYINSSAdapterClass;
+ (BOOL)shouldShowFeedTogetherPIPSwitch;
+ (BOOL)shouldShowBackgroundPlayComponentSwitch;
+ (BOOL)shouldShowBGPlayUserSettings;

- (id)aAWEPadModuleAdapter;
- (void)switchMVChannelWindowPlay:(BOOL)a0;
- (id)liveModuleService;
- (void)backgroundPlayDidChangeAudioSwitchToState:(long long)a0;
- (void)backgroundPlayDidChangePiPSwitchToState:(long long)a0;
- (void)backgroundPlayDidChangedRemotePiPToSwitchOn:(BOOL)a0;
- (id)aAWESearchKnowledgeFullPageMuteMainDOUYINSSAdapter;
- (void)livePipSettingDidChanged:(BOOL)a0 type:(long long)a1;
- (void)switchFeedTogetherPiP:(BOOL)a0;
- (void)switchGlobalPiP:(BOOL)a0;
- (void)switchPadIMPiP:(BOOL)a0;
- (void)switchIPhoneAutoPlayPip:(BOOL)a0;
- (void)switchIPhoneGlobalPiP:(BOOL)a0;
- (void)switchBackgroundPlay:(BOOL)a0;
- (void)switchBackgroundPlayComponent:(BOOL)a0;
- (void)switchColdLaunchAdjustVolume:(BOOL)a0;
- (void)switchMultiDeviceSyncPlay:(BOOL)a0;
- (void)switchMuteAweme:(BOOL)a0;
- (void)switchKnowledgePageMuteAweme:(BOOL)a0;
- (void)switchAutoRotate:(BOOL)a0;
- (void)switchPinchModePiP:(BOOL)a0;
- (void)tapBGPlayAudioSettingsCell;
- (void)tapBGPlayPiPSettingsCell;
- (void)updateMuteAweme;
- (BOOL)shouldShowUniSettingsForBGPlayAudioAndPiP;
- (BOOL)shouldShowBGPlayAudioSettings;
- (BOOL)shouldShowBGPlayPiPSettings;
- (BOOL)shouldShowFeedIPhoneAutoPlayPipSwitch;
- (BOOL)shouldShowIPhoneGlobalPiPSwitch;
- (void)updateBackgroundPlayItem;
- (void)updatePinchModePiPItem;
- (void)updateKnowledgePageMuteStatus;
- (void)updateFeedTogetherPiPItem;
- (void)updateGlobalPiPItem;
- (void)updateColdLaunchAdjustSystemVolumeItem;
- (void)updateIPhoneAutoPlayPipItem;
- (void)updateIPhoneGlobalPiPItem;
- (void)updateMultiDeviceSyncPlayItem;
- (void)updatePadIMPiPItem;
- (void)dealKnowledgePageMuteDisplay:(BOOL)a0;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
