@class NSString, NSMutableArray;
@protocol AWEEcomAISearchResultLynxCardListControllerDelegate;

@interface AWEEcomAISearchResultLynxCardListController : AWEEcomSearchListBaseController <AWEEcommerceSearchCellContextProtocol>

@property (retain, nonatomic) NSMutableArray *lynxCardUpdateHeightArray;
@property (weak, nonatomic) id<AWEEcomAISearchResultLynxCardListControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClassForModel:(id)a0;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)registerCollectionViewCell:(id)a0;
- (void)collectionView:(id)a0 willDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2 withModel:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtIndexPath:(id)a1 withModel:(id)a2;
- (id)identifierForModel:(id)a0;
- (void)willConfigCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)willEnterFullScreenWithIndexPath:(id)a0 model:(id)a1;
- (void)reloadCurrentCellWithIndexPath:(id)a0 model:(id)a1 needTrackShow:(BOOL)a2;
- (void)forceBecomeActiveWithIndexPath:(id)a0 model:(id)a1;
- (id)videoFeedScrollView;
- (void)endForceBecomingActiveWithIndexPath:(id)a0 model:(id)a1;
- (void)scrollToDisplayItemWithOffset:(double)a0 indexPath:(id)a1 animated:(BOOL)a2;
- (void)jumpToVideoDetailWithIndexPath:(id)a0 model:(id)a1 params:(id)a2;
- (void)updateHeightForCellWithIndexPath:(id)a0 model:(id)a1;
- (void)updateHeightForCommonCellWithIndexPath:(id)a0 model:(id)a1;
- (double)cellWidthForModel:(id)a0 atIndexPath:(id)a1;
- (void)beginAutoPlayWithReset:(BOOL)a0;
- (void)updateLayoutAndCanBeCanceled;
- (void)updateLayoutAndCanBeCanceledForIndexPath:(id)a0;
- (void)recalculateToAutoPlay;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (unsigned long long)columnType;

@end
