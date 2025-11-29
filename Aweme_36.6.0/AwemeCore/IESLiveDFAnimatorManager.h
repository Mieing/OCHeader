@class NSMutableDictionary, CADisplayLink, NSMapTable, NSArray, NSMutableArray;

@interface IESLiveDFAnimatorManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
    struct __CFRunLoopObserver { } *_pendingListObserver;
}

@property (retain, nonatomic) CADisplayLink *link;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) long long maximumFramesPerSecond;
@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *pendingList;
@property (retain, nonatomic) NSMutableDictionary *animationsMap;
@property (retain, nonatomic) NSMapTable *animToNodeMap;
@property (retain, nonatomic) NSMutableDictionary *frameRateMap;
@property (retain, nonatomic) NSMutableDictionary *disableAnimationFrameRateMap;
@property (retain, nonatomic) NSArray *indexToFrameRate;
@property (retain, nonatomic) NSArray *validframeRateTypes;

+ (id)shared;

- (BOOL)tryToStartDisplayLink;
- (void)setupIndexToFrameRate;
- (BOOL)tryToStopDisplayLink;
- (void)_clearPendingListObserver;
- (id)objectKeyWithObject:(id)a0;
- (void)removeAnimationNode:(id)a0;
- (void)_setInFrameRateMapWithNode:(id)a0 withRateType:(long long)a1;
- (void)_updatePendingListObserver;
- (id)animationNodeForKey:(id)a0 withObject:(id)a1;
- (id)_frameRateMapWithAnimation:(id)a0;
- (void)_renderWithAnimations:(id)a0 atTime:(double)a1;
- (void)_renderWithDisableAnimations:(id)a0 atTime:(double)a1;
- (void)_processPendingList;
- (void)addAnimation:(id)a0 forObject:(id)a1 key:(id)a2;
- (void)removeAnimationForObject:(id)a0 key:(id)a1;
- (void)removeAnimation:(id)a0 forObject:(id)a1;
- (void)removeAllnimationForObject:(id)a0;
- (id)animationForKey:(id)a0 object:(id)a1;
- (void)animationFrameRateDidChange:(id)a0 oldValue:(long long)a1 newValue:(long long)a2;
- (void).cxx_destruct;
- (void)updateDisplayLink;
- (id)init;
- (void)dealloc;
- (void)render;

@end
