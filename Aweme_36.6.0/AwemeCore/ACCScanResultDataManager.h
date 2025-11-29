@class NSString, NSMutableDictionary;

@interface ACCScanResultDataManager : NSObject <ACCScanResultDataManagerStudioProxy>

@property (retain, nonatomic) NSMutableDictionary *trackIds;
@property (retain, nonatomic) NSMutableDictionary *scanCacheLastData;
@property (nonatomic) double begainaddPictureInterval;
@property (retain, nonatomic) NSMutableDictionary *takePhotoOrAlbumSelectMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scanIdConvertWithTrackId:(float)a0;
+ (id)convertBoxWithIERect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)convertCenterWithPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)convertSrcImageWithImageBitmapData:(void *)a0 imageBitmapSize:(struct CGSize { double x0; double x1; })a1;
+ (id)convertBoxWithSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)saveScanItemToLocalWithItem:(id)a0 pictureScan:(BOOL)a1;
+ (id)creatScanId;
+ (id)tempCacheDirectory;
+ (void)deletedUidHistoryIfNeed;
+ (id)itemCacheDirectory;
+ (void)deletedCacheResultWithScanId:(id)a0;
+ (id)creatId;
+ (BOOL)saveScanIdToLocal:(id)a0;
+ (id)scanResultConvertToIERender:(id)a0;
+ (id)scanRealTimeGetScanScriptWithTrackId:(id)a0;
+ (id)getCentermostObjectWithScanResult:(id)a0;
+ (id)scanRealtimeHandleOpenSearchPageWithTrackId:(id)a0 realTimeTakeImage:(id)a1;
+ (id)scanTakePhotoOpenSearchPageWithScanId:(id)a0;
+ (void)saveScanTakePhotoToHistoryWithImage:(id)a0 scanId:(id)a1;
+ (void)takePhotoOrAlbumSelectSaveMemoryImageWithKey:(id)a0 image:(id)a1;
+ (id)takePhotoOrAlbumSelectGetImageWithKey:(id)a0;
+ (id)publishConvertLocalPathWithImageData:(id)a0;
+ (id)getScanHistory;
+ (void)deletedScanHistoryWithIds:(id)a0;
+ (void)setTosUri:(id)a0 forScanId:(id)a1;
+ (void)clearTempData;
+ (void)clearMemoryData;
+ (id)backUpOrDraftRectConvertToSearchRect:(id)a0;
+ (id)searchRectConvertToSticker:(id)a0;
+ (id)defaultManager;
+ (id)recordCacheDirectory;
+ (id)imageCacheDirectory;

- (void)sendMonitor:(BOOL)a0 pictureScan:(BOOL)a1;
- (void).cxx_destruct;

@end
