@interface AWEFeedCollectionViewForUserPersonalSearchController : AWEFeedCollectionViewForSearchController

- (BOOL)supportsShowingRecommendedVideos;
- (BOOL)shouldTraceCellBindCost;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)footerInset;

@end
