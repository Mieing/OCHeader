@class NSString, UIViewController, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol, IESLLPOILiveFloatOnTop, AWELiveFloatOnTopManagerProtocol;

@interface IESLLPOIDetailLiveFloatExtension : NSObject <LLDitoExtensionProtocol>

@property (retain, nonatomic) id<AWELiveFloatOnTopManagerProtocol> liveManager;
@property (retain, nonatomic) id<IESLLPOILiveFloatOnTop> floatOnTopManager;
@property (weak, nonatomic) UIViewController *preViewController;
@property (copy, nonatomic) NSString *enterFromLiveRoom;
@property (nonatomic) unsigned long long floatLiveWindowStatus;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
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
