@class NSString;

@interface AWECloudAlbumServiceImpl : NSObject <ACCCloudAlbumServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)cloudAlbumSwitch;
- (void)checkAuthorization:(id /* block */)a0;
- (void)pauseUploadTask:(id)a0 completion:(id /* block */)a1;
- (void)resumeUploadTask:(id)a0 completion:(id /* block */)a1;
- (void)removeAssetsAlbumId:(unsigned long long)a0 assetIds:(id)a1 completion:(id /* block */)a2;
- (void)uploadAssetsWithAlbumID:(long long)a0 assetModels:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkValidForAssets:(id)a0 availableSpace:(long long)a1 error:(id *)a2;
- (id)copyOriginSandboxAssetPath:(id)a0;
- (id)importModelWithACCModel:(id)a0;
- (void)trackAddAssetFor:(long long)a0 assetIDs:(id)a1 step:(long long)a2 error:(id)a3;
- (long long)calculateAssetsSize:(id)a0;
- (BOOL)verifyVideoLength:(id)a0;
- (long long)calculatePHAssetsSize:(id)a0;
- (long long)calculateSandboxAssetsSize:(id)a0;
- (id)cloudAlbumTempUploadFile:(id)a0;
- (BOOL)cloudAlbumABEnable;
- (BOOL)cloudAlbumEmergencySwitch;
- (void)uploadCameraAlbumWithAssets:(id)a0 completion:(id /* block */)a1;
- (void)removeCameraAlbumAssetIds:(id)a0 completion:(id /* block */)a1;

@end
