@class AWEDPlayerGeneralControllerConfig, NSString, AWEDPlayerVideoModel, AWEAwemeModel, AWEPageContext, AWEDPlayerBaseControlContainer;
@protocol AWEDPlayerActionDelegate, AWEDPlayerPageContextProtocol;

@interface AWEDPlayerInteractionBaseController : AWEBaseController <AWEDPlayerInteractionDispatchProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEDPlayerVideoModel *videoModel;
@property (retain, nonatomic) AWEDPlayerGeneralControllerConfig *controllerConfig;
@property (weak, nonatomic) id<AWEDPlayerActionDelegate> actionDelegate;
@property (retain, nonatomic) AWEDPlayerBaseControlContainer *view;
@property (readonly, weak, nonatomic) AWEPageContext<AWEDPlayerPageContextProtocol> *context;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (unsigned long long)activateType;
- (void)updateForSimplePlayerWithVideoModel:(id)a0;
- (void)updateDPlayerState:(unsigned long long)a0;
- (id)container;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (id)viewController;
- (void)viewDidLoad;
- (unsigned long long)controllerType;

@end
