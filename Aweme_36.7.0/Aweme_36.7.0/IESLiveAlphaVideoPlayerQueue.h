@class NSMutableArray;

@interface IESLiveAlphaVideoPlayerQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) NSMutableArray *array;

- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeue;
- (void)dealloc;

@end
