@class NSMutableArray, CADisplayLink;
@protocol POPAnimatorDelegate;

@interface POPAnimator : NSObject {
    CADisplayLink *_displayLink;
    struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long __value_; } __size_alloc_; } _list;
    struct __CFDictionary { } *_dict;
    NSMutableArray *_observers;
    struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long __value_; } __size_alloc_; } _pendingList;
    struct __CFRunLoopObserver { } *_pendingListObserver;
    double _slowMotionStartTime;
    double _slowMotionLastTime;
    double _slowMotionAccumulator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) BOOL disableDisplayLink;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id<POPAnimatorDelegate> delegate;

+ (id)sharedAnimator;
+ (BOOL)disableBackgroundThread;
+ (void)setDisableBackgroundThread:(BOOL)a0;

- (id)init;
- (void)dealloc;
- (void)_processPendingList;
- (void)_clearPendingListObserver;
- (void)_scheduleProcessPendingList;
- (void)_renderTime:(double)a0 items:(struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> { struct __list_node_base<std::shared_ptr<POPAnimatorItem>, void *> { void *x0; void *x1; } x0; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<POPAnimatorItem>, void *>>> { unsigned long long x0; } x1; })a1;
- (void)_renderTime:(double)a0 item:(struct shared_ptr<POPAnimatorItem> { struct POPAnimatorItem *x0; struct __shared_weak_count *x1; })a1;
- (id)observers;
- (void)addAnimation:(id)a0 forObject:(id)a1 key:(id)a2;
- (void)removeAllAnimationsForObject:(id)a0;
- (void)removeAnimationForObject:(id)a0 key:(id)a1 cleanupDict:(BOOL)a2;
- (void)removeAnimationForObject:(id)a0 key:(id)a1;
- (id)animationKeysForObject:(id)a0;
- (id)animationForObject:(id)a0 key:(id)a1;
- (double)_currentRenderTime;
- (void)render;
- (void)renderTime:(double)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
