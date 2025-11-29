@class NSMutableDictionary, FTSDB, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FTSIndexEngine : NSObject {
    NSMutableArray *_arrIndexingQueue;
    BOOL _canceled;
    BOOL _pause;
    BOOL _isInIndexingLoop;
    int _currentPriority;
}

@property (retain, nonatomic) FTSDB *ftsDB;
@property (retain, nonatomic) NSMutableArray *arrTask;
@property (retain, nonatomic) NSMutableDictionary *dicTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (id)init;
- (void)registerIndexingManager:(id)a0;
- (void)doInitIndexing;
- (void)stopIndexing;
- (void)doIndexingInPriority:(int)a0;
- (void)doIndexingInPriority:(int)a0 forIndexType:(unsigned long long)a1;
- (void)onReceiveMemoryWarning;
- (void)onRecoverFTSDB;
- (void)onRecoverIndexOfMgr:(unsigned long long)a0 withCallBack:(id /* block */)a1;
- (void)onReceivePauseBackgroundTask:(unsigned long long)a0;
- (void)onReceiveResumeBackgroundTask:(unsigned long long)a0;
- (void).cxx_destruct;

@end
