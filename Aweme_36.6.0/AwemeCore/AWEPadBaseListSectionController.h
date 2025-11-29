@interface AWEPadBaseListSectionController : AWEBaseListSectionController

+ (Class)sectionViewModelClass;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (BOOL)canMoveItemAtIndex:(long long)a0;
- (void)containerViewDidAppear;
- (struct CGSize { double x0; double x1; })cellContentSizeWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItemsInOnLineWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)containerViewDidDisappear;
- (void)containerViewDidRefresh;
- (void)containerViewWillRefresh;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (long long)numberOfItems;
- (double)separatorHeight;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)moveObjectFromIndex:(long long)a0 toIndex:(long long)a1;
- (Class)headerViewClass;

@end
