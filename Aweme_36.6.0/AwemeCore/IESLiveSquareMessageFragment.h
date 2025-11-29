@class IESLivePublicScreenView, HTSLiveToolbarItem, NSString;

@interface IESLiveSquareMessageFragment : IESLiveRoomComponent <HTSLiveToolbarActions, IESLivePublicScreenLifeCircleAction, IESLivePublicScreenSquareInterface>

@property (retain, nonatomic) IESLivePublicScreenView *squareScreen;
@property (retain, nonatomic) HTSLiveToolbarItem *anchorSquarePublishToolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)userTypeForTrack;
- (void)showCommentPanel;
- (void)toolbarItemsChange;
- (BOOL)isLiveAdRoom;
- (void)publicScreenWillActiveWithInfoModel:(id)a0;
- (void)trackSquareScreenShowWithShowType:(id)a0;
- (void)handlePublicScreenMessage:(id)a0;
- (id)createChatChannelCommentPanelConfig;
- (BOOL)shouldShowSquareTab;
- (void)loadSquarePublicScreen;
- (BOOL)containEcommerceItemInToolbar;
- (void)trackSquareTabEntranceShow;
- (void)updateAnchorSquareChatToolbarItemWithInfoModel:(id)a0;
- (void).cxx_destruct;

@end
