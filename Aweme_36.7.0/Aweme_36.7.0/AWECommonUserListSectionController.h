@interface AWECommonUserListSectionController : AWERelationUserListBaseSectionController

@property (retain, nonatomic) Class cellCls;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (id)customUserProps:(id)a0;
- (void)showMenuWithUser:(id)a0;
- (void)showMoreMenuWithUserAdapterModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (long long)type;
- (Class)cellClass;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
- (void)moreButtonTapped:(id)a0;

@end
