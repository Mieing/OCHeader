@class NSString, CContact, RoomDelMemController, NSMutableArray, MMTableView;
@protocol ChatroomMemberRemoveViewControllerDelegate;

@interface ChatroomMemberRemoveViewController : MMUIViewController <RoomDelMemControllDelegate, UITableViewDelegate, UITableViewDataSource, IGroupMgrExt, ContactsItemViewDelegate> {
    NSString *_groupName;
    NSString *_removingUserName;
    NSMutableArray *_arrRemoveMember;
    MMTableView *_tableView;
    CContact *_contact;
    RoomDelMemController *_chatRoomDelMemController;
}

@property (weak, nonatomic) id<ChatroomMemberRemoveViewControllerDelegate> vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGroup:(id)a0 arrRemoveMember:(id)a1 operatingMessage:(id)a2;
- (void)onCancel;
- (void)viewDidLoad;
- (void)reloadDataAndView;
- (void)viewDidLayoutSubviews;
- (void)doRoomHistoryCancelReport;
- (void)onStartDeletingUsr:(id)a0;
- (void)OnDelGroupMember:(id)a0 withResult:(unsigned int)a1 memberList:(id)a2 errTip:(id)a3;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onContactsItemViewRightButtonClick:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 row:(unsigned long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
