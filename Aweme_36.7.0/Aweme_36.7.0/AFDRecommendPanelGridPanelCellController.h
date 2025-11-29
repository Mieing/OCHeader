@class AFDRecommendPanelGridPanelCell, NSString;

@interface AFDRecommendPanelGridPanelCellController : AWEBaseListCellController <AFDRecommendPanelGridPanelCellViewModelDelegate>

@property (weak, nonatomic) AFDRecommendPanelGridPanelCell *currentCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void)refreshCurrentCell;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)didSelectItem;

@end
