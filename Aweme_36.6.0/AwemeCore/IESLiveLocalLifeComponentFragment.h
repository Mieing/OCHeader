@class BDXBridgeEventSubscriber, NSString, HTSLiveToolbarItem, IESLiveLocalLifeComponentApi, UIView, IESHYURLParserHandler, UIViewController;
@protocol IESLiveBubbleGuide, IESLiveShowcaseGuideToastAction;

@interface IESLiveLocalLifeComponentFragment : IESLiveRoomComponent <IESLiveLocalLifeFragmentProtocol, HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) HTSLiveToolbarItem *localLifeToolbarItem;
@property (nonatomic) BOOL shouldShowLocalLifeOnToolBar;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL didComponentFragmentMount;
@property (retain, nonatomic) UIViewController *webVC;
@property (retain, nonatomic) IESLiveLocalLifeComponentApi *localLifeApi;
@property (retain, nonatomic) IESHYURLParserHandler *hyURLHandler;
@property (nonatomic) BOOL liveToolbarServerCtrl;
@property (nonatomic) BOOL hasClickedExplain;
@property (nonatomic) BOOL sendbubbleShowTrack;
@property (retain, nonatomic) HTSLiveToolbarItem *serverCtrlInitItem;
@property (nonatomic) BOOL hasShownGuideToast;
@property (retain, nonatomic) id<IESLiveShowcaseGuideToastAction> actionCreator;
@property (nonatomic) BOOL hasCreateRoom;
@property (nonatomic) BOOL hasProduct;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bdxSubscriber;
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
- (id)commonTrack;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)registerBDXMessageCenter;
- (void)unRegisterBDXMessageCenter;
- (id)localLifeGoodsUrl;
- (BOOL)selectLocalLife;
- (void)showPrompts:(id)a0;
- (void)switchEntranceOnToolbar;
- (BOOL)isInMoreGroup;
- (void)moveItemToGroup:(BOOL)a0;
- (void)setLiveLifeGroupExplanCard;
- (id)prefixForCacheKey;
- (void)showEntranceIfNeeded;
- (id)kYellowDotDidShow;
- (void)openComponentListView;
- (void)groupbuyIconClickTrack;
- (void)openGroupBuyWithItem:(id)a0;
- (void)groupbuyIconShowTrack;
- (void)showShowcaseGuideToastIfNeeded;
- (void)_moveItemToGroup:(BOOL)a0;
- (void)guideBubbleClickTrack;
- (void)guideBubbleShowTrack;
- (id)todayTimeKey;
- (void)showPrompts;
- (void)trackShowcaseGuideToastShow;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
