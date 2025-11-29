@interface AWEFollowUserUpdateSectionController : AWERelationUserListBaseSectionController

@property (nonatomic) BOOL isMoreMenuShowing;
@property (nonatomic) BOOL viewDidAppear;

+ (Class)sectionViewModelClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)enterFrom;
- (void)didBindSectionViewModel;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (unsigned long long)activeUserSourceType;
- (void)__moreOptionButtonTapped:(id)a0 model:(id)a1;
- (void)__showMenuWithUser:(id)a0;
- (void)__alienationOptionButtonTappedWithModel:(id)a0 index:(long long)a1;
- (void)sectionWillDisplayCell:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)separatorColor;
- (long long)type;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
- (id /* block */)willDisappearBlock;

@end
