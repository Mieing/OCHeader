@class MMLiveStatCompositeLabel, NSString, MMLiveOnlineUserListView, UIView, LiveInfo, MMUILabel;

@interface MMGroupLiveStatViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMLiveContactTableViewCellDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMLiveOnlineUserListView *listView;
@property (retain, nonatomic) MMLiveStatCompositeLabel *totalOnlineUsersLabel;
@property (retain, nonatomic) MMLiveStatCompositeLabel *totalUsersLabel;
@property (retain, nonatomic) MMUILabel *statusLabel;
@property (retain, nonatomic) LiveInfo *liveInfo;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long onlineUserCount;
@property (nonatomic) unsigned long long totalUserCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveInfo:(id)a0 roomId:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;
- (void)layoutHeaderView;
- (void)onBackButtonClicked:(id)a0;
- (void)setupData;
- (void)onGetLiveInfoWithResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2 andLiveInfo:(id)a3;
- (void)onGetLiveOnlineUserStateListWithLiveId:(unsigned long long)a0 andRoomId:(id)a1 andUserStateList:(id)a2;
- (void)onHeadImageClicked:(id)a0;
- (void).cxx_destruct;

@end
