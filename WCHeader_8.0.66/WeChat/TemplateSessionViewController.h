@class NSString, TemplateMsgSearchHelper, CBaseContact, MMTableView;

@interface TemplateSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TemplateSessionMgrExt, TemplateMsgSearchHelperDelegate, BrandSessionMgrExt> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) TemplateMsgSearchHelper *searchHelper;
@property (retain, nonatomic) CBaseContact *templateContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)onNavBackBarButtonClicked;
- (BOOL)shouldInteractivePop;
- (void)onSettingButton:(id)a0;
- (void)initTableView;
- (void)initMsgSearchHelper;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)onTemplateSessionUpdate;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)a0 indexPath:(id)a1 arrKeyword:(id)a2;
- (void).cxx_destruct;

@end
