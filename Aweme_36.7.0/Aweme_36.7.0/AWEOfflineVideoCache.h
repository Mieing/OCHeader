@class NSMutableDictionary, IESWCDatabase, AWEOfflineVideoCenterModel, AWEStorageFilePermanent, NSLock;

@interface AWEOfflineVideoCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *awemeModelCaches;
@property (retain, nonatomic) IESWCDatabase *awemeDB;
@property (retain, nonatomic) IESWCDatabase *fileRecordDB;
@property (retain, nonatomic) AWEStorageFilePermanent *filePermanent;
@property (retain, nonatomic) AWEOfflineVideoCenterModel *centerModel;
@property (retain, nonatomic) NSLock *centerModelCacheLock;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) BOOL wcdbToTwo;

+ (long long)offlineCenterCanUseMaxStorageGB;
+ (id)sharedInstance;

- (void)createTable;
- (void)cacheAwemeModels:(id)a0;
- (long long)availableStorageGB;
- (id)awemeModelFromSingleSourceModel:(id)a0;
- (void)deleteDownloadedResourceModel:(id)a0;
- (void)addFileLostGroupResourceModelToDownloading:(id)a0;
- (void)deleteInvalidVideoWithItemIDs:(id)a0;
- (void)addPartFileLostGroupResourceModelToDownloading:(id)a0;
- (void)asyncStorageCenterModel;
- (void)deleteDownloadingResourceModel:(id)a0;
- (id)awemeDBTableName;
- (void)rejoinToDownloading:(id)a0 withState:(unsigned long long)a1;
- (void)removeAllLocalPush;
- (void)initCenterModel;
- (void)downloadResourceStatusUpdateNotification:(id)a0;
- (void)downloadResourceModelUpdateNotification:(id)a0;
- (void)setupAfterInitModel;
- (void)asyncUpdateAwemeModelWithResources:(id)a0;
- (id)awemeModelFromItemID:(id)a0;
- (id)validAwemeModelFromModel:(id)a0;
- (void)cacheAwemeDBModel:(id)a0;
- (id)fileRecordDBTableName;
- (void)p_createWCDBTwoTable;
- (void)p_createWCDBOneTable;
- (void)deleteAllDownloadingModels;
- (void)deleteAllModels;
- (void)deleteAwemeDBModelFormResourceModel:(id)a0;
- (void)addFileLostSignalResourceModelToDownloading:(id)a0;
- (void)checkDownloadedModelFile;
- (void)cacheAwemeModel:(id)a0;
- (id)getOfflineVideoCenterModel;
- (void)cacheAwemeDownloadRecord:(id)a0;
- (BOOL)canDeleteFileFromAwemeModel:(id)a0;
- (void)deleteDownloadRecordWithAwemeModel:(id)a0;
- (void)cacheCommentsWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)dbFilePath;
- (id)init;
- (void)reset;
- (void)setup;

@end
