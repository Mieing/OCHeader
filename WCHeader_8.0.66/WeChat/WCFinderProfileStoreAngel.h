@class UINavigationController, NSString, WCFinderStreamFooterView, UICollectionView, WCFinderProfileStorePageModel;

@interface WCFinderProfileStoreAngel : ZZFLEXAngel <WCFinderStreamFooterViewActionDelegate>

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) WCFinderStreamFooterView *footerView;
@property (weak, nonatomic) WCFinderProfileStorePageModel *viewModel;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (double)originY30percent;
- (void).cxx_destruct;

@end
