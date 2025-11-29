@interface AWETripleColumnPlayletPadSectionController : AWETripleColumnPlayletSectionController

+ (Class)sectionViewModelClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)currentContainerView;
- (struct CGSize { double x0; double x1; })sizeForItemInPad;
- (long long)columnNumOfCardForCurrentBreakPoint;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
