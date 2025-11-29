@class NSArray, NSString, BrandSessionTableFooter;
@protocol IBrandEcsSessionViewControllerDelegate;

@interface BrandServiceSessionViewController : BrandSessionViewController <WCActionSheetDelegate, BrandPaySubcribeMgrExt>

@property (retain, nonatomic) BrandSessionTableFooter *tableFooter;
@property (retain, nonatomic) NSArray *arrSessionInfo;
@property (weak, nonatomic) id<IBrandEcsSessionViewControllerDelegate> delegate;
@property (nonatomic) BOOL canShowPersonalCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initNavigationBar;
- (void)onClickNavBarRightBtn;
- (void)configueShowRedDotOnRightBarBtn:(BOOL)a0;
- (void)onNavBackBarButtonClicked;
- (void)viewDidLoad;
- (void)setupSearchBar;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadData;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)reportEcsData:(int)a0 index:(int)a1 userName:(id)a2 isHaveRedDot:(BOOL)a3;
- (void)showActionSheetForRightButton;
- (void)addPaySubscribeEntryToActionSheet:(id)a0;
- (void)addEntryToActionSheet:(id)a0 withMenuInfo:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isIndexPathReported:(id)a0;
- (void)markIndexPathAsReported:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)getCellDataAtIndex:(long long)a0;
- (id)getContactAtIndex:(long long)a0;
- (void)deleteSessionOnTableView:(id)a0 indexPath:(id)a1;
- (void)unsubscribeOnTableView:(id)a0 IndexPath:(id)a1;
- (void)handleBrandUnsubscribe:(id)a0;
- (void)reportUnfollowSubscribe:(id)a0 andUnread:(unsigned int)a1;
- (void)onUpdateUserPaySubcribeEntry:(BOOL)a0 entryUrl:(id)a1;
- (void)reportOnClickItem:(id)a0;
- (void)registerExt;
- (void)unRegisterExt;
- (void)onNeedReload;
- (void)reloadData;
- (void).cxx_destruct;

@end
