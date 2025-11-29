@class NSString, NSMutableArray;

@interface AWEExperiencePriorityStack : NSObject

@property (retain, nonatomic) NSMutableArray *elementsList;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (copy, nonatomic) NSString *uniqueKey;

- (id)allStackObjects;
- (BOOL)containObject:(id)a0;
- (void)pop;
- (id)peek;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)init;
- (void)dealloc;

@end
