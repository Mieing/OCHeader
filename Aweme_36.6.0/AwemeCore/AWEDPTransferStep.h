@class NSDictionary, UIViewController;

@interface AWEDPTransferStep : AWEWorkflowStep

@property (weak, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) NSDictionary *prepareUserInfo;

- (BOOL)isTeenModeEnabled;
- (void)onStep:(id)a0 linkSession:(id)a1;
- (void)reportOpenURL:(id)a0 resultURL:(id)a1 isSuccess:(BOOL)a2;
- (void)switchToRootPage:(id)a0 session:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_handlePushViewController:(id)a0;

@end
