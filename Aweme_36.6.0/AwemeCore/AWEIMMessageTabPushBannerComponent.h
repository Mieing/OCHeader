@class NSString;

@interface AWEIMMessageTabPushBannerComponent : AWEIMMessageTabCommonBannerComponent <AWEPushGuideV4ManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_willEnterForeground;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)__didChangeMessageTabMode:(id)a0;
- (Class)interactorClass;
- (id)pushGuideBannerInteractor;
- (void)updateGuideBanner;
- (id)v4PushGuideBannerInteractor;
- (void)pushGuideManager:(id)a0 pushBannerInvoked:(id)a1;
- (void)dismissPushGuideBanerView;
- (BOOL)isIMListBannerShowing;
- (void)viewWillAppear;

@end
