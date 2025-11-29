@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCDebouncer : NSObject

@property (nonatomic) double delay;
@property (retain, nonatomic) NSMutableDictionary *blocks;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *runQueue;

- (void)debounce:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 queue:(id)a1;

@end
