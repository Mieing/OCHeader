@class NSArray, LynxUIIntersectionObserverManager, LynxUI, NSMutableArray;

@interface LynxUIIntersectionObserver : NSObject

@property (nonatomic) long long observerId;
@property (nonatomic) float marginLeft;
@property (nonatomic) float marginRight;
@property (nonatomic) float marginTop;
@property (nonatomic) float marginBottom;
@property (retain, nonatomic) NSArray *thresholds;
@property (nonatomic) long long initialRatio;
@property (nonatomic) BOOL observeAll;
@property (nonatomic) BOOL isCustomEventObserver;
@property (weak, nonatomic) LynxUIIntersectionObserverManager *manager;
@property (weak, nonatomic) LynxUI *container;
@property (weak, nonatomic) LynxUI *root;
@property (nonatomic) BOOL relativeToScreen;
@property (retain, nonatomic) NSMutableArray *observationTargets;
@property (nonatomic) BOOL enableNewIntersectionObserver;
@property (readonly, weak, nonatomic) LynxUI *attachedUI;

- (void)parseMargin:(id)a0;
- (id)initWithManager:(id)a0 observerId:(long long)a1 componentId:(id)a2 options:(id)a3;
- (void)relativeTo:(id)a0 margins:(id)a1;
- (void)relativeToViewportWithMargins:(id)a0;
- (void)relativeToScreenWithMargins:(id)a0;
- (void)observe:(id)a0 callbackId:(long long)a1;
- (id)initWithOptions:(id)a0 manager:(id)a1 attachedUI:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getRootRect;
- (void)checkForIntersectionWithTarget:(id)a0 rootRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isInitial:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeTargetAndRootIntersection:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rootRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)hasCrossedThreshold:(id)a0 newEntry:(id)a1;
- (void)checkForIntersections;
- (void).cxx_destruct;
- (void)disconnect;

@end
