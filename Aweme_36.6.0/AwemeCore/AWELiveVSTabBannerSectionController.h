@interface AWELiveVSTabBannerSectionController : AWELiveVSTabBaseSectionController

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)containerViewDidAppear;
- (void)containerViewDidDisAppear;
- (struct CGSize { double x0; double x1; })cellContentSizeWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (double)separatorHeight;

@end
