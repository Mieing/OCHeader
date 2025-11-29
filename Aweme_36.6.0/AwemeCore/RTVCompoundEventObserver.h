@class NSString, NSMutableArray;

@interface RTVCompoundEventObserver : NSObject <RTVEventObserver> {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
    BOOL _disposed;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) BOOL isDisposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundEventObserver;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)dispose;
- (id).cxx_construct;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
