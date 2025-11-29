@class JSApiScopeConfirmWindow, JSAPIScopeConfirmContainterView;

@interface JSApiScopeConfirmViewController : MMUIViewController {
    JSAPIScopeConfirmContainterView *_containerView;
}

@property (weak, nonatomic) JSApiScopeConfirmWindow *weakConfirmWindow;

- (id)initWithWindow:(id)a0;
- (void)viewDidLoad;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
