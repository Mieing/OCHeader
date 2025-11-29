@class AWEAwemeDetailNaviBarCoordinator, NSString, NSDictionary, AWEAwemeModel, AWEPageContext, NSNumber, UIViewController;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWECommerceRewardSoftADMissionProtocol;

@interface AWEAwemeDetailNaviBarCommonContext : AWEPageContext <AWEAwemeDetailNaviBarCommonContextProtocol>

@property (retain, nonatomic) NSNumber *showSearchStatus;
@property (retain, nonatomic) NSNumber *showSearchBarStyle;
@property (copy, nonatomic) NSString *enterFromForEnterSearchString;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) NSString *titleInAllFeeds;
@property (retain, nonatomic) AWEAwemeModel *enterAwemeModel;
@property (weak, nonatomic) id<AWECommerceRewardSoftADMissionProtocol> rewardDelegate;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *interactionContext;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;
@property (weak, nonatomic) AWEAwemeDetailNaviBarCoordinator *naviBarCoorinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)enterFromForEnterSearch;
- (id)enterFromSecondForEnterSearch;
- (BOOL)shouldUseECommerceParams;
- (BOOL)isNearbyDoubleColInner;
- (BOOL)isGrouponDoubleColInner;
- (id)productIdForEnterSearch;
- (id)ecommerceSearchBarTrackParams;
- (id)previousPageForEnterSearch;
- (BOOL)shouldJumpECommerceSearch;
- (BOOL)p_shouldNotShowDiscoverEntrance;
- (BOOL)shouldShowDiscoverEntranceView;
- (BOOL)shouldUseSearchEntranceBarStyle;
- (BOOL)shouldShowSearchIconWithBottomBar;
- (BOOL)canshowCameraEntrance;
- (BOOL)isFromLScenes;
- (BOOL)isMyPostsDetail;
- (BOOL)isECommerceScenes;
- (BOOL)isIMScenes;
- (BOOL)p_shouldShowNearbyRedEnvelopeTitleView;
- (BOOL)p_shouldShowStableDetailPageRelatedRecommendTitleView;
- (BOOL)shouldShowLocationStyle;
- (BOOL)shouldShowAdditionalAdsStyle;
- (BOOL)shouldShowHotSpotRelateStyle;
- (BOOL)shouldShowNearbyHotSpotRelateStyle;
- (BOOL)isLiteEcomShoppingV2;
- (BOOL)isEComGoodsFeedStyle;
- (BOOL)isLegouLiveInnerFeed;
- (BOOL)shouldShowRewardSoftStyle;
- (BOOL)shouldShowEmptyStyle;
- (BOOL)shouldShowImmersiveRelatedMixStyle;
- (BOOL)shouldShowOnlyReturnStyle;
- (BOOL)shouldShowIMFriendsAlbumStyle;
- (BOOL)shouldShowLiteShareFissionInnerFeedStyle;
- (BOOL)shouldShowLiteShareFriendInnerFeedStyle;
- (BOOL)shouldShowNaviDownloadEntrance;
- (BOOL)shouldShowCameraInspiration;
- (BOOL)shouldPlayletStyle;
- (BOOL)shouldShowTrendingVideoStyle;
- (BOOL)shouldShowProfileLLMRecommendInnerFeedStyle;
- (void)updateShouldShowDiscoverEntranceView:(BOOL)a0;
- (void)updateShouldShowDiscoverEntranceBarStyle:(BOOL)a0;
- (void)updateEnterFromForEnterSearch:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (BOOL)isLScenesShowSearchBar;
- (BOOL)shouldShowCameraEntrance;
- (void).cxx_destruct;
- (id)init;

@end
