@class NSString, NSMutableArray;

@interface WCMemoryRecordManager : NSObject {
    NSString *m_rootPath;
    int m_recordMaxCount;
    NSMutableArray *m_recordList;
}

- (id)initWithRecordRootPath:(id)a0 recordMaxCount:(int)a1;
- (id)recordList;
- (id)getRecordByLaunchTime:(unsigned long long)a0;
- (void)sortRecordList;
- (void)loadRecordList;
- (id)oldRecordListPath;
- (void)removeOldData;
- (void).cxx_destruct;

@end
