@class NSArray, AWEIMEmojiAuthorWorklistResponseInfo, NSString, UIView, NSDictionary, UITableView;

@interface AWEIMEmojiAuthorWorkListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMEmojiStoreTableViewCellDelegate, AWEIMEmojiAuthorTableHeaderViewDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *emojiTable;
@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) NSArray *emojiPackages;
@property (retain, nonatomic) AWEIMEmojiAuthorWorklistResponseInfo *currentFetchResponse;
@property (copy, nonatomic) NSString *authorSecUid;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupNavigationBar;
- (void)emojiAuthorTableHeaderViewClickGotoHomePage:(id)a0;
- (void)__setUPUIs;
- (void)__populateData;
- (void)__addEmojiTable;
- (void)__loadMoreEmojiPackages;
- (void)__didClickBack;
- (void)__reloadUI;
- (void)__resetEmptyBackgroundTipView;
- (void)__endRefreshing;
- (void)emojiStoreCell:(id)a0 didClickAddPackage:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;

@end
