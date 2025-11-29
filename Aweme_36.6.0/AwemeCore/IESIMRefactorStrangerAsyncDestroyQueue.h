@class NSMutableArray;

@interface IESIMRefactorStrangerAsyncDestroyQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

+ (id)sharedInstance;

- (void)addObj:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;

@end
