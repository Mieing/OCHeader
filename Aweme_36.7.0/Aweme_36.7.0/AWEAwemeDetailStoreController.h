@class AWEECommerceShopBottomBarView;

@interface AWEAwemeDetailStoreController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEECommerceShopBottomBarView *shopBottomBarView;
@property (nonatomic) BOOL hasShowShopBottomBar;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
