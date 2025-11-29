@interface ACCFrameExtractUtils : NSObject

+ (id)generateTaskID;
+ (BOOL)shouldUploadBachOrFrameForRecommendationWithPublishViewModel:(id)a0;
+ (unsigned long long)configMaterialsArrayTypeWithMaterialsArray:(id)a0;
+ (id)calculateMD5OfFile:(id)a0;
+ (BOOL)checkEnableBusinessFrameExtractStatusWithPublishViewModel:(id)a0;
+ (id)generateMaterialsMD5StringWith:(id)a0;
+ (long long)videoMaterialCountInMaterialsArray:(id)a0;
+ (long long)imageMaterialCountInMaterialsArray:(id)a0;
+ (BOOL)shouldUploadFramesForRecommendationWithPublishViewModel:(id)a0;
+ (id)recommendedBachZipUriWithPublishViewModel:(id)a0;
+ (id)configFrameExtractMaterialsForLocalAlbumAssets:(id)a0 source:(unsigned long long)a1;
+ (id)dateFormatter;

@end
