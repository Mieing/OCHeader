@class NSString, HMDMonitorRecord, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDMonitorStorageDelegate;

@interface HMDMonitorCurve : NSObject {
    double lastFlushTimestamp;
    double _startTimestamp;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _recordRWLock;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL dropData;
@property (retain, nonatomic) NSMutableArray *diagnosingKeys;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) HMDMonitorRecord *currentRecord;
@property (readonly, nonatomic) HMDMonitorRecord *maxRecord;
@property (readonly, nonatomic) HMDMonitorRecord *minRecord;
@property (nonatomic) Class recordClass;
@property (nonatomic) unsigned long long flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) BOOL performanceReportEnable;
@property (weak, nonatomic) id<HMDMonitorStorageDelegate> storageDelegate;

- (void)dropAllDataForServerState;
- (void)pushRecordToDBImmediately:(id)a0;
- (void)updateRecord:(id)a0 forceWrite:(BOOL)a1;
- (void)pushRecordImmediately;
- (id)recordsInAppTimeFrom:(double)a0 to:(double)a1 sessionID:(id)a2 recordClass:(Class)a3;
- (void)asyncActionOnCurveQueue:(id /* block */)a0;
- (void)dropDataForServerState:(BOOL)a0;
- (id)initWithCurveName:(id)a0 recordClass:(Class)a1;
- (void)pushRecord:(id)a0;
- (void)applicationEnterBackground:(id)a0;
- (void)recordDataDirectly:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
