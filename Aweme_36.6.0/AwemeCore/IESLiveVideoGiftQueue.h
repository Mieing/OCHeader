@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveVideoGiftQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (void)enqueue_l:(id)a0;
- (id)dequeueAll;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)dequeue:(unsigned long long)a0;

@end
