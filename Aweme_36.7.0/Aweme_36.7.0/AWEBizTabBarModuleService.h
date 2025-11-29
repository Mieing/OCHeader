@class NSString;

@interface AWEBizTabBarModuleService : HTSService <AWEBizTabBarModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (long long)calculateTimestampDiffFromAppDidBecomeActive;
- (void)resetNavigationForCurrentTab;
- (BOOL)isFirstLevelPage;
- (id)pageReferStringForTabItemType:(long long)a0;
- (void)executeMarkFeedReadyIfNeeded;
- (id)getNormalModeItemConfigWithTabID:(id)a0;
- (id)normalModeTabIDToTabBarItemTypeMap;
- (id)tabBarItemTypes;
- (id)normalModeTabIDWhiteList;
- (id)selectedRootViewController;
- (void)updateNormalModeTabBarButton:(long long)a0 withTitle:(id)a1;
- (void)updateNormalModeTabBarButton:(long long)a0 withTitle:(id)a1 animated:(BOOL)a2;
- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1;
- (void)showTabBarSeparatorLine:(BOOL)a0;
- (id)getTabBarController;
- (void)switchToLightModeWithProgress:(double)a0 force:(BOOL)a1 modeType:(long long)a2 itemType:(long long)a3 businessID:(id)a4;
- (BOOL)bottomChannelCanShowTabBarBGSkinWithChannelID:(id)a0 modeType:(long long)a1;
- (BOOL)isSkinEnabledWithModeType:(long long)a0;
- (id)renderedImageModelWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)skinContainerViewParamsWithReloadType:(long long)a0 modeType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (long long)selectedItemTypeWithModeType:(long long)a0;
- (id)normalModeApplyUIControlTaskWithBizID:(id)a0;
- (id)skinConfigWithModeType:(long long)a0;
- (long long)selectedItemType;

@end
