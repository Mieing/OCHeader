@class UITapGestureRecognizer, UIViewController, UIView;
@protocol RTVXRMainViewController, RTVXRNarrowDrawerViewDelegate, RxInjector, RTVNarrowViewHelperInterface, RTVXRStateRecorder;

@interface RTVXRNarrowDrawerView : UIView

@property (nonatomic) double arrowDrawerWidth;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVNarrowViewHelperInterface> narrowHelper;
@property (weak, nonatomic) UIViewController<RTVXRMainViewController> *mainVC;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (retain, nonatomic) UIView *drawerContainer;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *leftDrawer;
@property (retain, nonatomic) UITapGestureRecognizer *leftTap;
@property (retain, nonatomic) UIView *rightDrawer;
@property (retain, nonatomic) UITapGestureRecognizer *rightTap;
@property (weak, nonatomic) id<RTVXRNarrowDrawerViewDelegate> delegate;

- (void)rxAwakeFromPropertyInjection;
- (void)__addObserver;
- (void)__setupViewInSuperView:(id)a0;
- (double)__narrowOutOfScreenDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__didTapedDrawer:(id)a0;
- (void)renderInSuperView:(id)a0;
- (BOOL)isDisplayingDrawer;
- (void)updateLayerAlphaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
