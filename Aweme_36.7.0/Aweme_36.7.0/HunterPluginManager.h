@class HunterContext, UIView, NSMutableOrderedSet, UIViewController;
@protocol AnnieXContainerBaseProtocol, HunterContainerProtocol, HunterViewControllerProtocol;

@interface HunterPluginManager : NSObject

@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainerView;
@property (weak, nonatomic) UIViewController<HunterViewControllerProtocol> *hunterVC;
@property (weak, nonatomic) id<AnnieXContainerBaseProtocol> containerVC;
@property (weak, nonatomic) HunterContext *hunterContext;
@property (retain, nonatomic) NSMutableOrderedSet *plugins;

- (void)updatePluginsWithViewModel:(id)a0;
- (void)performOnHunterBindStart:(id)a0;
- (void)performOnHunterSchemaProcessStart:(id)a0;
- (void)setupPluginSystemWithView:(id)a0;
- (void)registerPlugins:(id)a0;
- (void)performOnHunterProcessStart:(id)a0;
- (void)performOnHunterSchemaProcessEnd:(id)a0;
- (void)performOnHunterLoadStart:(id)a0;
- (void)performOnHunterLoadEnd:(id)a0;
- (void)performOnHunterClientDataProcessStart:(id)a0;
- (void)performOnHunterClientDataProcessEnd:(id)a0;
- (void)performOnHunterProcessEnd:(id)a0;
- (void)performOnHunterCreateViewStart:(id)a0;
- (void)performOnHunterCreateViewEnd:(id)a0;
- (void)performOnHunterUpdateDataStart:(id)a0;
- (void)setupPluginSystemWithViewController:(id)a0;
- (void)updatePluginSystemWithViewController:(id)a0 hunterContext:(id)a1;
- (void)performOnHunterLoadFail:(id)a0;
- (void)performOnHunterLoadSuccess:(id)a0;
- (void)performOnHunterContainerVCViewDidDisAppear:(id)a0;
- (void)unregisterAllPlugin;
- (void)setupPluginConfig:(id)a0 forContainerView:(id)a1;
- (void)setupPluginConfig:(id)a0 forViewController:(id)a1;
- (void)updatePluginConfig:(id)a0 forContainerVC:(id)a1 hunterContext:(id)a2;
- (void)registerPluginForContainerView:(id)a0;
- (void)registerPluginForViewController:(id)a0;
- (void)performOnPluginsIfCouldWithPlugin:(id)a0 selector:(SEL)a1 params:(id)a2;
- (void)performOnPluginsWithSelector:(SEL)a0 params:(id)a1;
- (void)performOnHunterBindEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterPlugin:(id)a0;

@end
