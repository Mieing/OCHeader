@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDUploaderObjectManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMapTable *weakObjectMap;

+ (id)sharedManager;

- (id)objectBykey:(id)a0;
- (void)async:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
