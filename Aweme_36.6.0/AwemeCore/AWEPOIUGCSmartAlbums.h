@interface AWEPOIUGCSmartAlbums : NSObject

+ (id)getCertWithBridgeContext:(id)a0;
+ (BOOL)isAllowAlbumAnalyzeAlbumSwitchOnStatus;
+ (id)predicateFromFileType:(unsigned long long)a0;
+ (id)fetchAssetsWithIds:(id)a0 beginTime:(double)a1 endTime:(double)a2 fileType:(unsigned long long)a3 bridgeContext:(id)a4 error:(id *)a5;
+ (id)getAssetInfoWithPHFetchResult:(id)a0;
+ (id)getILAAssetWithBridgeContext:(id)a0 beginTime:(double)a1 endTime:(double)a2 count:(long long)a3 fileType:(unsigned long long)a4;
+ (id)tagsClusterFromArray:(id)a0 tagsAssetCount:(long long)a1;
+ (id)filterAssetWithAsset:(id)a0;
+ (int)transFromFileType:(unsigned long long)a0;
+ (id)tramsfromScanResult:(id)a0 asset:(id)a1;
+ (void)saveImageAssetWithAlbums:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestVideoResourceForFetchResult:(id)a0 bridgeContext:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resetAlbumsWithBridgeContext:(id)a0;
+ (long long)permissionErrorCode;
+ (id)permissionMsg;
+ (void)enableSmartAlbums:(double)a0 bridgeContext:(id)a1 completionHandler:(id /* block */)a2;
+ (id)albumsCityInfoWithBridgeContext:(id)a0;
+ (void)scanAlbumsWithBridgeContext:(id)a0 beginTime:(double)a1 endTime:(double)a2 count:(long long)a3 fileType:(unsigned long long)a4 needResInfo:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)searchTagsClusterFromLocalIds:(id)a0 tagsAssetCount:(long long)a1 bridgeContext:(id)a2 completionHandler:(id /* block */)a3;
+ (id)scanAlbumsExifInfoFromLocalIds:(id)a0 beginTime:(double)a1 endTime:(double)a2 page:(long long)a3 count:(long long)a4 bridgeContext:(id)a5;
+ (void)searchWithKeyWords:(id)a0 localIds:(id)a1 beginTime:(double)a2 endTime:(double)a3 fileType:(unsigned long long)a4 unique:(BOOL)a5 bridgeContext:(id)a6 completionHandler:(id /* block */)a7;
+ (void)getAssetTempPath:(id)a0 bridgeContext:(id)a1 completionHandler:(id /* block */)a2;
+ (id)checkAssetValid:(id)a0 bridgeContext:(id)a1;
+ (BOOL)hasPermission;
+ (void)cancelScan;

@end
