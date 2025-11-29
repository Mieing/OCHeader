@class WCTDatabase, WCTTable;

@interface MMMetricsRecordDB : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_tableMetricsInfo;
    WCTTable *m_tableStackInfo;
    WCTTable *m_tableImageInfo;
    WCTTable *m_tableThreadInfo;
    WCTTable *m_tableCpuThreadSample;
    WCTTable *m_tableGpuRenderSample;
    WCTTable *m_tableLocationTask;
    WCTTable *m_tableAudioTask;
    WCTTable *m_tableBusinessData;
}

- (id)initWithDBPath:(id)a0;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)vacuumCleaner;
- (BOOL)runTransaction:(id /* block */)a0;
- (BOOL)insertMetricsInfos:(id)a0;
- (id)getMetricsInfosFrom:(double)a0 to:(double)a1;
- (id)getLastMetricsInfos:(int)a0;
- (BOOL)insertThreadInfos:(id)a0;
- (id)getThreadInfosFrom:(double)a0 to:(double)a1;
- (BOOL)insertCpuThreadSamples:(id)a0;
- (id)getCpuThreadSamplesFrom:(double)a0 to:(double)a1 minUsage:(float)a2;
- (id)getCpuThreadSamplesFrom:(double)a0 to:(double)a1 minUsage:(float)a2 threadID:(unsigned int)a3;
- (BOOL)insertGpuRenderSamples:(id)a0;
- (id)getGpuRenderSamplesFrom:(double)a0 to:(double)a1;
- (BOOL)insertOrUpdateLocationTask:(id)a0;
- (BOOL)insertLocationTasks:(id)a0;
- (id)getLocationTasksFrom:(double)a0 to:(double)a1;
- (BOOL)insertOrUpdateAudioTask:(id)a0;
- (BOOL)insertAudioTasks:(id)a0;
- (id)getAudioTasksFrom:(double)a0 to:(double)a1;
- (BOOL)insertImageInfos:(id)a0;
- (id)getAllImageInfos;
- (BOOL)insertBusinessDatas:(id)a0;
- (id)getBusinessDatasFrom:(double)a0 to:(double)a1;
- (void).cxx_destruct;

@end
