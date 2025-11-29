@class NSString, AWEDPlayerInteractionViewConfig, AWEPageContext;
@protocol AWEDPlayerPageContextProtocol;

@interface AWEDPlayerInteractionDispatchManager : AWEShellControllerManager <AWEDPlayerInteractionDispatchProtocol>

@property (retain, nonatomic) AWEDPlayerInteractionViewConfig *viewConfig;
@property (weak, nonatomic) AWEPageContext<AWEDPlayerPageContextProtocol> *context;
@property (nonatomic) BOOL loadBelowControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveGestureRecognizer:(id)a0 touch:(id)a1;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)loadAboveBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)initWithViewConfig:(id)a0;
- (id)controllersBySelector:(SEL)a0;
- (void).cxx_destruct;

@end
