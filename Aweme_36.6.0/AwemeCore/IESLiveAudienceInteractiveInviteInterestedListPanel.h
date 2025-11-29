@class UIButton, NSMutableArray, HTSEventContext, NSString, UILabel, IESLiveAudienceInteractiveListView, UIView;
@protocol IESLiveInteractiveInviteService, IESLiveCompoundSubscription, IESLiveAudienceInteractiveInviteInterestedListPanelDataSource, IESLiveRoomService;

@interface IESLiveAudienceInteractiveInviteInterestedListPanel : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLiveAudienceInteractiveListView *listView;
@property (retain, nonatomic) UIButton *soltButton;
@property (retain, nonatomic) NSMutableArray *listSectionData;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendService;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL hasPanelShowTracked;
@property (nonatomic) BOOL hasInviteUserButtonShowTracked;
@property (weak, nonatomic) id<IESLiveAudienceInteractiveInviteInterestedListPanelDataSource> dataSource;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long position;
@property (copy, nonatomic) id /* block */ soltChangeBlock;
@property (nonatomic) BOOL isTask;
@property (retain, nonatomic) NSString *activityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)bindDataProvider;
- (void)requestActivityForSite:(unsigned long long)a0;
- (BOOL)p_isHasBeenInvite:(id)a0;
- (BOOL)enableInviteEntranceOpt;
- (void)soltChangeAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 room:(id)a2 eventContext:(id)a3;
- (void)setSlotChangeTitle:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)layoutUI;

@end
