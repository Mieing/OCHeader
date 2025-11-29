@class NSMutableDictionary, CADisplayLink, NSMutableSet, LynxRootUI, LynxGlobalObserver;

@interface LynxUIExposure : NSObject {
    int _frameRate;
    id /* block */ _callback;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) LynxRootUI *rootUI;
@property (retain, nonatomic) NSMutableDictionary *exposedLynxUIMap;
@property (retain, nonatomic) NSMutableSet *uiInWindowMapNow;
@property (retain, nonatomic) NSMutableSet *uiInWindowMapBefore;
@property (retain, nonatomic) NSMutableSet *disappearSet;
@property (retain, nonatomic) NSMutableSet *appearSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lynxViewOldFrame;
@property (retain, nonatomic) LynxGlobalObserver *observer;
@property (nonatomic) BOOL flag;
@property (nonatomic) BOOL enableCheckExposureOptimize;
@property (nonatomic) BOOL isStopExposure;

- (void)prf_exposureHandler:(id)a0;
- (id)initWithObserver_prf:(id)a0;
- (id)UIExposureLastCheckTime;
- (void)setUIExposureLastCheckTime:(id)a0;
- (id)animationObserverLastCheckTime;
- (void)setAnimationObserverLastCheckTime:(id)a0;
- (void)checkLeak;
- (void)setObserverFrameRate:(int)a0;
- (void)exposureHandler:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfUIInWindow:(id)a0;
- (void)destroyExposure;
- (void)addExposureToRunLoop;
- (void)stopExposure:(id)a0;
- (void)resumeExposure;
- (void)setObserverFrameRateDynamic:(id)a0;
- (BOOL)addLynxUI:(id)a0 withUniqueIdentifier:(id)a1 extraData:(id)a2 useOptions:(id)a3;
- (void)removeLynxUI:(id)a0 withUniqueIdentifier:(id)a1;
- (double)getIntersectionAreaRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 otherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)checkIntersect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 otherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ratio:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderOfExposureScreen:(id)a0;
- (BOOL)isLynxViewChanged;
- (void)didExposure;
- (BOOL)uiInWindow:(id)a0;
- (void)sendEvent:(id)a0 eventName:(id)a1;
- (void)addDetailToCustomParamMap:(id)a0 detail:(id)a1;
- (id)createParam:(id)a0;
- (void)sendCustomParamMapEvent:(id)a0 eventName:(id)a1;
- (id)createChildUIResult:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithObserver:(id)a0;
- (void)willMoveToWindow:(BOOL)a0;
- (void)removeFromRunLoop;
- (void)dealloc;
- (void)didMoveToWindow:(BOOL)a0;

@end
