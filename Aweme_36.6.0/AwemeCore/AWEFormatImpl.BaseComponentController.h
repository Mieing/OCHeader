@interface AWEFormatImpl.BaseComponentController : UIViewController {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ prepareContextForNextContainer;
    void /* unknown type, empty encoding */ prepareContext;
    void /* unknown type, empty encoding */ isPageVisibleSubject;
    void /* unknown type, empty encoding */ isPresentingFullScreenView;
    void /* unknown type, empty encoding */ componentManager;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ isBaseComponentControllerLeaving;
    void /* unknown type, empty encoding */ didReset;
    void /* unknown type, empty encoding */ reuseDelegate;
    void /* unknown type, empty encoding */ isComponentPaused;
    void /* unknown type, empty encoding */ isComponentPlaying;
    void /* unknown type, empty encoding */ isViewAppear;
    void /* unknown type, empty encoding */ isEnterBackground;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
