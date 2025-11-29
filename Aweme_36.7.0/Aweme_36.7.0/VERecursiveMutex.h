@interface VERecursiveMutex : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
}

- (int)trylock;
- (int)unlock;
- (int)lock;
- (id)init;
- (void)dealloc;

@end
