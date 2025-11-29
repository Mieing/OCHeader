@class NSString, UIViewController;
@protocol AWEUserProfileFavoriteV2ViewControllerProtocol;

@interface AWEFavoriteDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol, AWEFavoriteDetailComponentProtocol>

@property (retain, nonatomic) UIViewController<AWEUserProfileFavoriteV2ViewControllerProtocol> *favoriteV2VC;
@property (nonatomic) unsigned long long favoriteLandingType;
@property (copy, nonatomic) NSString *favoriteAwemeLastViewedItemID;
@property (nonatomic) BOOL needAttachHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabStatusCalibrationSet;

- (id)tabLandingParams;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onWillRefreshWithUser:(id)a0;
- (id)noNeedParsedParamsToServer;
- (void)onTrackEnterPersonalTab:(long long)a0 enterMethod:(id)a1 hasRedDotWhenSwitched:(BOOL)a2 params:(id)a3;
- (void)didSelectFavoriteV2VC;
- (BOOL)willRedirectToFavoriteLandingPage;
- (id)collectionTabModel;
- (BOOL)hasFavoriteTab;
- (void).cxx_destruct;
- (void)resetUI;
- (void)onInit;

@end
