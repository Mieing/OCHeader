@class NSDictionary, NSString;

@interface AWENormalModeTabBarItemConfigManager : NSObject <AWEFeedChannelHookLifeCycleDelegate>

@property (retain, nonatomic) NSDictionary *bottomReloadSceneToChannelReloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)homePageContext;
- (void)viewDidLoadForViewController:(id)a0;
- (void)viewWillAppearForViewController:(id)a0;
- (void)viewDidAppearForViewController:(id)a0;
- (void)viewWillDisappearForViewController:(id)a0;
- (void)viewDidDisappearForViewController:(id)a0;
- (id)getCommunicationObjectWithChannel:(id)a0 byProtocol:(id)a1;
- (void)callBadgeDidShowWithChannel:(id)a0 badgeContext:(id)a1;
- (void)callBadgeDidDowngradeWithChannel:(id)a0 badgeContext:(id)a1;
- (void)callBadgeDidHideWithChannel:(id)a0 badgeContext:(id)a1;
- (id)callGetCustomTrackParamsWithChannel:(id)a0 trackInfo:(id)a1;
- (void)callBubbleShowWithChannel:(id)a0 result:(id)a1 model:(id)a2;
- (void)callBubbleDismissWithChannel:(id)a0 type:(long long)a1 model:(id)a2;
- (id)getCommunicationObjectWithLifeCycle:(id)a0 byChannel:(id)a1 byProtocol:(id)a2;
- (void)callBeginLandingTabWithChannel:(id)a0 tabID:(id)a1 model:(id)a2;
- (void)callItemEnterWithChannel:(id)a0 enterModel:(id)a1;
- (void)callItemLeaveWithChannel:(id)a0 leaveModel:(id)a1;
- (void)callEndLandingTabWithChannel:(id)a0 tabID:(id)a1 model:(id)a2;
- (void)callTabBarDidSetHidden:(BOOL)a0;
- (void)callTabBarDidSetAlpha:(double)a0;
- (void)updateHomePageContextSelectedNodeIfNeed:(id)a0;
- (void)callRefreshWithChannel:(id)a0 refreshBeginBlock:(id /* block */)a1 refreshCompletion:(id /* block */)a2;
- (void)callDidSelectWithChannel:(id)a0 fromPreviousSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)callDidUnSelectWithChannel:(id)a0 fromSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)consumeComponentWhenEnterIfNeed:(id)a0;
- (void)p_callChannelDidUnloadWithChannel:(id)a0 reloadType:(unsigned long long)a1;
- (void)p_callChannelDidLoadWithChannel:(id)a0 reloadType:(unsigned long long)a1;
- (void)p_callChannelDidReloadWithChannel:(id)a0 reloadType:(unsigned long long)a1;
- (void)tabBarController:(id)a0 didReloadWithNewButtonTypeList:(id)a1 oldButtonTypeList:(id)a2 reloadScene:(id)a3;
- (void).cxx_destruct;

@end
