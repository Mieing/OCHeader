@class AWEProfilePostAnalysisViewController, NSString, AWEAwemeModel, DUXContentSheet;

@interface AWEProfilePostAnalysisController : AWEPlayInteractionNewBaseController <DUXSheetDelegate, AWEPlayInteractionPanelControllerProtocol, AWEProfilePostAnalysisControllerProtocol>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEProfilePostAnalysisViewController *containerVC;
@property (retain, nonatomic) AWEAwemeModel *lastModel;
@property (nonatomic) BOOL lastPrivateStatus;
@property (nonatomic) BOOL isShowingPanel;
@property (nonatomic) BOOL isOnlyPostDiagnoseTab;
@property (nonatomic) BOOL lynxContentReady;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)panelHeight;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (BOOL)isPanelShowed;
- (id)toolBarModel;
- (long long)diagnoseStyle;
- (id)generateSchemaParamsWhenOpenPanel;
- (BOOL)schedulePostNeedAdjustPanelHeight;
- (BOOL)needResetProfilePostAnalysisController;
- (void)showAnalysisPanelWithModel:(id)a0;
- (void)checkContentReady;
- (void)showAnalysisPanelWithNotification:(id)a0;
- (void)closeChapterPanelLynxView:(id)a0;
- (id)createSheetWith:(id)a0;
- (BOOL)shouldShowShrinkVideoWithAwemeModel:(id)a0;
- (void)switchPlayInteractionPureMode:(BOOL)a0;
- (BOOL)needBlockCloseSheet;
- (BOOL)needRefreshLynxView;
- (id)createPostAnalysisVC;
- (id)viewerItemModel;
- (id)analysisItemModel;
- (void)replaceWithModel:(id)a0;
- (BOOL)isShownPostAnalysisPanel;
- (id)panelManager;
- (void).cxx_destruct;
- (long long)videoHeight;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
