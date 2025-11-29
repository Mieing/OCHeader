@class AWEStudioCaptionEmbeddingStorageManager, NSLock, NSMutableDictionary, AWEStudioCaptionEmbeddingUploader, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioCaptionEmbeddingDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *highPriorityResultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) BOOL canUpload;
@property (retain, nonatomic) NSMutableArray *needUploadAssetArray;
@property (retain, nonatomic) NSMutableArray *uploadingAssetArray;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingUploader *uploader;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingUploader *highPriorityUploader;
@property (retain, nonatomic) AWEStudioCaptionEmbeddingStorageManager *storageManager;
@property (nonatomic) long long maxCacheEmbCount;
@property (retain, nonatomic) NSMutableArray *needRescanEmbAssetArray;
@property (retain, nonatomic) NSMutableSet *p_hadUpdatedVersionSet;
@property (retain, nonatomic) NSLock *updatedVersionSetLock;
@property (retain, nonatomic) NSMutableArray *highPriorityNeedUploadAssetArray;
@property (retain, nonatomic) NSMutableDictionary *assetStateDict;

- (void)forceUpdateTotalUploadCount;
- (id)getAllUploadedAssetIDs;
- (id)getHasUploadedLocationAssetIDList;
- (id)getNeedUploadLocationAssetIDList;
- (void)saveUploadedAssetID:(id)a0 version:(id)a1;
- (void)updateCanUploadState:(BOOL)a0;
- (long long)totalUploadCount;
- (void)embDataVersionUpdated:(id)a0;
- (id)getAllUploadedAssetIDsForVersion:(id)a0;
- (BOOL)hasUploadEmb:(id)a0 withVersion:(id)a1;
- (BOOL)hasCachedCaptionEmbFor:(id)a0 frameTime:(long long)a1 version:(id)a2;
- (id)getAllNeedRescanEmbAssets;
- (void)cacheCaptionEmb:(id)a0 embVersion:(id)a1 forAsset:(id)a2 frameTime:(long long)a3 isFinished:(BOOL)a4;
- (void)clearNeedRescanEmbAssetArray;
- (void)clearHighPriorityCacheData;
- (BOOL)highPriorityCacheCaptionEmb:(id)a0 embVersion:(id)a1 forAsset:(id)a2 frameTime:(long long)a3 isFinished:(BOOL)a4;
- (void)uploadAllHighPriorityNeedUploadAssetArrayWithVersion:(id)a0 completion:(id /* block */)a1;
- (id)getLivePhotoDurationForAsset:(id)a0;
- (void)saveNeedUploadLocationAssetWithIDList:(id)a0;
- (void)saveHasUploadedLocationAssetIDList:(id)a0;
- (BOOL)removeUploadAssetIDList:(id)a0;
- (void)p_tryUploadAsset;
- (BOOL)canCacheEmbForVersion:(id)a0;
- (void)saveNeedScanEmbAssetID:(id)a0;
- (void)p_addAssetIDToNeedUploadAssetIDArray:(id)a0;
- (void)saveUploadedAssetIDList:(id)a0 version:(id)a1;
- (void)notifyNeedUploadAssetIDsCountChanged;
- (void)notifyUploadingAssetIDCountChanged;
- (void)p_removeAssetIDFromNeedUploadAssetIDArray:(id)a0;
- (void)p_addAssetIDToUploadingAssetIDArray:(id)a0;
- (void)p_removeAssetIDFromUploadingAssetIDArray:(id)a0;
- (void)cleanAllHasUploadedLocationAssetIDList;
- (void).cxx_destruct;
- (id)init;
- (void)clearAllData;

@end
