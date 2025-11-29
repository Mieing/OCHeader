@class MMMemoryRecordInfo, NSMutableArray;

@interface MMMemoryRecordManager : NSObject {
    NSMutableArray *m_recordList;
    MMMemoryRecordInfo *m_currRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_recordLock;
}

- (id)getRecordByLaunchTime:(unsigned long long)a0;
- (void)insertNewRecord:(id)a0;
- (void)deleteAllRecords;
- (void)deleteOldRecord;
- (void)loadRecordList;
- (void)sortRecordList;
- (void)saveRecordList;
- (id)recordListPath;
- (void).cxx_destruct;
- (id)init;
- (void)updateRecord:(id)a0;
- (id)recordList;
- (void)deleteRecord:(id)a0;

@end
