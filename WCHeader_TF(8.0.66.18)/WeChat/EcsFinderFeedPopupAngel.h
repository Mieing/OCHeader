@class NSString, EcsFinderFeedPopupViewModel;

@interface EcsFinderFeedPopupAngel : ZZFLEXAngel <UIScrollViewDelegate>

@property (retain, nonatomic) EcsFinderFeedPopupViewModel *dataVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resetCellsAlpha:(id)a0;
- (void).cxx_destruct;

@end
