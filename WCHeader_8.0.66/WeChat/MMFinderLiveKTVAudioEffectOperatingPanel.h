@class MMFinderLiveKTVAudioEffectSettingCell, NSString, MMFinderLiveTaskId, UIView, WCTableViewManager, WCFinderLiveAnchorLogReporter;

@interface MMFinderLiveKTVAudioEffectOperatingPanel : MMPageSheetBaseView <MMFinderLiveKSKitAudioEffectSettingExt, MMLiveTaskMgrExt, MMTableViewInfoDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorLogReporter;
@property (weak, nonatomic) MMFinderLiveKTVAudioEffectSettingCell *humanVolumeSettingCell;
@property (weak, nonatomic) MMFinderLiveKTVAudioEffectSettingCell *bgmVolumeSettingCell;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 source:(long long)a1;

- (id)initWithTaskId:(id)a0 source:(long long)a1;
- (void)setupPageSheetConfig;
- (void)registerExtensions;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)layoutTableView;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)addOriginSettingSection;
- (void)addToneSettingSection;
- (void)addUIEffectSection;
- (void)addReverbSettingSection;
- (id)makeHeaderViewWith:(id)a0 topPading:(double)a1;
- (void)onLeftButtonTapped;
- (void)onRightButtonTapped;
- (void)endSong;
- (id)leftNavButton;
- (id)rightNavButton;
- (double)contentWidth;
- (double)contentHeight;
- (double)tableWidth;
- (id)liveTask;
- (id)cornerShapeWithSize:(struct CGSize { double x0; double x1; })a0 byRoundingCorners:(unsigned long long)a1;
- (id)getAvailableReverbItems;
- (id)getSelectedReverbItem;
- (void)onVoiceEarMonitorEnableChanged:(BOOL)a0 taskId:(id)a1;
- (void)onVoiceEarMonitorUsableChanged:(BOOL)a0 taskId:(id)a1;
- (void)onClearForExitLiveWithLiveTask:(id)a0;
- (BOOL)mmTableView:(id)a0 shouldBeginRecognizeGesture:(id)a1;
- (void)onLiveTask:(id)a0 audioRoomSceneChangedTo:(unsigned long long)a1;
- (void)reportForPanelExpose;
- (void)reportForPanelDismiss;
- (void).cxx_destruct;

@end
