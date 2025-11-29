@class MMFlutterInstance, MMFlutterViewController, BrandAudioNavigationController;

@interface BizAudioFlutterRouter : NSObject

@property (retain, nonatomic) MMFlutterViewController *controller;
@property (retain, nonatomic) BrandAudioNavigationController *container;
@property (retain, nonatomic) MMFlutterInstance *instance;

+ (id)plugins;

- (id)init;
- (id)playerRouteName;
- (void)setupEngineGroup;
- (id)createNewApp;
- (void)onLaunch:(id)a0;
- (id)appController;
- (id)appContainer;
- (BOOL)isAppActive;
- (BOOL)isAppInViewHierarchy;
- (BOOL)isAppShowing;
- (void).cxx_destruct;

@end
