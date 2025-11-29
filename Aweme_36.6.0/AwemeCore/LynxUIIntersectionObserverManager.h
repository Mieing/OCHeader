@class LynxContext, CADisplayLink, LynxUIOwner, NSMutableArray;

@interface LynxUIIntersectionObserverManager : NSObject <LynxEventObserver> {
    NSMutableArray *observers_;
}

@property (weak, nonatomic) LynxContext *context;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) LynxUIOwner *uiOwner;
@property (readonly, nonatomic) BOOL enableNewIntersectionObserver;

- (id)initWithLynxContext:(id)a0;
- (void)onLynxEvent:(long long)a0 event:(id)a1;
- (void)addIntersectionObserver:(id)a0;
- (id)getObserverById:(long long)a0;
- (void)removeAttachedIntersectionObserver:(id)a0;
- (void)removeIntersectionObserver:(long long)a0;
- (void)setEnableNewIntersectionObserver:(BOOL)a0;
- (void)addIntersectionObserverToRunLoop;
- (void)destroyIntersectionObserver;
- (void)intersectionObserverHandler:(id)a0;
- (void).cxx_destruct;
- (void)notifyObservers;
- (void)reset;
- (void)removeFromRunLoop;
- (void)didMoveToWindow:(BOOL)a0;

@end
