@class NSString, AWEProfileExtensionAreaContext;

@interface AWEProfileExtensionAreaControllerManager : AWEShellControllerManager <AWEProfileEAControllerProtocol>

@property (weak, nonatomic) AWEProfileExtensionAreaContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
