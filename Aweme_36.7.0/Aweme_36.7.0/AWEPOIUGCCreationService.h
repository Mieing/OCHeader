@class NSString, NSMutableArray, AWEPOIUGCCreationVideoUploadUtil;
@protocol ACCMusicModelProtocol;

@interface AWEPOIUGCCreationService : NSObject

@property (retain, nonatomic) NSMutableArray *creationInstances;
@property (retain, nonatomic) NSMutableArray *materials;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *musicName;
@property (retain, nonatomic) id<ACCMusicModelProtocol> autoMusicModel;
@property (retain, nonatomic) AWEPOIUGCCreationVideoUploadUtil *videoUploader;
@property (nonatomic) double olderMaxDuration;

- (void)uploadImage:(id)a0 completion:(id /* block */)a1;
- (id)getCertWithBridgeContext:(id)a0;
- (id)getPHAssetWithAssetID:(id)a0 bpeaCert:(id)a1;
- (id)getPHAssetWithAssetsID:(id)a0 bpeaCert:(id)a1;
- (id)getPHAssetsFromMaterials:(id)a0;
- (BOOL)materialsMatching:(id)a0 materials:(id)a1;
- (void)uploadMaterials:(id)a0 bridgeContext:(id)a1;
- (void)poiSelectedAssetLog:(id)a0;
- (void)fileUploadFail:(id)a0 index:(long long)a1 bridgeContext:(id)a2;
- (void)fileUploadSuccess:(id)a0 index:(long long)a1 bridgeContext:(id)a2;
- (id)base64EncodeWithImagePath:(id)a0;
- (long long)materialIndexOf:(id)a0;
- (void)fetchAutoMusicModel;
- (void)downloadAndSetDataWithFileList:(id)a0 bridgeContext:(id)a1 completion:(id /* block */)a2;
- (void)downloadFileWithUrlString:(id)a0 bridgeContext:(id)a1 isVideo:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleDraftMaterialWithCommentID:(id)a0 action:(id)a1 complete:(id /* block */)a2;
- (void)deleteMaterialAtIndex:(long long)a0 materialID:(id)a1;
- (void)startCameraCreationWithImageCount:(long long)a0 defaultTab:(long long)a1 videoConfig:(id)a2 bridgeContext:(id)a3 logParamsDict:(id)a4 complete:(id /* block */)a5;
- (void)startCameraCreationWithImageCount:(long long)a0 defaultShoot:(BOOL)a1 hideEditPage:(BOOL)a2 supportVideo:(BOOL)a3 videoConfig:(id)a4 bridgeContext:(id)a5 logParamsDict:(id)a6 complete:(id /* block */)a7;
- (void)startEditCreationWithInitIndex:(long long)a0 needMusic:(BOOL)a1 hideEditToolbar:(BOOL)a2 editPageToast:(id)a3 logParamsDict:(id)a4 bridgeContext:(id)a5 complete:(id /* block */)a6;
- (void)moveMaterialFromIndex:(long long)a0 toIndex:(long long)a1 complete:(id /* block */)a2;
- (void)requestAlbumImages:(id)a0 bridgeContext:(id)a1 complete:(id /* block */)a2;
- (void)injectCommentPostDataWithFileList:(id)a0 musicID:(id)a1 musicName:(id)a2 bridgeContext:(id)a3;
- (void)getPresetDataWithCommentID:(id)a0 complete:(id /* block */)a1;
- (void)startSilentPublishWithWithRateID:(id)a0 comment:(id)a1 rateGrade:(id)a2 poiID:(id)a3 poiName:(id)a4 selfPageShow:(id)a5 noDefaultLanding:(BOOL)a6 extraParams:(id)a7 challengeID:(id)a8 tabId:(id)a9 toCommentID:(id)a10 bridgeContext:(id)a11;
- (void).cxx_destruct;
- (void)clear;
- (id)getCurrentLocation;
- (id)init;

@end
