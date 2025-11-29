@interface AWEAIEnhanceUtils : NSObject

+ (BOOL)useC1500Alg;
+ (id)_nleInterface:(id)a0;
+ (id)aiEnhanceConfig;
+ (BOOL)_experimentEnableAIEnhance:(id)a0;
+ (BOOL)shouldAddAIEnhanceComponent:(id)a0;
+ (id)_aiEnhanceConfig:(BOOL)a0;
+ (id)mainTrackImagePathWithNle:(id)a0;
+ (void)replaceMainTrackImageWithFilePath:(id)a0 aiExpandService:(id)a1 publishModel:(id)a2 isOrigin:(BOOL)a3 completion:(id /* block */)a4;
+ (void)restoreToOriginalRepoImageInfoInstance:(id)a0;
+ (BOOL)shouldShowAIEnhanceBarItem:(id)a0;
+ (BOOL)aiEnhanceUseSliderStyle:(BOOL)a0;
+ (long long)aiEnhanceDefaultStrength:(BOOL)a0;
+ (long long)enhanceTimeoutInMSecond;
+ (BOOL)aipUploadUseBinary;
+ (long long)aipUploadBytesMaxLimit;
+ (BOOL)aipDownloadUseBinary;
+ (id)enhanceFuncName;
+ (id)scriptCdnSchema;

@end
