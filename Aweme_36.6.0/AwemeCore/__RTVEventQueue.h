@class NSMutableArray;

@interface __RTVEventQueue : NSObject {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _accessLock;
}

@property (retain, nonatomic) NSMutableArray *queue;

- (void)pushEvent:(id)a0;
- (id)pop;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)length;

@end
