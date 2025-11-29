@class CEnterpriseContact, NSString, CContact, MMScrollView, MMTableView;
@protocol EnterpriseSessionSelectViewControllerDelegate;

@interface EnterpriseSessionSelectViewController : MMUIViewController <MMWebViewDelegate, UITableViewDataSource, UITableViewDelegate, IEnterpriseGroupMgrExt, IEnterpriseSessionMgrExt> {
    unsigned int _scene;
    CContact *_brandContact;
    CEnterpriseContact *_selectedContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
}

@property (weak, nonatomic) id<EnterpriseSessionSelectViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatSubBrandContact:(id)a0 scene:(unsigned int)a1;
- (void)initView;
- (void)initTableView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onWebViewWillClose:(id)a0;
- (void)onEnterpriseChatSessionChanged:(id)a0;
- (void)onCreateEnterpriseGroup:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void)makeNewSessionCell:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)selectContact:(id)a0;
- (void)openCreateChat;
- (void)createSingleChat:(id)a0;
- (void)createChatroom:(id)a0;
- (void)cancelSelect:(id)a0;
- (void)confirmSelect;
- (void).cxx_destruct;

@end
