@class AWEElementContainer, NSString, AWEPageContext, UIView, UIViewController;

@interface AWEBaseElement : NSObject <AWEBaseElementProtocol>

@property (weak, nonatomic) AWEElementContainer *elementContainer;
@property (weak, nonatomic) UIView *boxView;
@property (weak, nonatomic) UIView *elementView;
@property (nonatomic) BOOL hasCreateView;
@property (retain, nonatomic) AWEPageContext *context;
@property (weak, nonatomic) AWEElementContainer *elementContainer;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) id data;
@property (readonly, nonatomic, getter=isViewLoaded) BOOL viewLoaded;
@property (copy, nonatomic) NSString *identity;
@property (nonatomic) BOOL appear;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)addSubviewWithLayout:(id)a0;
- (void)viewDidDisposed;
- (void)hide:(BOOL)a0 duration:(double)a1;
- (void)configWithParamDict:(id)a0;
- (void)processAppear:(BOOL)a0;
- (void)addSubviewWithLayout:(id)a0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)addSubviewWithLayout:(id)a0 withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withHeight:(double)a2;
- (void)hide:(BOOL)a0 duration:(double)a1 animations:(id /* block */)a2;
- (void)hide:(BOOL)a0 duration:(double)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 animations:(id /* block */)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;

@end
