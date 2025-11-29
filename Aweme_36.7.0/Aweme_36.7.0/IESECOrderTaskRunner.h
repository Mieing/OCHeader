@class NSMutableArray;

@interface IESECOrderTaskRunner : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _taskLock;
}

@property (retain, nonatomic) NSMutableArray *tasks;

+ (id)sharedInstance;

- (id)currentRunningTask;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)start;
- (void)doNext;

@end
