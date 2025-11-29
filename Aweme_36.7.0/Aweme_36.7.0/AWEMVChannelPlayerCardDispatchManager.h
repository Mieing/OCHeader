@class NSString;

@interface AWEMVChannelPlayerCardDispatchManager : AWEShellControllerManager <AWEMVChannelPlayerCardDispatchProtocol>

@property (nonatomic) BOOL loadBelowControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (BOOL)shouldFailedGestureRecognizer:(id)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)loadAboveBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;

@end
