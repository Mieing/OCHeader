@class NSString;

@interface AWEShellControllerManager : AWEBaseControllerManager <AWEViewControllerLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;

@end
