@class NSMutableDictionary, NSString, UILabel, NSMutableArray, MMTableView;
@protocol ShakeListDelegate;

@interface ShakeCombineListViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ShakeMgrExt> {
    id<ShakeListDelegate> m_delegate;
    unsigned int m_shakeListViewType;
    NSMutableArray *m_tableRows;
}

@property (retain, nonatomic) NSMutableDictionary *m_userHeaderImageCache;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setM_Delegate:(id)a0;
- (void)clearListData;
- (void)onClickClearHistory;
- (void)onReturn;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)OnReturn;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)viewDidLoad;
- (id)getCachedHeaderImageForUser:(id)a0 imgUrl:(id)a1;
- (void)showNoResultTips:(id)a0;
- (void)reloadTableViewData;
- (void)loadDataFromStorage;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)makeShakePeopleCell:(id)a0 Item:(id)a1 IndexPath:(id)a2;
- (id)makeShakeMusicCell:(id)a0 Item:(id)a1 IndexPath:(id)a2;
- (id)makeShakeTvCell:(id)a0 Item:(id)a1 IndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isInMyContactList:(id)a0;
- (void)onSelectedContactInfo:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
