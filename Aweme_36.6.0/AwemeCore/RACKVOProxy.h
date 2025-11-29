@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface RACKVOProxy : NSObject

@property (readonly, nonatomic) NSMapTable *trampolines;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedProxy;

- (void)addObserver:(id)a0 forContext:(void *)a1;
- (void)removeObserver:(id)a0 forContext:(void *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
