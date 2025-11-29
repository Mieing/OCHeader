@class NSString, WCTDatabase, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioCaptionEmbeddingStorageManager : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (copy, nonatomic) id /* block */ databaseComletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableArray *stashEmbDataArray;
@property (retain, nonatomic) NSString *stashEmbDataAssetID;
@property (retain, nonatomic) NSMutableArray *highPriorityStashEmbDataArray;
@property (retain, nonatomic) NSString *highPriorityStashEmbDataAssetID;
@property (nonatomic) BOOL hasTriggerGetTotalUploadCount;
@property (readonly, nonatomic) long long totalUploadCount;

+ (id)DBPath;

- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)forceUpdateTotalUploadCount;
- (id)getAllUploadedAssetIDs;
- (id)getHasUploadedLocationAssetIDList;
- (id)getNeedUploadLocationAssetIDList;
- (void)saveUploadedAssetID:(id)a0 version:(id)a1;
- (id)getAllUploadedAssetIDsForVersion:(id)a0;
- (void)saveNeedUploadLocationAssetWithIDList:(id)a0;
- (void)saveHasUploadedLocationAssetIDList:(id)a0;
- (void)deleteAllPriorityEmbeddingStorageData;
- (void)deleteAllCachedEmbData;
- (id)initWithDatabaseComletion:(id /* block */)a0;
- (void)triggerGetTotalUploadCount;
- (void)deleteEmbDataNotMatchVersion:(id)a0;
- (void)deleteUploadedAssetIDNotMatchVersion:(id)a0;
- (BOOL)hasAssetIDUploaded:(id)a0 version:(id)a1;
- (void)clearStashedEmbData;
- (BOOL)isEmbeddingDataExistForAssetID:(id)a0 frameTime:(long long)a1 vesion:(id)a2;
- (BOOL)saveEmbeddingData:(id)a0 forAssetID:(id)a1 frameTime:(long long)a2 version:(id)a3 isFinished:(BOOL)a4;
- (long long)cachedEmbDataCountForVersion:(id)a0;
- (void)saveUploadedAssetIDList:(id)a0 version:(id)a1;
- (BOOL)deleteUploadedAssetIDList:(id)a0;
- (id)embeddingStorageModelForAssetID:(id)a0;
- (void)deleteEmbeddingDataForAssetID:(id)a0;
- (BOOL)isHighPriorityEmbeddingDataExistForAssetID:(id)a0 frameTime:(long long)a1 vesion:(id)a2;
- (BOOL)highPrioritySaveEmbeddingData:(id)a0 forAssetID:(id)a1 frameTime:(long long)a2 version:(id)a3 isFinished:(BOOL)a4;
- (id)highPriorityEmbeddingStorageModelForAssetID:(id)a0;
- (void)cleanAllHasUploadedLocationAssetIDList;
- (void).cxx_destruct;
- (void)clearAllData;

@end
