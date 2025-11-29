@class UIButton, UIViewController, NSString;
@protocol AWENewNearbyViewControllerProtocol, AWETabBarItemViewControllerProtocol, AWENormalModeTabBarGeneralButtonProtocol;

@interface AWEBizTabBarNearbyItemConfig : NSObject <AWEDigitalWellbeingMessage, AWEBizTabBarItemConfigProtocol>

@property (retain, nonatomic) UIButton<AWENormalModeTabBarGeneralButtonProtocol> *nearbyButton;
@property (retain, nonatomic) UIViewController<AWETabBarItemViewControllerProtocol, AWENewNearbyViewControllerProtocol> *nearbyController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (id)sharedConfigWithChannel:(id)a0;
+ (Class)aAWENearbyTabBarCommonAdapterClass;
+ (id)sharedConfig;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)isTeenModeEnabled;
- (void)setupNotification;
- (id)tabBarItemViewController;
- (id)tabBarItemButton;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (BOOL)canLandingWithTabId:(id)a0 params:(id)a1;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (long long)bottomChannel:(id)a0 enableRefresh:(id)a1;
- (void)bottomChannel:(id)a0 refreshWithModel:(id)a1 withCompletion:(id /* block */)a2;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)a0 isByTap:(BOOL)a1;
- (id)getCustomTrackParamsWithTrackInfo:(id)a0;
- (id)nearbyDisplayString;
- (void)updateTC21NearbyTabButtonBackgroundIfNeeded;
- (void)updateTC21NearbyTabButtonBackground:(id)a0;
- (id)nearbyInnerViewTitle;
- (BOOL)customInnerTextView;
- (id)aAWENearbyTabBarCommonAdapter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0;
- (void)setupConfig;

@end
