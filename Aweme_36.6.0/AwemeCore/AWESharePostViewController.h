@class NSString, AWEFeedRefreshFooter, UICollectionView, UIView, AWEUserModel, NSObject;
@protocol AWEShareSelectDelegate, AWEUserPostsDataManagerProtocol;

@interface AWESharePostViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol, AWESharePostViewControllerProtocol>

@property (retain, nonatomic) AWEUserModel *currUser;
@property (retain, nonatomic) NSObject<AWEUserPostsDataManagerProtocol> *dataManager;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (nonatomic) BOOL multipleSelectEnable;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEShareSelectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)aAWEPadModuleAdapter;
- (id)dux_titleForColoseButton;
- (void)p_loadMoreData;
- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (void)p_addLoadingView;
- (void)p_removeLoadingView;
- (void)p_addNetworkErrorView;
- (void)p_addEmptyDataView;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
