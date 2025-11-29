@class NSString, NSMutableDictionary, HTSLiveInteractiveAPIV2, IESLiveScreencastLinkerSearchPanel, UILabel, NSMutableArray, UITableView;
@protocol IESLiveScrollRefreshService;

@interface IESLiveScreencastLinkAnchorRootPanel : IESLiveGameInteractPopupViewController <UITableViewDataSource, UITableViewDelegate, IESLiveScreencastLinkAnchorParticipationInfo>

@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *rivalExtraInfoMap;
@property (retain, nonatomic) NSMutableDictionary *participationItemMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) id<IESLiveScrollRefreshService> scrollRefreshService;
@property (weak, nonatomic) IESLiveScreencastLinkerSearchPanel *searchPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onSetupNavBar:(id)a0;
- (void)p_emptyAuxiliaryData;
- (void)p_resolveRivalExtraInfo:(id)a0;
- (id)p_buildList:(id)a0 requestID:(id)a1 listType:(unsigned long long)a2;
- (id)p_buildFollowListWithValidRooms:(id)a0 invalidRooms:(id)a1 requestID:(id)a2;
- (void)p_setupItem:(id)a0 forAnchorID:(id)a1 inContainer:(id)a2;
- (void)p_setupItemState:(long long)a0 forAnchorID:(id)a1 inContainer:(id)a2;
- (id)p_makeNormalCellItemWithRoomModel:(id)a0 listType:(unsigned long long)a1 requestID:(id)a2;
- (void)cancelInviteUser:(id)a0;
- (id)p_makeSectionHeaderViewWithTitle:(id)a0;
- (void)showSettingPanelView;
- (void)screencastLinkExpandNavBar:(id)a0;
- (void)fetchParticipationList;
- (void)showSearchPanelView;
- (id)listUserWithItem:(id)a0;
- (void)reportInviteConnectionTrakerWithItem:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)clean;

@end
