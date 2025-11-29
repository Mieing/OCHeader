@class NSString;
@protocol AWEHPChannelPageAbilityImpl;

@interface AWEHPChannelPageAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelPageAbility>

@property (weak, nonatomic) id<AWEHPChannelPageAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTopBarThemeStyle:(unsigned long long)a0;
- (id)getFeedHomePageContext;
- (void)updateBottomBarFillBackground:(BOOL)a0;
- (void)updateBottomBarThemeStyle:(unsigned long long)a0;
- (id)getContentViewController;
- (BOOL)tryRemoveContentViewController;
- (BOOL)tryAddContentViewController;
- (void)triggerContentViewControllerLoadFinish:(id)a0;
- (BOOL)isScrollViewSliding;
- (id)getLifeCycleInfoModel;
- (void)tryReleaseContentViewControllerWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isLandingInProgress;
- (BOOL)hasAddContentViewController;
- (void)removeChannel;
- (void)updateViewControllerSkylight:(id)a0;
- (void)updateTopBarMaskStatus:(long long)a0;
- (void)updateTopTabBrightness:(double)a0;
- (void).cxx_destruct;

@end
