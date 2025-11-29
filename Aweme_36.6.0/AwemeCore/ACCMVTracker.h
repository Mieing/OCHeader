@interface ACCMVTracker : NSObject

+ (BOOL)isColdStart;
+ (id)commomParamsForAessts:(id)a0;
+ (void)setColdStart:(BOOL)a0;
+ (void)trackMVComposeTime:(double)a0 templateID:(id)a1 publishModel:(id)a2 useNLETemplate:(BOOL)a3 isChangeContent:(BOOL)a4 changeAssets:(id)a5 error:(id)a6;
+ (void)trackMVClassicGameplayTime:(double)a0 templateID:(id)a1 picCount:(long long)a2 algorithms:(id)a3 error:(id)a4;
+ (void)trackMVClassicImportMaterial:(double)a0 templateID:(id)a1 picCount:(long long)a2 error:(id)a3;
+ (void)trackMVClassicResourceDownload:(double)a0 templateID:(id)a1 error:(id)a2;
+ (void)trackMVCoverLoadTime:(double)a0 mvTab:(id)a1 mvId:(id)a2 isCutSameMV:(BOOL)a3;
+ (void)trackMVPreviewTime:(double)a0 mvTab:(id)a1 mvId:(id)a2;
+ (void)trackMVPreviewPlayTime:(double)a0 mvTab:(id)a1 mvId:(id)a2 enterMethod:(id)a3;
+ (void)trackMVEnterAlbumTime:(double)a0 publishModel:(id)a1 changeMaterial:(BOOL)a2;
+ (void)trackMVLoadTime:(double)a0 isColdStart:(BOOL)a1 isCache:(BOOL)a2;
+ (void)trackMVFeedLoadTime:(double)a0 responseTime:(double)a1 mvTab:(id)a2 loadType:(long long)a3 error:(id)a4;
+ (void)trackCutsameImportMaterialTime:(double)a0 mvID:(id)a1 mvURL:(id)a2 md5:(id)a3 errorCode:(long long)a4 errorMsg:(id)a5;
+ (void)trackCutsameGameplayTime:(double)a0 mvID:(id)a1 mvURL:(id)a2 md5:(id)a3 errorCode:(long long)a4 errorMsg:(id)a5;
+ (void)trackForSmartMovieCompressMaterial:(double)a0 templateID:(id)a1 sourceAssetModelArray:(id)a2 error:(id)a3;

@end
