@interface FlowCommon.FlowBaseViewController : UIViewController {
    void /* unknown type, empty encoding */ onViewDidAppear;
    void /* unknown type, empty encoding */ listViewDidScrollCallback;
    void /* unknown type, empty encoding */ previousUserInterfaceStyle;
    void /* unknown type, empty encoding */ userForceInterfaceStyle;
}

- (void)inAppUserInterfaceStyleDidChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })floatViewSafeArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFloatViewSafeArea;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)handleTap:(id)a0;

@end
