@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFDDebouncer : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *blocks;
@property (nonatomic) double delay;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)debounce:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithDelay:(double)a0 queue:(id)a1;
- (void)cancel;

@end
