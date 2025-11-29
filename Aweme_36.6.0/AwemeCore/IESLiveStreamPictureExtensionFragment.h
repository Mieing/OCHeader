@class NSString;

@interface IESLiveStreamPictureExtensionFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleCommentAction, IESLiveInteractAction, IESLiveGiftListActions, HTSLiveToolbarActions, IESECLiveProductRankShowPanelAction, IESLiveECommercePanelAnimationService, IESLivePopupAction, IESLiveStreamAbnormalActionDispatcher, IESLiveGameCPAudienceDetailAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)willDismissGiftListWithDuration:(double)a0 animated:(BOOL)a1;
- (void)willShowGiftListWithDuration:(double)a0 giftListHeight:(double)a1;
- (void)commentDidStartWithCommentPanelViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)onExpandGroupShowWithDuration:(double)a0 toolBarHeight:(double)a1;
- (void)hideToolBarWithDuration:(double)a0;
- (void)willShowPanelWithDuration:(double)a0 height:(double)a1 scene:(id)a2 panelHash:(long long)a3;
- (void)willDismissPanelWithDuration:(double)a0 animated:(BOOL)a1 scene:(id)a2 panelHash:(long long)a3;
- (void)willOpenGameAudienceDetail:(id)a0 contentView:(id)a1;
- (void)willCloseGameAudienceDetail:(id)a0;
- (void)gameAudienceDetailWillDisappear:(id)a0;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)onPanelTranslateWithType:(long long)a0 panelScene:(id)a1 containerView:(id)a2 routerParams:(id)a3 showHeight:(double)a4 duration:(double)a5;
- (void)showPopupViewInAnimation:(long long)a0 containerView:(id)a1 duration:(double)a2 panelScene:(id)a3;
- (void)dismissPopupViewInAnimation:(long long)a0 containerView:(id)a1 duration:(double)a2 panelScene:(id)a3;
- (void)onChangeAbnormalViewShow:(BOOL)a0;
- (BOOL)liveGameOpenPanelContentAdapterEnable;
- (void)keyboardWillHide;

@end
