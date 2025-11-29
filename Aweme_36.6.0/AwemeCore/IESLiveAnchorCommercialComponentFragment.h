@class IESLiveAnchorCommercialComponentApi, HTSLiveToolbarItem, NSString, UIView, UIViewController;
@protocol IESLiveInternalRouter, IESLiveBubbleGuide, IESHYControllerProtocol;

@interface IESLiveAnchorCommercialComponentFragment : IESLiveRoomComponent <IESLiveAnchorCommercialComponentRouter, IESHYControllerDelegate, HTSLiveToolbarActions, HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler>

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESLiveAnchorCommercialComponentApi *commercialApi;
@property (retain, nonatomic) HTSLiveToolbarItem *entranceToolbarItem;
@property (nonatomic) BOOL shouldShowEntrance;
@property (nonatomic) BOOL didComponentFragmentMount;
@property (nonatomic) BOOL shouldShowEntranceOnToolBar;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) UIViewController<IESHYControllerProtocol> *webVC;
@property (nonatomic) long long componentType;
@property (nonatomic) BOOL shouldShowBubble;
@property (nonatomic) BOOL shouldShowEntranceForMessage;
@property (nonatomic) BOOL showPanelFlag;
@property (nonatomic) BOOL liveToolbarServerCtrl;
@property (retain, nonatomic) HTSLiveToolbarItem *serverCtrlInitItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)showBubbleIfNeeded;
- (void)switchEntranceOnToolbar;
- (BOOL)isInMoreGroup;
- (BOOL)isCommercialInToolBar;
- (void)showComponentItem:(BOOL)a0;
- (void)moveComponentItemToGroup:(BOOL)a0;
- (void)panelDidDismissForScene:(long long)a0;
- (void)handleComponentOperationWithParams:(id)a0;
- (BOOL)hasComponentEntrance;
- (BOOL)didSelectComponent;
- (id)prefixForCacheKey;
- (void)checkCommercialComponentEntranceAuth;
- (void)showEntranceIfNeeded;
- (id)kYellowDotDidShow;
- (void)openComponentListView;
- (id)commercialComponentsListViewURL;
- (id)kBubbleDidShow;
- (void)dismissPanelWebViewfIfNeeded;
- (void)checkToShowAlertWithScene:(long long)a0 completionBlock:(id /* block */)a1;
- (void)removeSelectedComponentWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (void)messageReceived:(id)a0;

@end
