@class NSString, AFDColorRingTrackSet, NSNumber, AWEFollowListUserListHeader;

@interface AWEFollowListUserListSectionController : AWERelationUserListBaseSectionController <AWEListSectionControllerDelegate>

@property (weak, nonatomic) AWEFollowListUserListHeader *header;
@property (nonatomic) BOOL initFinished;
@property (retain, nonatomic) NSNumber *followingCount;
@property (retain, nonatomic) AFDColorRingTrackSet *ringTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;
+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)enterFrom;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)configSupplementaryFooterView:(id)a0;
- (void)addBinding;
- (id)aAWERelationDOUYINHTSAdapter;
- (unsigned long long)activeUserSourceType;
- (void)__moreOptionButtonTapped:(id)a0 model:(id)a1;
- (void)trackTopFollowingWithUserModel:(id)a0 originalTopStatus:(long long)a1 buttonType:(id)a2 error:(id)a3;
- (void)__showMenuWithUser:(id)a0;
- (void)__updateStatisticCount:(id)a0;
- (void)enterUnreadFeedWith:(id)a0 logExtraDic:(id)a1;
- (void)selectItemEnterUserProfileAtIndex:(long long)a0 model:(id)a1;
- (BOOL)showWidgetGuideIfNeeded;
- (void)__showFirstTimeGuideBubbleOnView;
- (void)__topFollowingUser:(id)a0;
- (void)__untopFollowingUser:(id)a0;
- (void)__groupFollowingUser:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (long long)type;
- (id)sectionBackgroundColor;
- (BOOL)isMine;
- (id)pageIdentifier;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
