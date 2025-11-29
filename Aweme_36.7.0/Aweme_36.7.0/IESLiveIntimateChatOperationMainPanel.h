@class NSMutableDictionary, IESLiveWaitingListUser, UILabel, UITableView, IESLivePaidQueueTabView, UIView, IESLiveIntimateChatOperationListCellItem, NSString, RACTwoTuple, HTSEventContext, IESLiveIntimateChatOperationRootPanel, NSArray, IESLiveInvitePanelNoramlApplyHeaderView;
@protocol IESLiveInteractiveInviteService, IESLiveAudienceInteractiveRootPanelDataSource, IESLiveRoomService, IESLiveIntimateChatOperationRootPanelDelegate;

@interface IESLiveIntimateChatOperationMainPanel : UIView <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IESLiveIntimateChatOperationRootPanel *parentPanel;
@property (weak, nonatomic) id<IESLiveIntimateChatOperationRootPanelDelegate> delegate;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveRootPanelDataSource> panelDataSource;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableDictionary *dataSource;
@property (retain, nonatomic) IESLiveWaitingListUser *lastApplier;
@property (retain, nonatomic) IESLiveIntimateChatOperationListCellItem *moreApplierCellItem;
@property (retain, nonatomic) UITableView *listView;
@property (retain, nonatomic) UIView *noOneApplyHeaderView;
@property (retain, nonatomic) UILabel *noOneApplyHeaderViewTitleLabel;
@property (retain, nonatomic) IESLiveInvitePanelNoramlApplyHeaderView *noramlApplyHeaderView;
@property (retain, nonatomic) RACTwoTuple *noramlInviteHeaderView;
@property (retain, nonatomic) RACTwoTuple *addPriceApplyHeaderView;
@property (retain, nonatomic) UIView *noOneApplyPaidQueueHeaderView;
@property (retain, nonatomic) UIView *paidQueueTabHeaderViewContainer;
@property (retain, nonatomic) UIView *noOneApplyPaidQueueFooterView;
@property (retain, nonatomic) UILabel *noOneApplyPaidQueueFooterTitleLabel;
@property (retain, nonatomic) IESLivePaidQueueTabView *paidQueueTabHeaderView;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteService;
@property (retain, nonatomic) NSMutableDictionary *hasReportShowArray;
@property (nonatomic) unsigned long long waitingListType;
@property (nonatomic) long long exposedAppliersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)trackPanelShow;
- (void)p_setupViews;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_setupBindings;
- (BOOL)p_isInPaidLinkmicMultiAddPrice;
- (void)p_showUserProfile:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 room:(id)a2 eventContext:(id)a3;
- (void)updateWaitingListType:(unsigned long long)a0;
- (void)p_updateDataAfterListChanged;
- (void)p_resetSectionsDependsOnApplyList:(id)a0 inviteList:(id)a1;
- (BOOL)p_isPaidLinkmicAddPrice;
- (id)p_mapListUserToListCellItem:(id)a0 sectionType:(long long)a1;
- (BOOL)p_updateLoadMoreCellItem:(id)a0 withExposedUserCount:(long long)a1 userList:(id)a2;
- (void)p_updateLoadMoreItem;
- (id)p_mappedSection:(long long)a0;
- (id)p_cellItem4IndexPath:(id)a0;
- (void)noRepeatReportForItem:(id)a0 section:(long long)a1;
- (double)p_linkPaidGuidenceHeight;
- (void)refreshInviteHeaderText;
- (void)p_refreshPanelUI;
- (void)p_callOthersTogetherToApply;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
