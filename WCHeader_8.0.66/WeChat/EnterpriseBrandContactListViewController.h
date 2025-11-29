@class NSString, NSArray, EnterpriseBrandContactHelper, NSMutableDictionary, MMScrollView, NSMutableArray, ForwardMessageLogicController, MMTableView, CContact;

@interface EnterpriseBrandContactListViewController : MMUIViewController <ForwardMessageLogicDelegate, EnterpriseBrandContactHelperDelegate, IEnterpriseSessionMgrExt, IEnterpriseBizTransferExt, UITableViewDataSource, UITableViewDelegate, contactInfoDelegate, IEnterpriseBrandContactMgrExt, IEnterpriseGroupMgrExt> {
    ForwardMessageLogicController *m_forwardLogic;
    NSMutableArray *_sectionKeyArray;
    NSMutableDictionary *_allContactsDic;
    CContact *_mainBrandContact;
    NSArray *_arySubBrandContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    unsigned int _fromScene;
    unsigned int _statContactCount;
    unsigned int _enterTime;
    EnterpriseBrandContactHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainContact:(id)a0 fromScene:(unsigned int)a1;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reportEnter;
- (void)reportSubBrandEnter:(id)a0 SubType:(int)a1;
- (void)reportQuit;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)getViewController;
- (void)onEnterpriseBrandContactChanged:(id)a0;
- (void)onEnterpriseBrandContactDeleted:(id)a0;
- (void)onEnterpriseBrandAttrChanged:(id)a0;
- (void)onCreateEnterpriseGroup:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void)showRightTopMenuBtn:(id)a0;
- (void)menuItemClick:(id)a0;
- (void)shareToFriend:(id)a0;
- (void)openInviteColleages;
- (id)getCurrentViewController;
- (void)openDisabledBrandList:(id)a0;
- (void)openEnterpriseChat;
- (void)openMainBrandInfo:(id)a0;
- (void)makeChatBrandCell:(id)a0 head:(id)a1 title:(id)a2;
- (void)onCleanUpEnterpriseChat:(id)a0;
- (void)onBizShareInfoResult:(int)a0 errorMsg:(id)a1 shareInfo:(id)a2 mainBrandUserName:(id)a3;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
