@class NSMutableArray, AWEStorage, AWEPerfEvaluateScoreQueue;

@interface AWEPerfEvaluateResultManager : NSObject

@property (retain, nonatomic) AWEPerfEvaluateScoreQueue *scoreQueue;
@property (retain, nonatomic) AWEStorage *scoreStorage;
@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;

- (float)getRecentScore;
- (float)getStableScore;
- (float)getInstantScore;
- (BOOL)updateLastestScore:(float)a0;
- (BOOL)validateScore:(float)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)notifyObserver;

@end
