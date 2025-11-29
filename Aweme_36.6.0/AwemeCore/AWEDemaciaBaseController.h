@class AWEAwemeModel, NSString, AWEPageContext, UIView, AWEDemaciaBaseContainer, UIViewController;
@protocol AWEDemaciaPageContextProtocol, AWEDemaciaContainerProtocol;

@interface AWEDemaciaBaseController : NSObject <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayRecognizeDispatchProtocol, AWEVideoPlayerLifeCycleProtocol>

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (retain, nonatomic) AWEDemaciaBaseContainer *view;
@property (weak, nonatomic) AWEPageContext<AWEDemaciaPageContextProtocol> *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
