@class AWEPOIUGCCreationService;

@interface AWEPOIUGCCreationUpload : NSObject

@property (retain, nonatomic) AWEPOIUGCCreationService *creationService;

+ (id)videoHostName;
+ (id)sharedManager;

- (void)uploadImageWithList:(id)a0 paramModel:(id)a1;
- (void)uploadVideoWithList:(id)a0 paramModel:(id)a1 index:(unsigned long long)a2;
- (void)uploadFailWithAssetId:(id)a0 error:(id)a1 bridgeContext:(id)a2;
- (void)uploadVideoWithFileURL:(id)a0 assetId:(id)a1 index:(unsigned long long)a2 list:(id)a3 paramModel:(id)a4 bridgeContext:(id)a5;
- (void)compressVideo:(id)a0 assetId:(id)a1 bridgeContext:(id)a2 completion:(id /* block */)a3;
- (void)uploadVideoWithFileURL:(id)a0 assetId:(id)a1 index:(unsigned long long)a2 list:(id)a3 paramModel:(id)a4 videoToken:(id)a5 bridgeContext:(id)a6;
- (void)uploadVideoSuccessWithAssetId:(id)a0 vid:(id)a1 url:(id)a2 width:(id)a3 height:(id)a4 duration:(id)a5 bridgeContext:(id)a6;
- (void)compressProgress:(double)a0 assetId:(id)a1 bridgeContext:(id)a2;
- (void)uploadAssetWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
