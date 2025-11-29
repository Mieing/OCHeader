@interface AWEFansListQuickAccessSectionController : AWEBaseListSectionController

- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (id)sectionBackgroundColor;
- (Class)cellClass;

@end
