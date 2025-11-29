@class NSString, IESLiveGuideHorizontalPanelView;

@interface IESLiveGuideHorizontalFragment : IESLiveGuideComponent <IESLiveGuideHorizontalPanelViewDelegate, IESLiveGuideToolBarAction, IESLiveGuideHorizontalService>

@property (retain, nonatomic) IESLiveGuideHorizontalPanelView *panelView;
@property (nonatomic) unsigned long long currentRatio;
@property (nonatomic) unsigned long long lastSelectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)toolbarItemReloadFinished;
- (unsigned long long)getCurrentLiveRatio;
- (BOOL)isHorizontalLiveRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCameraViewRect;
- (void)setupHorizontalRecoderPreset;
- (void)setupHorizontalLiveCoreConfig;
- (id)getCurrentRatioStr;
- (void)showHorizontalBroadcastGuideSettingPanel;
- (BOOL)isSupportLiveType;
- (void)resetOriginalConfig;
- (void)updateCurrentRatio:(unsigned long long)a0;
- (void)showHorizontalBrocastBubbleView;
- (void)reloadSubOrientationRatioView;
- (void)trackHorizontalPanelSubmit;
- (void)trackHorizontalPanelViewShow;
- (id)getLiveRatioString:(unsigned long long)a0;
- (void)setupOriginalRecorderPreset;
- (void)setupOriginalLiveCoreConfig;
- (void)onRatioUpdateWith:(unsigned long long)a0;
- (void)updateRightActionTextWithRatio:(unsigned long long)a0;
- (void)didSelectLiveRatio:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)topOffset;
- (id)cameraContainerView;

@end
