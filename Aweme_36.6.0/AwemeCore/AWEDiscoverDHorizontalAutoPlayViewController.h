@class AWEDiscoverDHorizontalCollectionViewCell, NSString, NSDictionary, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, AWEDiscoverDHorizontalScrollTailView;
@protocol AWEDiscoverDHorizontalAutoPlayViewControllerDelegate;

@interface AWEDiscoverDHorizontalAutoPlayViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEDiscoverDHorizontalScrollTailView *footerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastOffset;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } discoverDHorizontalAutoPlayActiveRegion;
@property (retain, nonatomic) AWEDiscoverDHorizontalCollectionViewCell *activeCell;
@property (nonatomic, getter=isFirstBecomeActive) BOOL firstBecomeActive;
@property (weak, nonatomic) id<AWEDiscoverDHorizontalAutoPlayViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldActive;
@property (copy, nonatomic) id /* block */ didScrollToViewMore;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ trackAwemePlayTime;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) NSMutableArray *videoArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isValidIndexPath:(id)a0;
- (void)enterDetailPage:(id)a0 logExtra:(id)a1 model:(id)a2;
- (double)stepSpace;
- (void)updateWithVideoArray:(id)a0;
- (id)p_getAwemeModelAtIndex:(long long)a0;
- (void)enterDetailPageWithIndex:(long long)a0 productID:(id)a1;
- (void)playCellController:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)didBecomeActive;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })_itemSize;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollToIndexPath:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)_itemSpacing;
- (double)_rightMargin;
- (void)setNeedsCalculateLayout;
- (double)_leftMargin;
- (void)autoPlay;

@end
