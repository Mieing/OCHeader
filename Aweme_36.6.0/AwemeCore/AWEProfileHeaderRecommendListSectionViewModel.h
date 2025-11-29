@class NSString, AWEProfileHeaderContext, UIView, UIViewController;
@protocol AWEUserRecommendViewControllerProtocol;

@interface AWEProfileHeaderRecommendListSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderRecommendListSectionProtocol>

@property (retain, nonatomic) UIView *recommendListContainerView;
@property (retain, nonatomic) UIViewController<AWEUserRecommendViewControllerProtocol> *userRecommendVC;
@property (nonatomic) BOOL isInRecommendListAnimation;
@property (copy, nonatomic) id /* block */ showOrHideRcommendListBlock;
@property (nonatomic) BOOL haveTrackShowRecommendButton;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL showByAuto;
@property (nonatomic) BOOL interactedOnRecommendCard;
@property (readonly, nonatomic) AWEProfileHeaderContext *context;
@property (readonly, nonatomic) double heightOfSection;
@property (readonly, nonatomic) double footerHeight;
@property (copy, nonatomic) id /* block */ invalidateLayoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewControllerDidAppear;
- (void)configWithContext:(id)a0;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)handleRecommendListWithShowOrNotBlock:(id /* block */)a0 loadingActionBlock:(id /* block */)a1 needToast:(BOOL)a2;
- (void)p_onTabBarDidChangeNotification:(id)a0;
- (BOOL)p_addUserRecommendControllerIfNeeded;
- (void)showOrHideRecommendListView:(BOOL)a0 needToast:(BOOL)a1;
- (void)updateShowRecommendViewFlagIfNeeded;
- (void)showRecommendListInMyProfileIfNeeded;
- (long long)recommendListType;
- (void)p_recommendDataErrorWithToast:(id)a0;
- (id)p_recommendContext;
- (void)hideRecommendListInMyProfileIfNeeded;
- (BOOL)__shouldShowfindMorePeopleWithHeaderContext:(id)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
