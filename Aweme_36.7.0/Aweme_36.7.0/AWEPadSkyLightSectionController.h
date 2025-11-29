@interface AWEPadSkyLightSectionController : AWEPadBaseListSectionController

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })cellContentSizeWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItems;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
