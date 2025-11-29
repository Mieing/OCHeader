@class NSString, WCFinderStreamFooterView, UICollectionViewDiffableDataSource, UICollectionView;

@interface WCFinderHistoryCollectionPage : WCFinderHistoryPageBase <UICollectionViewDelegate, WCFinderFlowLayoutDelegate, WCFinderHistoryCollectionPageModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderCollectionHistoryCellMenu>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCFinderStreamFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (id)createSnapshot;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onHistoryCellDeleteItem:(id)a0;
- (double)collectionView:(id)a0 flowLayout:(id)a1 heightForIndexPath:(id)a2 width:(double)a3;
- (double)collectionView:(id)a0 headerHeight:(long long)a1;
- (double)collectionView:(id)a0 footerHeight:(long long)a1;
- (void)collectionView:(id)a0 insets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forSection:(long long)a2;
- (BOOL)collectionView:(id)a0 flowLayout:(id)a1 pinHeader:(long long)a2;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)onHistoryCollectionPageDataChanged:(id)a0;
- (void).cxx_destruct;

@end
