@class NSMutableArray;

@interface AWENetworkSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (id)syncQueue;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)removeObject:(id)a0;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;

@end
