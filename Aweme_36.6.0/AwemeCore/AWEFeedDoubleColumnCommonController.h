@interface AWEFeedDoubleColumnCommonController : AWEDCFeedBaseController

@property (nonatomic) double originY;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)sectionController:(id)a0 configCell:(id)a1 model:(id)a2 index:(long long)a3;
- (void)enterDetailVCAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)enterInsAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)onFetchListDataFromHeaderDragWithReason:(unsigned long long)a0;
- (void)didSelectDislikeWithModels:(id)a0;
- (void)recordDislikeModel:(id)a0;
- (void)trackAdsIfNeeded:(id)a0 model:(id)a1 indexPath:(id)a2;

@end
