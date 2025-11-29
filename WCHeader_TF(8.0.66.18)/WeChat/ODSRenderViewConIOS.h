@class UIView;

@interface ODSRenderViewConIOS : UIViewController {
    void *_touchManager;
}

@property (nonatomic) struct XSimpleFunction { struct unique_ptr<XSimpleFunction::Concept, std::default_delete<XSimpleFunction::Concept>> { struct __compressed_pair<XSimpleFunction::Concept *, std::default_delete<XSimpleFunction::Concept>> { struct Concept *__value_; } __ptr_; } _backingFunc; } willLayoutSubviewNotifunc;
@property (nonatomic) struct XSimpleFunction { struct unique_ptr<XSimpleFunction::Concept, std::default_delete<XSimpleFunction::Concept>> { struct __compressed_pair<XSimpleFunction::Concept *, std::default_delete<XSimpleFunction::Concept>> { struct Concept *__value_; } __ptr_; } _backingFunc; } willAppearNotifunc;
@property (nonatomic) struct XSimpleFunction { struct unique_ptr<XSimpleFunction::Concept, std::default_delete<XSimpleFunction::Concept>> { struct __compressed_pair<XSimpleFunction::Concept *, std::default_delete<XSimpleFunction::Concept>> { struct Concept *__value_; } __ptr_; } _backingFunc; } willDisappearNotifunc;
@property (nonatomic) struct function<void (CGSize, CGAffineTransform, double)> { struct __value_func<void (CGSize, CGAffineTransform, double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } willTransitToSizeNotifunc;
@property (nonatomic) struct function<void (CGSize, CGAffineTransform)> { struct __value_func<void (CGSize, CGAffineTransform)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } didTransitToSizeNotifunc;
@property (readonly, nonatomic) UIView *renderView;
@property (readonly, nonatomic) struct SharedPtr<XDSInputManager> { struct XDSInputManager *_ptr; } inputManager;

- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setupInternal;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)notifyAttachedByWindowCon;
- (void)notifyDetachedByWindowCon;
- (void)bridgeTouches:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
