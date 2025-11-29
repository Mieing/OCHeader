@class NSString, NSDictionary, DUXContentSheet, UIView, AWEPlayInteractionDanmakuStylesInfo, AWEDanmakuSettingsPanelConfig;
@protocol AWEDanmakuSettingsPanelDelegate, AWEDanmakuSettingsPanelViewProtocol;

@interface AWEDanmakuSettingsPanelViewController : UIViewController <DUXSheetDelegate, AWEPadUIAdaptionViewTransitionObserver, AWEDanmakuSettingsPanelViewControllerProtocol>

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView<AWEDanmakuSettingsPanelViewProtocol> *settingsView;
@property (nonatomic) unsigned long long danmakuScene;
@property (nonatomic) BOOL needShowDanmakuSwitch;
@property (nonatomic) BOOL supportDanmakuMask;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *danmakuInfo;
@property (retain, nonatomic) AWEDanmakuSettingsPanelConfig *settingConfig;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<AWEDanmakuSettingsPanelDelegate> delegate;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)showSettingsPanelInVerticalScreen:(BOOL)a0 showMaskSwitch:(BOOL)a1 supportShowMask:(BOOL)a2 config:(id)a3 delegate:(id)a4;

- (void)sheetDidDismiss:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)updateDanmakuCount:(id)a0;
- (double)safeAreaOffset;
- (id)initWithDanmakuScene:(unsigned long long)a0 showMaskSwitch:(BOOL)a1 supportShowMask:(BOOL)a2 shouldShowDanmakuManager:(BOOL)a3 delegate:(id)a4;
- (void)updateDanmakuViewWithSupportMask:(BOOL)a0;
- (void)highlightCloseDanmakuCell;
- (id)initWithDanmakuScene:(unsigned long long)a0 showMaskSwitch:(BOOL)a1 supportShowMask:(BOOL)a2 config:(id)a3 delegate:(id)a4;
- (void)highlightSettingPanelViewLastCellIfNeed;
- (void)trackCloseSettingsPanelIfNeeded;
- (BOOL)useNewStyleSettingsPanel;
- (void)showSettingsPanelInLandscapeScreen;
- (void)scrollToBottomAndHighlightCloseDanmakuCell;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
