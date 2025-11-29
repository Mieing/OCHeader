@class NSString;
@protocol MyFavoritesListViewControllerDelegate;

@interface MyFavoritesListViewController : FavBaseListViewController <FavForwardLogicDelegate>

@property (weak, nonatomic) id<MyFavoritesListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initNavigationBar;
- (void)OnCancelModalView:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldInteractiveDismiss;
- (void)onSelectRowAtIndexPath:(id)a0;
- (void)forwardData:(id)a0;
- (id)getFavForawrdViewController;
- (void)OnForwardDone;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 updateCell:(id)a1 atIndexPath:(id)a2;
- (void)onSquareImgClicked:(id)a0 withInfo:(id)a1 withOffset:(unsigned int)a2;
- (void)onSelectFavItem:(id)a0 tableView:(id)a1 atIndexPath:(id)a2 fromScene:(unsigned int)a3 favIndex:(unsigned int)a4 searchText:(id)a5 withCell:(id)a6;
- (void)onSelectFavDataItem:(id)a0 tableView:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;

@end
