@class NSString, UIViewController, DitoPageContext;
@protocol DitoExtensionContainerProtocol, AWEPOILiveFloatOnTop, AWELiveFloatOnTopManagerProtocol;

@interface AWEPOIDetailLiveFloatExtension : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) id<AWELiveFloatOnTopManagerProtocol> liveManager;
@property (retain, nonatomic) id<AWEPOILiveFloatOnTop> floatOnTopManager;
@property (weak, nonatomic) UIViewController *preViewController;
@property (copy, nonatomic) NSString *enterFromLiveRoom;
@property (nonatomic) unsigned long long floatLiveWindowStatus;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)detachLiveFloatOnTop;
- (void)attachLiveFloatOnTop;
- (void)initializeExtension;
- (void)setupLiveFloatOnTopStateBlockIfNeeded;
- (BOOL)shouldShowNewLiveFloatWindow;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
