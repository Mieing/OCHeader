@class UIView, IESLiveComponentContext, NSString, IESLiveXPlayMorePanelItemStatus, IESLivePopupItem, IESLiveOpenPlatformSonicPortraitMorePanelView, IESLiveAnchorAudienceInteractiveGameModel;
@protocol IESHYControllerProtocol;

@interface IESLiveXPlayMorePanelController : NSObject <IESLiveOpenPlatformSonicMorePanelViewDelegate>

@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveOpenPlatformSonicPortraitMorePanelView *portraitMorePanelView;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isFloatingViewShow;
@property (nonatomic) BOOL isClearScreenOn;
@property (retain, nonatomic) IESLiveXPlayMorePanelItemStatus *itemStatus;
@property (weak, nonatomic) id<IESHYControllerProtocol> lynxInfoController;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (id)getTrackCommonParams;
- (void)showMorePanel;
- (void)didClickItem:(id)a0;
- (void)showMorePanelWithQuery:(id)a0;
- (void)updateClearScreenState:(BOOL)a0;
- (BOOL)canHandleMethod:(id)a0;
- (id)handleMethod:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)handleMethodClickSwitch;
- (id)handleMethodClickExit;
- (id)handleMethodOpenLynxDetailPage:(id)a0;
- (id)handleMethodGetPanelSettingStatus;
- (id)handleMethodOperateCamera:(id)a0;
- (id)buildOperateSettingData:(BOOL)a0 currentStatus:(BOOL)a1;
- (void)didClickExitFunction;
- (void)didClickClearScreen;
- (void)didClickOpenGameDetail;
- (id)initWithGameModel:(id)a0 containerView:(id)a1 DIContext:(id)a2 componentContext:(id)a3;
- (void)updateCameraConfig:(BOOL)a0;
- (void)configShouldShowFloatingView:(BOOL)a0;
- (void)buildItemStatus;
- (BOOL)shouldUseNewMorePanel;
- (void)showLynxMorePanel:(id)a0;
- (void)showGroupLiveGamePanel;
- (id)buildAnchorModelFromGameModel:(id)a0;
- (id)detailLynxSchema;
- (id)morePanelMethods;
- (id)handleMethodOperateSettings:(id)a0;
- (void)hideMorePanel;
- (void)openIntroductionPanel:(id)a0;
- (id)handleMethodOperateFloatWindowStatus:(id)a0;
- (void)trackItemClickWithTitle:(id)a0;
- (void)handleShowAuthActionWithCompletion;
- (void)handleKeyBoardClick;
- (void)handleKeyCameraClick:(id)a0;
- (void)handleFloatingViewClick:(id)a0;
- (void)reloadMorePanel;
- (double)gameRuleDetailHeight:(id)a0;
- (void)resetMorePanel;
- (void)trackMorePanelShow;
- (void)trackerMorePanelClick:(id)a0;
- (void)trackerExitClick;
- (void).cxx_destruct;

@end
