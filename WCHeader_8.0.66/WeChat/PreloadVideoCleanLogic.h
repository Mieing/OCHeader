@class NSMutableDictionary, MsgPreloadVideoInfo;

@interface PreloadVideoCleanLogic : NSObject {
    NSMutableDictionary *_dicOldRecord;
    MsgPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (id)init;
- (id)getOldRecordPath;
- (void)loadOldRecord;
- (void)saveOldPreloadRecord;
- (void)cleanOldRecordCache;
- (id)getPreloadVideoInfoPath;
- (id)getPreloadRecordKey:(id)a0;
- (void)loadPreloadRecord;
- (void)savePreloadInfo;
- (BOOL)isAddedTaskOverDailyLimit;
- (void)addPreloadRecord:(id)a0;
- (void)removePreloadRecord:(id)a0 shouldRemoveFile:(BOOL)a1;
- (void)removePreloadRecordByLRU;
- (void)removePreloadTempFile:(id)a0;
- (void)cleanOutOfDatePreloadTempFile:(id)a0;
- (unsigned long long)cleanAllPreloadTempFileWithDownloadingMsg:(id)a0;
- (unsigned long long)cleanAllPreloadTempFileWithRecords:(id)a0;
- (void)setNonAutoCleanForPreloadRecord:(id)a0;
- (unsigned int)getPreloadSizeForRecordId:(id)a0;
- (void)setPreloadSize:(unsigned int)a0 forRecordId:(id)a1;
- (void)onDeleteCacheForChatName:(id)a0;
- (void).cxx_destruct;

@end
