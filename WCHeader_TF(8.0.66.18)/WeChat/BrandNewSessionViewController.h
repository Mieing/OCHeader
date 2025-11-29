@class NSString, NSMutableSet, BrandSessionTableFooter;

@interface BrandNewSessionViewController : BrandSessionViewController <WCActionSheetDelegate, BrandPaySubcribeMgrExt>

@property (retain, nonatomic) BrandSessionTableFooter *tableFooter;
@property (retain, nonatomic) NSMutableSet *clickSet;
@property (nonatomic) BOOL canShowPersonalCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initNavigationBar;
- (void)configueShowRedDotOnRightBarBtn:(BOOL)a0;
- (void)onNavBackBarButtonClicked;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)report27270:(int)a0;
- (void)showActionSheetForRightButton;
- (void)addPaySubscribeEntryToActionSheet:(id)a0;
- (void)addEntryToActionSheet:(id)a0 withMenuInfo:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)deleteSessionOnTableView:(id)a0 indexPath:(id)a1;
- (void)unsubscribeOnTableView:(id)a0 IndexPath:(id)a1;
- (void)handleBrandUnsubscribe:(id)a0;
- (void)reportUnfollowSubscribe:(id)a0 andUnread:(unsigned int)a1;
- (void)onUpdateUserPaySubcribeEntry:(BOOL)a0 entryUrl:(id)a1;
- (void)reportOnClickItem:(id)a0;
- (void).cxx_destruct;

@end
