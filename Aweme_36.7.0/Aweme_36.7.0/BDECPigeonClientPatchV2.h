@class BDECPigeonClientV2;

@interface BDECPigeonClientPatchV2 : NSObject

@property (weak, nonatomic) BDECPigeonClientV2 *client;

- (id)userManager;
- (void)fetchCurrentUserInfoWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserInfoFromCacheWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)batchFetchSerivceInfosWithPigeonBizType:(id)a0 pigeonShopId:(id)a1 conGroupId:(id)a2 pigeonCidList:(id)a3 completion:(id /* block */)a4;
- (void)ecomAuthorFetchECOMImageXTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)ecomFetchVideoTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)ecomPublishVideoWithVid:(id)a0 receiverId:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)ecomUploadImageToTOSWithImageData:(id)a0 imageName:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)ecomTransCodeVideoWithVid:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)batchFetchShopInfosWithShopIds:(id)a0 options:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)batchFetchServiceEntityInfosWithServiceEntityIDs:(id)a0 bizType:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)cacheShopInfo:(id)a0 pigeonBizType:(id)a1;
- (id)shopInfoFromMemoryCache:(id)a0 pigeonBizType:(id)a1;
- (void)shopInfosFromCache:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)ecomFetchECOMImageXTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)ecomAuthorFetchVideoTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)ecomAuthorPublishVideoWithWithPigeonBizType:(id)a0 vid:(id)a1 receiverId:(id)a2 completion:(id /* block */)a3;
- (void)ecomAuthorUploadImageToTOSWithPigeonBizType:(id)a0 imageData:(id)a1 imageName:(id)a2 completion:(id /* block */)a3;
- (void)ecomAuthorTransCodeVideoWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void)ecomAuthorFetchVideoApiTokenWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void)batchFetchShopInfosWithPigeonBizType:(id)a0 extendParams:(id)a1 bizExt:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)fetchCurrentUserPigeonUidWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (id)shopManager;
- (void)fetchShopIdWithPigeonBizType:(id)a0 bizShopId:(id)a1 conGroupId:(id)a2 completion:(id /* block */)a3;
- (void)dealFetchECOMImageXTokenResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (id)generateImageUploadInfoWithWithJsonObj:(id)a0;
- (void)dealFetchImageUrlResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (void)dealFetchVideoTokenResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (id)generateVideoUploadInfoWithJsonObj:(id)a0;
- (void)dealUploadImageToTOSResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (void)dealPublishVideoResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (void)dealTransCodeVideoResultWithError:(id)a0 jsonObj:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldMarkConversationAsReadWithConversation:(id)a0;
- (void)ecomAuthorFetchImageUrlWithPigeonBizType:(id)a0 uri:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)ecomFetchImageUrlWithUri:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
