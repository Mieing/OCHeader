@interface AWEDCFeedInterestController : AWEDCFeedBaseController

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)didSelectDislikeWithModels:(id)a0;
- (void)recordDislikeModel:(id)a0;
- (id)addItem:(id)a0 toCommaSeparatedString:(id)a1;

@end
