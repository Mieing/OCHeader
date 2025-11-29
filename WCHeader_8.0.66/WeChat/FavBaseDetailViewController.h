@class NSString, FavoritesItem, MMTableView;

@interface FavBaseDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, IFavoritesExt, FavTagViewDelegate> {
    MMTableView *m_tableView;
    FavoritesItem *m_favItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initNavigationBar;
- (void)initTableView;
- (void)viewDidTransitionToNewSize;
- (void)onAction:(id)a0;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)a0;
- (void)genContent:(id)a0 indexPath:(id)a1;
- (void)genHeadCell:(id)a0 indexPath:(id)a1;
- (void)genFooterContent:(id)a0 indexPath:(id)a1;
- (BOOL)canShowConvertToNoteActionSheet;
- (void)convertToNoteViewController;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onFavTagEditBegin:(int)a0;
- (void)onFavTagEditOK;
- (void).cxx_destruct;

@end
