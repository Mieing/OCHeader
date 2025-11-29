@interface AWEFindFriendsVerticalFunctionListSectionController : AWEBaseListSectionController

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (id)customHeaderIdentifier;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (double)separatorHeight;
- (BOOL)showSeparator;
- (Class)cellClass;
- (Class)headerViewClass;

@end
