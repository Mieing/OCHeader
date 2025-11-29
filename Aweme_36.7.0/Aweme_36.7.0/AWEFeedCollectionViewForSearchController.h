@interface AWEFeedCollectionViewForSearchController : AWEFeedCollectionViewController

@property (nonatomic) BOOL clickItem;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)cellCompleteVisibleWithIndex:(id)a0 animation:(BOOL *)a1;
- (BOOL)supportsShowingRecommendedVideos;
- (BOOL)shouldTraceCellBindCost;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
