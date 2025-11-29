@class NSString, UIViewController, UIView;
@protocol AWEPostPageServiceCoordinator, AWEPostPageContext;

@interface AWEPostPageElement : NSObject <ACCServiceBindable, AWEPostPageLifeCycleMessage>

@property (class, readonly, copy, nonatomic) NSString *type;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEPostPageServiceCoordinator> serviceCoordinator;
@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long visibleCount;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL forceReceiveEvents;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) long long priority;
@property (retain, nonatomic) id featureConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)featureConfigClass:(id)a0;
+ (long long)registerScene:(id)a0;
+ (BOOL)isCustomizedForFeatureConfig:(id)a0;

- (void)elementAppear;
- (void)bindServices:(id)a0;
- (void)contextDidReady;
- (void)elementDisappear;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
