@class UIButton, ACCVideoEditContextSnap;
@protocol AWEPostPageNavigationBarService;

@interface AWEPostPageNavigationBarElement : AWEPostPageElement

@property (retain, nonatomic) UIButton *draftBackButton;
@property (retain, nonatomic) UIButton *switchInputButton;
@property (retain, nonatomic) id<AWEPostPageNavigationBarService> navigationBarService;
@property (nonatomic) BOOL hasSnapContext;
@property (retain, nonatomic) ACCVideoEditContextSnap *firstEditSnap;
@property (retain, nonatomic) ACCVideoEditContextSnap *lastEditSnap;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)aAWEStudioPublishAwemeAdapter;
- (void)p_backButtonClicked:(id)a0;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (id)aACCMidVideoCreationProtocol;
- (id)p_commonTrackParams;
- (id)slidesService;
- (BOOL)isContextEdited;
- (void)addAccessibilityElements;
- (void)configNavigationBarWithEditing:(BOOL)a0;
- (void)p_configNaviBar;
- (void)configSaveEditContextSnapBlockIfNeed;
- (void)p_configNaviBarInEditing;
- (void)p_configNaviBarNormal;
- (void)p_configTitle;
- (void)p_configLeftBackButton;
- (void)p_addJXRightPreviewButton:(BOOL)a0;
- (BOOL)p_shouldShowRightPreviewButton;
- (void)p_configRightPreviewButton;
- (void)p_configRightDraftCancelButton;
- (void)p_configRightEmptyButton;
- (void)p_hiddenTitleAndBottomLine;
- (void)p_configLeftCancelButton;
- (void)p_configLeftEmptyButton;
- (void)p_configRightCancelButton;
- (void)p_configRightPublishButton;
- (BOOL)p_isNoCompileResourceIdsForSharePost;
- (BOOL)navigationBarUIOptimize;
- (void)showExitPostPageAlert:(id)a0;
- (id)navigationBarButtonFont;
- (void)p_cancelButtonClicked:(id)a0;
- (void)p_previewButtonClicked:(id)a0;
- (void)p_draftCancelButtonClicked:(id)a0;
- (void)p_jxpreviewButtonClicked;
- (void)p_switchInputClicked:(id)a0;
- (void)p_finishButtonClicked:(id)a0;
- (void)p_publishFriendDailyClicked:(id)a0;
- (void)p_publishClicked:(id)a0;
- (void)cancelRenderingSticker;
- (BOOL)showReeditBackAlertIfNeed;
- (void)executeClickBackProcess;
- (void)closePostPage;
- (void)dismissPostPage;
- (void)dismissAndRestoreCanvasSize;
- (void)goBackToEdit;
- (void)p_cancelSaveLocalIfNeeded;
- (void)p_configLeftSwitchInputButton;
- (void)p_configRightFinishButton;
- (void)p_draftClicked:(id)a0;
- (void).cxx_destruct;
- (void)cancelAction;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (id)player;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)audio;
- (id)flow;

@end
