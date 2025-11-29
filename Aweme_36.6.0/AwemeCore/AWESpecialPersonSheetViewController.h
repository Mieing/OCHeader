@class AWEExceptionContainerViewController, AWESpecialPersonSearchView, UICollectionView, NSString, UILabel, AWEUIKitViewControllerEmptyPageConfig, UIViewController;

@interface AWESpecialPersonSheetViewController : UIViewController <AWEExceptionContainerViewControllerDelegate>

@property (retain, nonatomic) UICollectionView *specialPersonCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *searchEmptyPageTitleLabel;
@property (retain, nonatomic) UILabel *searchEmptyPageSubTitleLabel;
@property (retain, nonatomic) UIViewController *networkErrorVC;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (retain, nonatomic) AWEUIKitViewControllerEmptyPageConfig *errorConfig;
@property (retain, nonatomic) AWEExceptionContainerViewController *emptyVC;
@property (retain, nonatomic) AWESpecialPersonSearchView *searchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerRetryOnError;
- (void)setEmptyPage;
- (void)setURLErrorPageWithRetryBlock:(id /* block */)a0;
- (void)setSearchErrorPage;
- (void)setTitleWithString:(id)a0;
- (void)setCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
