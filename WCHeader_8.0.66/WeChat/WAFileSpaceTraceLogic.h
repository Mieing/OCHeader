@class NSString, WAFileSpaceStatus;
@protocol WAFileSpaceTraceLogicScanDataSource;

@interface WAFileSpaceTraceLogic : NSObject {
    WAFileSpaceStatus *m_status;
}

@property unsigned int lastUpdateStatusTime;
@property (readonly, nonatomic) NSString *localIdPrefix;
@property (weak, nonatomic) id<WAFileSpaceTraceLogicScanDataSource> scanSource;
@property unsigned long long scanPhase;
@property (nonatomic) unsigned int updateCountSinceLastScan;

- (id)initWithLocalIdPrefix:(id)a0;
- (void)loadStatus;
- (void)saveStatus;
- (void)saveStatusToMMKV;
- (unsigned long long)currentTotalFileSize;
- (unsigned long long)fileSizeOfAppId:(id)a0;
- (id)getStatusAppItemWithAppId:(id)a0;
- (void)setStatusAppItemWithAppId:(id)a0 appItem:(id)a1;
- (void)addFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withAppID:(id)a2;
- (void)removeFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withAppID:(id)a2;
- (void)removeItemAndUpdateTotalSize:(id)a0;
- (id)allAppId;
- (id)arrSortAppItem;
- (id)statusFilePath;
- (id)statusKey;
- (BOOL)isTimeForSaveStatus;
- (id)getAllUsrDirList;
- (void)removeAppIdNotInArray:(id)a0;
- (void)scanAndUpdateStatus;
- (void)reportIDKeyUsrSpaceTraceDiffWithRecordSize:(long long)a0 actualSize:(long long)a1;
- (void)scanDirectoryUnrecursively:(id)a0 retFileCount:(unsigned int *)a1 retFileSize:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
