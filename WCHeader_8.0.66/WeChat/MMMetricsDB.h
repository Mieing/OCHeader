@class NSString, MMMetricsNetworkDB, MMMetricsRootDB, MMMetricsRecordDB;

@interface MMMetricsDB : NSObject {
    NSString *m_rootPath;
    MMMetricsRootDB *m_rootDB;
    MMMetricsRecordDB *m_recordDB;
    MMMetricsNetworkDB *m_networkDB;
}

- (id)initWithRootPath:(id)a0 launchTime:(unsigned long long)a1;
- (id)rootDBPath;
- (id)recordDBPath:(unsigned long long)a0;
- (id)networkDBPath:(unsigned long long)a0;
- (id)currentRecordDB;
- (id)currentNetworkDB;
- (id)openRecordDB:(unsigned long long)a0;
- (id)openNetworkDB:(unsigned long long)a0;
- (void)deleteRecordDB:(unsigned long long)a0;
- (void)deleteAllDB:(unsigned long long)a0;
- (void)vacuumCleaner;
- (void)prepareUpload;
- (id)getAllAppRunningInfos;
- (BOOL)insertOrUpdateAppRunningInfo:(id)a0;
- (BOOL)deleteAppRunningInfo:(id)a0;
- (void).cxx_destruct;

@end
