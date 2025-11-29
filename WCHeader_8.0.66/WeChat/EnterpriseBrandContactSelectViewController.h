@class NSString, CContact, NSArray, MMScrollView, MMTableView;
@protocol EnterpriseBrandContactSelectViewControllerDelegate;

@interface EnterpriseBrandContactSelectViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, contactInfoDelegate, IEnterpriseBrandContactMgrExt> {
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    CContact *_selectedContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    unsigned int _scene;
}

@property (weak, nonatomic) id<EnterpriseBrandContactSelectViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainContact:(id)a0 scene:(unsigned int)a1;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onEnterpriseBrandContactChanged:(id)a0;
- (void)onEnterpriseBrandContactDeleted:(id)a0;
- (void)selectContact:(id)a0;
- (void)openSubBrandInfo:(id)a0;
- (void)confirmToSend;
- (void)cancelSelect:(id)a0;
- (void).cxx_destruct;

@end
