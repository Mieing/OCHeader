@class NSString;

@interface AWEFollowListSearchSectionController : AWERelationUserListBaseSectionController <AWECommonSearchBarDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (unsigned long long)activeUserSourceType;
- (void)__moreOptionButtonTapped:(id)a0 model:(id)a1;
- (void)trackTopFollowingWithUserModel:(id)a0 originalTopStatus:(long long)a1 buttonType:(id)a2 error:(id)a3;
- (void)__showMenuWithUser:(id)a0;
- (void)refreshUserFriendStatus:(id)a0;
- (void)__topFollowingUser:(id)a0 succeed:(id /* block */)a1;
- (void)__untopFollowingUser:(id)a0 succeed:(id /* block */)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (long long)type;
- (id)sectionBackgroundColor;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;

@end
