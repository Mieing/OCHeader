@class NSArray, MMMemoryRecordInfo, MMMemoryRecordManager, NSObject;
@protocol OS_dispatch_queue, MMMemoryAdapterDelegate;

@interface MMMemoryAdapter : NSObject {
    MMMemoryRecordManager *m_recordManager;
    MMMemoryRecordInfo *m_lastRecord;
    MMMemoryRecordInfo *m_currRecord;
    unsigned long long m_app_launch_time;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pluginReportQueue;
@property (weak, nonatomic) id<MMMemoryAdapterDelegate> delegate;
@property (retain, nonatomic) NSArray *classPrefix;
@property (retain, nonatomic) NSArray *classSuffix;

+ (id)shared;

- (void)onAppLaunch;
- (BOOL)setMatrixFilter:(id)a0 value:(id)a1;
- (void)deleteOldRecords;
- (BOOL)lastLaunchRefineDumpEnabled;
- (BOOL)foundLastRecord;
- (void)getEventTime:(BOOL)a0;
- (BOOL)startWithConfig:(id)a0;
- (void)setVCName:(char *)a0;
- (void)deleteAllRecords;
- (id)recordOfLastRun;
- (id)lastRecordSize;
- (id)recordByLaunchTime:(unsigned long long)a0;
- (void)setCurrentRecordInvalid;
- (void)reportReason:(id)a0;
- (id)directorySizeAtPath:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)stop;
- (void)reportError:(int)a0;
- (id)recordList;
- (void)deleteRecord:(id)a0;

@end
