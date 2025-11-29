@class NSMutableArray;

@interface BDWebProtocolArray : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) NSMutableArray *innerArray;

- (id)copyAsNSArray;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;

@end
