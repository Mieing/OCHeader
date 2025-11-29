@interface AWESkylightOftenWatchSectionController : AWECommonUserListSectionController

@property (nonatomic) BOOL isMoreMenuShowing;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)__alienationOptionButtonTappedWithModel:(id)a0 index:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (BOOL)showSeparator;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct AWEListKitSeparatorInsets { double x0; double x1; })separatorInsets;
- (Class)headerViewClass;

@end
