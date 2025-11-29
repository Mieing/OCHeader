@class NSString, UIPanGestureRecognizer;

@interface BDSlideViewController : BDPagerViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) BOOL confirmDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewController:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)willBeginTransition;
- (void)removeVC:(id)a0;
- (void)addMaskToVC:(id)a0;
- (void)removeMaskToVC:(id)a0;
- (void)addTargetVC;
- (void)cancelTransition:(id /* block */)a0;
- (void)completeTransition:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pan:(id)a0;
- (void)viewDidLoad;
- (id)panGesture;
- (void)setupUI;

@end
