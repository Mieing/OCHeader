@class NSString, NSArray, MMTableView;
@protocol WCCardDataSource;

@interface WCCardUsedStoresViewController : MMUIViewController <ViewLocationDelegate, FavForwardLogicDelegate, UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, WCCardUsedStoreViewDelegate> {
    id<WCCardDataSource> _cardDataSource;
    NSArray *_tableDatas;
    MMTableView *_tableView;
}

@property (nonatomic) unsigned long long appBrandModeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCardDataSource:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)makeStoreCell:(id)a0 storeInfo:(id)a1;
- (void)onRetrieveLocation:(int)a0;
- (void)onRetrieveLocationConfirm;
- (void)onGetUsedStoreList:(id)a0 ErrCode:(int)a1;
- (void)onSendLocationToFriendWithViewController:(id)a0;
- (id)getFavForawrdViewController;
- (void)onNavigation:(id)a0;
- (void)openAppBranWithUserName:(id)a0 brandPass:(id)a1;
- (void).cxx_destruct;

@end
