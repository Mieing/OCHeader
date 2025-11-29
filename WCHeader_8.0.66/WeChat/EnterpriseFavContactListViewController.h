@class NSString, CContact, NSArray, UIView, MMTableView;

@interface EnterpriseFavContactListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IEnterpriseContactMgrExt> {
    CContact *_chatBrandContact;
    NSArray *_aryFav;
    MMTableView *_tableView;
    UIView *_emptyView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubChatContact:(id)a0;
- (void)initData;
- (void)initView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)reloadAll;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)JumpToChatRoom:(id)a0;
- (void)onBatchModifyEnterpriseContact:(id)a0;
- (void).cxx_destruct;

@end
