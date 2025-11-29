@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BDDPScrollMonitor : NSObject

@property (nonatomic) BOOL asynNotify;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL scrolling;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (void)bddp_scrollViewDelegate:(id)a0;
+ (void)setUpWithConfig:(int)a0 asynNotify:(BOOL)a1;
+ (id)shared;

- (void)onScrollDidEnd:(id)a0;
- (void)onScrollDidBegin:(id)a0;
- (void)bddp_setScrollViewDelegate:(id)a0;
- (void)notifyObserverIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
