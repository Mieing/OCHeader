@class WCLiveStarterScrollActionSheet, NSDictionary, WCFinderLiveStarterChooseGamePanelView, MMFinderScreenRecordGuideView, WCFinderStarterLiveViewModel, MMGrowTextView, MMLiveTaskId, MMFinderLiveMusicSettingOperationPanel, NSString, WCFinderHeadImageView, MMFinderLiveReplayKitManager, MMLiveCountdownTipsView, MMFinderLiveSongSettingOperationPanel, RPSystemBroadcastPickerView, WCFinderLiveStarterReporter;
@protocol MMLiveStarterViewControllerDelegate;

@interface MMLiveStarterViewController : MMUIViewController <IRecordPermissionCheckExt>

@property (nonatomic) BOOL isRecordPermissionCheckOK;
@property (nonatomic) BOOL isInRecordPermissionCheckProcess;
@property (retain, nonatomic) NSDictionary *startExtraInfo;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) WCLiveStarterScrollActionSheet *settingScrollActionSheet;
@property (nonatomic) unsigned int curCoinValue;
@property (nonatomic) BOOL uploadCoverImageRequired;
@property (nonatomic) BOOL jumpToSticker;
@property (nonatomic) BOOL jumpToOperation;
@property (nonatomic) long long currDeviceOrientation;
@property (retain, nonatomic) WCFinderLiveStarterChooseGamePanelView *chooseGamePanelView;
@property (weak, nonatomic) MMFinderLiveMusicSettingOperationPanel *musicSettingOprationPanel;
@property (retain, nonatomic) MMFinderLiveSongSettingOperationPanel *songSettingOperationPanel;
@property (nonatomic) unsigned long long gameLiveStartAction;
@property (retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView;
@property (retain, nonatomic) MMFinderLiveReplayKitManager *replayKitManager;
@property (retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView;
@property (retain, nonatomic) WCFinderStarterLiveViewModel *starterVM;
@property (retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView;
@property (nonatomic) BOOL isAgreementChecked;
@property (retain, nonatomic) WCFinderLiveStarterReporter *reporter;
@property (retain, nonatomic) WCFinderHeadImageView *coverImageView;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (weak, nonatomic) id<MMLiveStarterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)stopLiveTimer;
- (void)showLiveStarterWarnPage:(id)a0;
- (void)onOrientationChanged;
- (void)onCurrAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)a0;
- (void)checkRecordPermissionAndStartLive;
- (void)realStartLive;
- (unsigned long long)systemCapabilityAuthScene;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)addShakeOnCheckBoxView;
- (void)setStartGameLiveButtonDisable:(BOOL)a0;
- (double)getSwitchModeViewScale;
- (id)minimizeSrcView;
- (void)updateStartExtraInfo:(id)a0;
- (void).cxx_destruct;

@end
