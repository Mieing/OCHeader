@class NSString;

@interface AWEUserRecommendSectionController : AWEBaseListSectionController <AWEUserRecommendSectionViewModelDelegate, IGListScrollDelegate>

@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)listAdapter:(id)a0 didScrollSectionController:(id)a1;
- (void)listAdapter:(id)a0 willBeginDraggingSectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDraggingSectionController:(id)a1 willDecelerate:(BOOL)a2;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)sectionWillDisplaySupplementaryView:(id)a0;
- (void)sectionDidEndDisplayingSupplementaryView:(id)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)configSupplementaryFooterView:(id)a0;
- (id)cellIdentifierForModel:(id)a0 index:(long long)a1;
- (id)p_footerViewInCollectionView:(id)a0;
- (BOOL)p_showsHeader;
- (BOOL)p_showsFooter;
- (void)sectionViewModel:(id)a0 updateModelsAtIndexes:(id)a1;
- (void)sectionViewModel:(id)a0 didInsertModelsAtIndexes:(id)a1 animated:(BOOL)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (BOOL)showSeparator;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
