@class NSString, MBFileSpaceStatus;
@protocol MBFileSpaceTraceLogicScanDataSource;

@interface MBFileSpaceTraceLogic : NSObject {
    MBFileSpaceStatus *m_status;
}

@property unsigned int lastUpdateStatusTime;
@property (readonly, nonatomic) NSString *localIdPrefix;
@property (weak, nonatomic) id<MBFileSpaceTraceLogicScanDataSource> scanSource;
@property unsigned long long scanPhase;
@property (nonatomic) unsigned int updateCountSinceLastScan;

- (id)initWithLocalIdPrefix:(id)a0;
- (void)loadStatus;
- (void)saveStatus;
- (void)saveStatusToMMKV;
- (unsigned long long)currentTotalFileSize;
- (unsigned long long)fileSizeOfBizName:(id)a0;
- (id)getStatusBizItemWithBizName:(id)a0;
- (void)setStatusBizItemWithBizName:(id)a0 bizItem:(id)a1;
- (void)addFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withBizName:(id)a2;
- (void)removeFileSize:(unsigned long long)a0 contentModifyTime:(unsigned int)a1 withBizName:(id)a2;
- (void)removeItemAndUpdateTotalSize:(id)a0;
- (id)allBizName;
- (id)arrSortBizItem;
- (id)statusFilePath;
- (id)statusKey;
- (BOOL)isTimeForSaveStatus;
- (id)getAllUsrDirList;
- (void)removeBizNameNotInArray:(id)a0;
- (void)scanAndUpdateStatus;
- (void)reportIDKeyUsrSpaceTraceDiffWithRecordSize:(long long)a0 actualSize:(long long)a1;
- (void)scanDirectoryUnrecursively:(id)a0 retFileCount:(unsigned int *)a1 retFileSize:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
