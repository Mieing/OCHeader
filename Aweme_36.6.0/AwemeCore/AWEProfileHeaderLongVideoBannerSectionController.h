@interface AWEProfileHeaderLongVideoBannerSectionController : AWEBaseListSectionController

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (BOOL)showSeparator;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
