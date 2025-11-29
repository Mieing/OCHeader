@class UIViewController;

@interface AWEWebViewAppearanceStateUpdater : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ viewWillAppear;
@property (copy, nonatomic) id /* block */ viewDidAppear;
@property (copy, nonatomic) id /* block */ viewWillDisappear;
@property (copy, nonatomic) id /* block */ viewDidDisappear;

- (void)onViewWillAppear:(BOOL)a0;
- (void)onViewDidAppear:(BOOL)a0;
- (void)onViewWillDisppear:(BOOL)a0;
- (void)onViewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;

@end
