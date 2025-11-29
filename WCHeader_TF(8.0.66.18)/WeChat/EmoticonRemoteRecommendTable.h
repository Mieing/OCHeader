@class MemoryMappedKV, EmoticonRemoteRecommendRecord;

@interface EmoticonRemoteRecommendTable : NSObject

@property (retain, nonatomic) MemoryMappedKV *recordStorage;
@property (retain, nonatomic) MemoryMappedKV *recentUseStorage;
@property (retain, nonatomic) EmoticonRemoteRecommendRecord *headRecord;

+ (void)clearAll;

- (id)requestRecommendForQuery:(id)a0;
- (BOOL)updateRecommend:(id)a0 forQuery:(id)a1;
- (void)clearNoReferencedRecords:(id)a0;
- (id)getAllRecordKeys;
- (unsigned long long)recordFileSize;
- (void)updateRecentUseMd5:(id)a0 lastUsedTime:(unsigned int)a1 refEmoticon:(id)a2;
- (id)getRecentUseRecordForQuery:(id)a0;
- (id)getAllRecentUseQueries;
- (unsigned long long)recentUseFileSize;
- (void)clearNoReferencedRecentUse:(id)a0;
- (void).cxx_destruct;

@end
