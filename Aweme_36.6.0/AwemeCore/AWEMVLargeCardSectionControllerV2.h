@interface AWEMVLargeCardSectionControllerV2 : AWEDCFeedBaseSectionController

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (long long)waterfallColumnCount;
- (double)getCellWidth;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
