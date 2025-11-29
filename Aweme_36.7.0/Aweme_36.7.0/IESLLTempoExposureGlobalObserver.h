@class NSMutableArray, CADisplayLink;

@interface IESLLTempoExposureGlobalObserver : NSObject

@property (retain) NSMutableArray *animationObservers;
@property (retain) NSMutableArray *updateObservers;
@property (retain) NSMutableArray *scrollObservers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) int frameRate;
@property (nonatomic) int animationCount;

- (void)onAnimationEnd;
- (void)notifyUpdate:(id)a0;
- (void)onUpdate:(id)a0;
- (void)notifyScroll:(id)a0;
- (void)removeAnimationObserver:(id /* block */)a0;
- (void)addAnimationObserver:(id /* block */)a0;
- (void)onAnimationStart;
- (void)onAnimation:(id)a0;
- (void)onScroll:(id)a0;
- (void)setObserverFrameRate:(int)a0;
- (void)notifyAnimationStart;
- (void)notifyAnimationEnd;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addUpdateObserver:(id /* block */)a0;
- (void)removeUpdateObserver:(id /* block */)a0;
- (void)addScrollObserver:(id /* block */)a0;
- (void)removeScrollObserver:(id /* block */)a0;

@end
