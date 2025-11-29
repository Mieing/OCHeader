@class NSString, NSMutableArray, MMTableView;

@interface EnterpriseRoomContactRemoveViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IEnterpriseGroupMgrExt, EnterpriseContactItemViewDelegate> {
    NSString *_groupName;
    NSString *_removingUserName;
    NSString *_chatBrandUserName;
    NSMutableArray *_aryRemoveMember;
    MMTableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGroupName:(id)a0 aryRemoveMember:(id)a1 chatBrandUserName:(id)a2;
- (void)viewDidLoad;
- (void)reloadAll;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onEnterpriseContactItemViewRightButtonClick:(id)a0;
- (void)onUpdateEnterpriseGroupMemberList:(id)a0 errorCode:(int)a1;
- (void)onCancel;
- (void).cxx_destruct;

@end
