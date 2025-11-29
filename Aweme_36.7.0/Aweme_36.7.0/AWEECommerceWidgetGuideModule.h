@class UIImage, NSString;
@protocol AWEECWidgetGuideManagerService;

@interface AWEECommerceWidgetGuideModule : HTSService <AWEECWidgetGuideModuleService, HTSAppLifeCycle>

@property (readonly, nonatomic) id<AWEECWidgetGuideManagerService> adapterManager;
@property (readonly, nonatomic) id<AWEECWidgetGuideManagerService> widgetManager;
@property (readonly, nonatomic) UIImage *widgetLiveToolItemIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerListenerOrPreloadAfterPitayaReady;
+ (BOOL)enableWidgetPitayaFrequency;
+ (BOOL)enableDesktopIcon;
+ (BOOL)enableWidgetOptimize;
+ (BOOL)enableWidgetNewOptimize;
+ (void)registerListenerOrPreload;
+ (id)settings;

- (void)onAppDidBecomeActive;
- (void)checkWidgetInstallStateWithCompletion:(id /* block */)a0;

@end
