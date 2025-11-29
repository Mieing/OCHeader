@class NSString, UIViewController, AWEDLMSession;

@interface AWEDPUndertakeRenderStep : AWEWorkflowStep

@property (copy, nonatomic) NSString *className;
@property (weak, nonatomic) UIViewController *targetViewController;
@property (weak, nonatomic) AWEDLMSession *linkSession;

- (void)handleViewWillAppear:(id)a0;
- (void)onStep:(id)a0 linkSession:(id)a1;
- (void)_handleSessionTimeOut:(id)a0;
- (void).cxx_destruct;
- (void)_removeObserver;

@end
