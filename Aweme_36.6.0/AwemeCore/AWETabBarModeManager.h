@class NSString;

@interface AWETabBarModeManager : NSObject <AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (nonatomic) long long currentModeType;
@property (readonly, nonatomic) BOOL isDirectStartHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenModeEnabled;
+ (long long)currentModeType;
+ (BOOL)isBasicModeEnabled;
+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)resetNavigationForCurrentTab;
- (BOOL)isFirstLevelPage;
- (id)tabBarItemTypes;
- (id)selectedRootViewController;
- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1;
- (void)resetSelectedTabWithAllowRepeatSelected:(BOOL)a0 scene:(id)a1;
- (id)homePageContext;
- (void)switchToLightModeWithProgress:(double)a0 force:(BOOL)a1 modeType:(long long)a2 itemType:(long long)a3 businessID:(id)a4;
- (long long)selectedItemTypeWithModeType:(long long)a0;
- (void)showSeparatorLine:(BOOL)a0;
- (void)showBackgroundImagesWithProgress:(double)a0 needReloadRenderer:(BOOL)a1;
- (void)setBackgroundImagesHidden:(BOOL)a0;
- (void)switchInBasicMode;
- (id)selectedChannelID;
- (id)selectedTabID;
- (id)tabIDWithTabBarItemType:(long long)a0;
- (void)landingTabWithTabId:(id)a0 model:(id)a1 completionBlock:(id /* block */)a2 exitBlock:(id /* block */)a3;
- (void)switchInTeenMode;
- (id)tabBarControllerForChosenMode;
- (id)tabBarControllerWithModeType:(long long)a0;
- (void)updateSelectedItemType:(long long)a0 callerId:(id)a1;
- (void)reloadChannelWithReloadScene:(id)a0;
- (void)canLandingTabWithTabId:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)disableDirectStartHomepage;
- (id)performWithNormalModeBlock:(id /* block */)a0 teenModeBlock:(id /* block */)a1 basicModeBlock:(id /* block */)a2;
- (BOOL)NormalMode_isFirstLevelPage;
- (BOOL)isFirstLevelPageWithTabBarButtons:(id)a0;
- (void)registerModeChangeMessageIfNeeded;
- (void)unRegisterModeChangeMessageIfNeeded;
- (id)currentTabBarControllerFarthestParentViewOnWindow;
- (long long)indexOfViewOnSuperview:(id)a0;
- (id)currentWindow;
- (void)recoverIndexOfView:(id)a0 index:(unsigned long long)a1;
- (void)switchInNormalModeWithReloadScene:(id)a0;
- (id)init;
- (void)dealloc;
- (long long)selectedItemType;

@end
