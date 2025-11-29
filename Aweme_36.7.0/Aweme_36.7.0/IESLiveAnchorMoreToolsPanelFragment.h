@class HTSLiveExpandToolbarItem, NSArray, NSString, HTSLiveItemDotInfo, NSMutableArray;

@interface IESLiveAnchorMoreToolsPanelFragment : IESLiveRoomComponent <IESLiveAnchorMoreToolsPanelInterface, IESLiveToolbarComponentHandler, IESLiveGuideDotBubbleHandler>

@property (retain, nonatomic) HTSLiveItemDotInfo *mainDot;
@property (retain, nonatomic) NSArray *subDots;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *groupItem;
@property (retain, nonatomic) NSMutableArray *ignoreInterceptGroupItemIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)ignoreInterceptForGroupItemWithItemIdentifier:(id)a0;
- (void)showGroupItem:(BOOL)a0;
- (void)showRoomIntroductionView;
- (void)showMorePanelView;
- (void)insertMoreToolbarItem;
- (BOOL)shouldShowRedDot:(id)a0 subRedDots:(id)a1;
- (void)redDotDidShowed:(id)a0 isClick:(BOOL)a1;
- (void)setupGroupItem:(id)a0;
- (BOOL)interceptToolBarItemEventWhenPaused;
- (void)showVRLiveSwitchBubbleView;
- (void)showSubPanelWithItems:(id)a0;
- (id)filterItemsByWhiteList:(id)a0;
- (id)handleSectionTitleArrayWithItems:(id)a0 sections:(id)a1;
- (void)changeRedDotState:(id)a0;
- (void)trackGuideShowWithContent:(id)a0;
- (id)convertIdentifierToRedDotKey:(id)a0;
- (void)receiveItemDotInfo:(id)a0 subRedDots:(id)a1;
- (void)receiveItemBubbleInfo:(id)a0;
- (void).cxx_destruct;

@end
