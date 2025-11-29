@class UIViewController, NSArray, AWEIMComponentEventDispatcher, NSNumber, AWEIMComponentManager;
@protocol AWEIMComponentDIService;

@interface AWEIMComponentContext : NSObject

@property (copy, nonatomic) NSArray *moduleInjectedComponentsConfig;
@property (copy, nonatomic) NSArray *injectedComponentsConfig;
@property (copy, nonatomic) NSArray *moduleInsertComponentsConfig;
@property (copy, nonatomic) NSArray *insertComponentsConfig;
@property (weak, nonatomic) AWEIMComponentManager *rootComponentManager;
@property (retain, nonatomic) AWEIMComponentEventDispatcher *eventDispatcher;
@property (retain, nonatomic) id<AWEIMComponentDIService> diContainer;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (weak, nonatomic) AWEIMComponentContext *parentContext;
@property (retain, nonatomic) NSNumber *initialIndex;
@property (nonatomic) BOOL enableTrackPerfMetrics;

- (id)actionPublisher:(id)a0;
- (id)resolveService:(id)a0;
- (void)observeAction:(id)a0 withComponent:(id)a1;
- (void)bindService:(id)a0 target:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
