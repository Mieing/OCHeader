@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEDemaciaContainerProtocol;

@interface AWEDemaciaBaseElement : AWEBaseElement <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayRecognizeDispatchProtocol, AWEVideoPlayerLifeCycleProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL appearBeforeScreenCast;
@property (readonly, weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)initializeElement;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (void)checkIsElementValid;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isShowing;
- (void)reset;
- (id)context;

@end
