@class AWELivePreStreamTopContainer, AWELivePreStreamRightContainer, AWELivePrestreamElementDispatcher, AWELivePreStreamBottomContainer, NSMutableArray, NSString, AWELivePreStreamLeftContainer, AWELivePreStreamConfigCenter, UIViewController, AWELivePreStreamContext, AWELivePreStreamCenterContainer, AWELivePreStreamAlertContainer;

@interface AWELivePreStreamContainerServiceImp : NSObject <AWELivePreStreamContainerService>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWELivePrestreamElementDispatcher *elementDispatcher;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (retain, nonatomic) AWELivePreStreamConfigCenter *configCenter;
@property (retain, nonatomic) AWELivePreStreamTopContainer *topContainer;
@property (retain, nonatomic) AWELivePreStreamCenterContainer *centerContainer;
@property (retain, nonatomic) AWELivePreStreamLeftContainer *leftContainer;
@property (retain, nonatomic) AWELivePreStreamRightContainer *rightContainer;
@property (retain, nonatomic) AWELivePreStreamBottomContainer *bottomContainer;
@property (retain, nonatomic) AWELivePreStreamAlertContainer *businessContainer;
@property (retain, nonatomic) NSMutableArray *businessContainerList;
@property (nonatomic) BOOL searchEcomWordDidShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (id)getLiveStatusTipView;
- (void)onRightAreaChange:(id)a0;
- (id)initWithControllerView:(id)a0 dispatcher:(id)a1 context:(id)a2 configCenter:(id)a3 diContext:(id)a4;
- (void)createElementContainer;
- (void)setupUIContainer;
- (void)p_createContainerByClassName:(id)a0;
- (Class)p_classForName:(id)a0;
- (Class)p_containerClassWithContainerName:(id)a0;
- (void)p_configToContainerClass:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setupPlayer;

@end
