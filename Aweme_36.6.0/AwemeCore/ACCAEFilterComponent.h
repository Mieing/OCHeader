@class ACCAEVideoThumbTransitionAnimator, UILabel, NSMutableDictionary, NSString, ACCAEVideoThumbPreviewView, DVETrackPanelContext, UIViewController;
@protocol DVEPlayerServiceProtocol, AWETabFilterViewControllerProtocol, ACCFullScreenPanelViewProtocol, DVENLEEditorProtocol, ACCAdvanceEditViewModelProtocol, AEKVideoEditor, ACCEditVideoFilterApplyServiceProtocol, AEKUpgradeFilterEditor, ACCAEAdjustServiceProtocol, DVETrackEventProtocol, ACCAEViewContainerProtocol, DVEEditingRuntimeProtocol;

@interface ACCAEFilterComponent : ACCAdvanceEditComponent <AWERecordFilterVCDelegate, ACCAdvanceEditDataRepositorySubscriber, ACCAEAdjustServiceSubscriber>

@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewControllerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCEditVideoFilterApplyServiceProtocol> filterApplyService;
@property (weak, nonatomic) id<DVENLEEditorProtocol> nleEditor;
@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (weak, nonatomic) id<AEKUpgradeFilterEditor> filterEditor;
@property (weak, nonatomic) id<AEKVideoEditor> videoEditor;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<ACCAEAdjustServiceProtocol> adjustService;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;
@property (retain, nonatomic) UIViewController<AWETabFilterViewControllerProtocol, ACCFullScreenPanelViewProtocol> *filterController;
@property (retain, nonatomic) ACCAEVideoThumbPreviewView *videoPreviewView;
@property (retain, nonatomic) ACCAEVideoThumbTransitionAnimator *previewViewAnimator;
@property (nonatomic) BOOL didChangeFilter;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) NSMutableDictionary *validCoverFrameTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (float)filterIndensity:(id)a0;
- (id)currentFilterHelper;
- (void)showFilterPanel;
- (id)filterManager;
- (void)componentDidMount;
- (void)applyFilter:(id)a0;
- (void)bindServices:(id)a0;
- (void)componentFirstFrameDidRender;
- (void)mainVideoClipChanged;
- (id)currentVideoClipMaterial;
- (void)compareBtnTouchDown;
- (void)compareBtnTouchUp;
- (id)firstFilterOnCurrentVideoClip;
- (void)adjustDidChanged;
- (void)filterPanelTopSelectTabDidChanged;
- (void)menuActionFilter:(id)a0;
- (void)setupVideoPreview;
- (void)preloadFilterPanelIfNeeded;
- (void)filterPanelWillDismiss;
- (BOOL)shouldDone;
- (id)getDoneInfoActionName;
- (void)trackSaveFilter;
- (void)applyFilter:(id)a0 to:(id)a1 indensity:(float)a2;
- (void)onSliderIndensityChangedForFilter:(id)a0 indensity:(float)a1;
- (BOOL)enableFilterIndensity;
- (void)didSelectFilterCategory:(id)a0;
- (void)filterViewControllerCancelSelection:(id)a0;
- (void)filterViewControllerConfirmSelection:(id)a0;
- (void)filterViewControllerBottomActionTriggered:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })filterIndensityOptimizedPosition;
- (id)filterIndensitySuperView;
- (void)filterListDidDownload;
- (void).cxx_destruct;

@end
