@class WCPreloadVideoInfo;

@interface WCPreloadVideoCleanLogic : NSObject {
    WCPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (id)init;
- (id)getPreloadVideoInfoPath;
- (id)getPreloadRecordKey:(id)a0;
- (void)loadPreloadRecord;
- (void)savePreloadInfo;
- (BOOL)isAddedTaskOverDailyLimit;
- (void)addPreloadRecord:(id)a0;
- (void)removePreloadRecord:(id)a0 shouldRemoveFile:(BOOL)a1;
- (void)removePreloadRecordByLRU;
- (void)removePreloadTempFile:(id)a0;
- (void)removeFile:(id)a0;
- (void)cleanOutOfDatePreloadTempFile:(id)a0;
- (void)setNonAutoCleanForPreloadRecord:(id)a0;
- (unsigned int)getPreloadSizeForRecordId:(id)a0;
- (void)setPreloadSize:(unsigned int)a0 forRecordId:(id)a1;
- (unsigned int)getTotalSizeForRecordId:(id)a0;
- (void)setTotalSize:(unsigned int)a0 forRecordId:(id)a1;
- (unsigned int)getPreloadPercentForRecordId:(id)a0;
- (void)setPreloadCompelted:(BOOL)a0 forRecordId:(id)a1;
- (BOOL)isPreloadCompleted:(id)a0;
- (void).cxx_destruct;

@end
