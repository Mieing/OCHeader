@class FTSDB, NSObject;
@protocol OS_dispatch_queue;

@interface FTSIndexMgr : NSObject {
    long long m_preThermalState;
    BOOL _canceled;
}

@property (retain, nonatomic) FTSDB *ftsDB;
@property (nonatomic) unsigned long long iFTSIndexingType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) int currentPriority;

- (id)initWithFTSDB:(id)a0;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)a0;
- (void)iFTSIndexingFinish;
- (void)iFTSIndexingStop;
- (BOOL)iFTSIsCancel;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingPauseBackground;
- (void)iFTSIndexingResumeBackground;
- (double)iFTSIndexingInterval;
- (int)iFTSIndexingCount;
- (void)iFTSClearIndex;
- (void).cxx_destruct;

@end
