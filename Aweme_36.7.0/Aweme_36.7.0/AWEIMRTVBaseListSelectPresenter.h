@class AWEIMRTVListSelectBaseViewController, NSArray, NSString, AWEIMRTVSelectSectionModelFactory;

@interface AWEIMRTVBaseListSelectPresenter : NSObject <AWEIMRTVListSelectBaseViewControllerDelegate, AWEIMRTVListSelectProtocol>

@property (copy, nonatomic) id /* block */ selectSecUIDsCallback;
@property (readonly, nonatomic) BOOL isDefaultSelectedUserCanOperate;
@property (retain, nonatomic) NSArray *defaultSelectedSecUIDs;
@property (retain, nonatomic) AWEIMRTVListSelectBaseViewController *listSelectViewController;
@property (readonly, nonatomic) AWEIMRTVSelectSectionModelFactory *sectionModelFactory;
@property (readonly, nonatomic) BOOL isAutoSelectOnlineUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listSelectBaseViewController:(id)a0 didClickRightNavigationButtonWithSelectedUsersID:(id)a1;
- (void)listSelectBaseViewController:(id)a0 didClickLeftNavigationButtonWithSelectedUsersID:(id)a1;
- (BOOL)listSelectBaseViewController:(id)a0 canSelectWithCellModel:(id)a1;
- (void)__invokeCallbackWithSelectedSecUIDs:(id)a0;
- (void)__dismissAndCallbackWithSelectedSecUIDs:(id)a0;
- (void)__dismissViewControllerComplete:(id /* block */)a0;
- (id)__viewControllerPresentedOn;
- (void)selectUserWithConfiguration:(id)a0 callback:(id /* block */)a1;
- (void)selectFriendWithConfiguration:(id)a0 callback:(id /* block */)a1;
- (id)secUIDsWithUserIMIDs:(id)a0;
- (id)userIMIDsWithSecUIDs:(id)a0;
- (void)refreshInviteButton:(id)a0 withSelectedCount:(long long)a1;
- (void)updateAutoSelectOnlineUser:(BOOL)a0;
- (id)__getUserWithSecUID:(id)a0;
- (void)__presentSelectVC;
- (id)__listSelectModelWithDefaultSelectedSecIDs:(id)a0 preferredSelectSecUIDs:(id)a1;
- (id)__listSelectViewControllerModelWIthConversationID:(id)a0 defaultSelectedSecUIDs:(id)a1 isDefaultSelectedUserCanOperate:(BOOL)a2 willShowOnLineSection:(BOOL)a3 willShowIndexIndicator:(BOOL)a4 activeUserMapper:(id)a5 preferSelectedSecUIDs:(id)a6;
- (void)selectUserWithConversationID:(id)a0 rtvType:(long long)a1 callback:(id /* block */)a2;
- (void)selectUserWithConversationID:(id)a0 defaultSelectedUserIMIDs:(id)a1 rtvType:(long long)a2 callback:(id /* block */)a3;
- (void)selectFriendWithRoomID:(id)a0 defaultSelectedIMIDs:(id)a1 autoSelectOnlineUser:(BOOL)a2 callback:(id /* block */)a3;
- (void)selectFriendWithRoomID:(id)a0 defaultSelectedIMIDs:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
