@interface AWECommentShareSectionController : AWEBaseListSectionController

+ (Class)sectionViewModelClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (double)separatorHeight;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;
- (Class)headerViewClass;

@end
