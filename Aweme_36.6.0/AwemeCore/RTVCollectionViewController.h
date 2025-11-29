@class RTVCollectionViewControllerContext, UICollectionViewLayout, RTVCollectionViewControllerDataProvider, NSString, RTVCollectionView, RxCollectionViewDiffableDataSource;
@protocol RxInjector, RTVXRControllerInjector;

@interface RTVCollectionViewController : UIViewController <RTVCollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) RTVCollectionViewControllerDataProvider *dataProvider;
@property (retain, nonatomic) RTVCollectionViewControllerContext *context;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (nonatomic) BOOL shouldAutomaticallyScrollToBottom;
@property (readonly, nonatomic) RTVCollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__createCollectionView;
- (void)collectionView:(id)a0 didChangeContentSize:(struct CGSize { double x0; double x1; })a1 newSize:(struct CGSize { double x0; double x1; })a2;
- (void)__resetScrollToBottomFlags;
- (void)__scrollToBottomIfNeeded;
- (id)__supplementaryViewIdentifierWithCollectionView:(id)a0 elementKind:(id)a1 indexPath:(id)a2;
- (void)__configCollecionView;
- (void)__layoutCollectionView;
- (BOOL)__isScrollViewAtBottom:(id)a0;
- (BOOL)__scrollViewCanScroll:(id)a0;
- (void)forceScrollToBottomIfContentSizeGreaterThanBounds;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)__collectionViewLayout;

@end
