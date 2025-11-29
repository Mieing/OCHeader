@class NSMutableArray, CADisplayLink;

@interface LynxGlobalObserver : NSObject

@property (retain) NSMutableArray *animationObservers;
@property (retain) NSMutableArray *layoutObservers;
@property (retain) NSMutableArray *scrollObservers;
@property (retain) NSMutableArray *propertyObservers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) int frameRate;
@property (nonatomic) int animationCount;

- (void)notifyScroll:(id)a0;
- (void)removeAnimationObserver:(id /* block */)a0;
- (void)addAnimationObserver:(id /* block */)a0;
- (void)onAnimationStart;
- (void)onAnimationEnd;
- (void)onAnimation:(id)a0;
- (void)onScroll:(id)a0;
- (void)setObserverFrameRate:(int)a0;
- (void)notifyAnimationStart;
- (void)notifyAnimationEnd;
- (void)onLayout:(id)a0;
- (void)onProperty:(id)a0;
- (void)notifyLayout:(id)a0;
- (void)addPropertyObserver:(id /* block */)a0;
- (void)removePropertyObserver:(id /* block */)a0;
- (void)notifyProperty:(id)a0;
- (void)removeLayoutObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addLayoutObserver:(id /* block */)a0;
- (void)dealloc;
- (void)addScrollObserver:(id /* block */)a0;
- (void)removeScrollObserver:(id /* block */)a0;

@end
