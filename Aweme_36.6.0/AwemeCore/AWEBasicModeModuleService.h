@class NSString;

@interface AWEBasicModeModuleService : HTSService <AWEBasicModeModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetNavigationForCurrentTab;
- (BOOL)isFirstLevelPage;
- (id)tabBarItemTypes;
- (id)selectedRootViewController;
- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1;
- (void)resetSelectedTabWithAllowRepeatSelected:(BOOL)a0 scene:(id)a1;
- (void)showSeparatorLine:(BOOL)a0;
- (void)updateSelectedItemType:(long long)a0 options:(id)a1;
- (void)showBackgroundImagesWithProgress:(double)a0 needReloadRenderer:(BOOL)a1;
- (void)setBackgroundImagesHidden:(BOOL)a0;
- (void)switchToLightModeWithProgress:(double)a0 force:(BOOL)a1 itemType:(long long)a2 businessID:(id)a3;
- (void)switchOutBasicMode;
- (void)switchInBasicMode;
- (id)basicModeInteractionViewController;
- (id)selectedChannelID;
- (id)selectedTabID;
- (id)tabIDWithTabBarItemType:(long long)a0;
- (id)tabBarRootVCWithTabID:(id)a0;
- (id)tabBarController;
- (long long)selectedItemType;

@end
