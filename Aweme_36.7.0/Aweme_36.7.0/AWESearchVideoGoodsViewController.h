@class NSDictionary, AWESearchPhotoSearchResultsViewController, AWEUILoadingView;

@interface AWESearchVideoGoodsViewController : UIViewController

@property (retain, nonatomic) AWESearchPhotoSearchResultsViewController *searchResultVC;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSDictionary *extra;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)searchVideoGoods;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;

@end
