@class NSCache, NSMutableArray;

@interface AWEPerfEvaluateScoreQueue : NSObject

@property (retain, nonatomic) NSMutableArray *backupStorageArray;
@property (retain, nonatomic) NSCache *scoreCache;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;

- (void)replaceAllValue:(id)a0;
- (id)currentBackupStorage;
- (float)getLatestValue;
- (float)getAverageValueWithLatestCount:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)pushValue:(float)a0;

@end
