@class WCTDatabase, WCTTable;

@interface MMMetricsNetworkDB : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_tableNetworkSample;
    WCTTable *m_tableStackInfo;
    WCTTable *m_tableImageInfo;
}

- (id)initWithDBPath:(id)a0;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)vacuumCleaner;
- (BOOL)runTransaction:(id /* block */)a0;
- (BOOL)insertNetworkSamples:(id)a0;
- (id)getNetworkSamplesFrom:(double)a0 to:(double)a1;
- (BOOL)insertImageInfos:(id)a0;
- (id)getAllImageInfos;
- (void).cxx_destruct;

@end
