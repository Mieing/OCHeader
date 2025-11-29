@class NSString, UIViewController, DYRouterModel;

@interface DYRebindPhoneLoadingControl : NSObject <AWEUserMessage, DYUserLoadingControl>

@property (weak, nonatomic) UIViewController *currentVC;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBindPhone;
- (BOOL)disableFullscreenPopTransition;
- (BOOL)closeRebindVC;
- (void)startLoadingWithCurrentVC:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
