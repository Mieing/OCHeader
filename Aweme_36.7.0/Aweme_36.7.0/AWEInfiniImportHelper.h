@interface AWEInfiniImportHelper : NSObject

+ (BOOL)supportSlidesImport;
+ (BOOL)supportSlidesWithPublishModel:(id)a0;
+ (BOOL)supportEditSlidesImportWithAssets:(id)a0 appendAPhoto:(BOOL)a1 appendALivePhoto:(BOOL)a2 appendAVideo:(BOOL)a3;
+ (BOOL)canRecoverFromDraft:(id)a0;
+ (BOOL)useSingleVideoEditor:(id)a0 publishModel:(id)a1 albumInputData:(id)a2;
+ (unsigned long long)slidesImportTypeWithAssets:(id)a0;
+ (BOOL)supportSlidesImportWithImportType:(unsigned long long)a0;
+ (BOOL)supportEditSlidesImportWithImportType:(unsigned long long)a0;
+ (BOOL)supportSingleVideoImportInfiniWithAssets:(id)a0 publishModel:(id)a1 albumInputData:(id)a2;
+ (BOOL)useSinglePhotoEditor:(id)a0 publishModel:(id)a1 albumInputData:(id)a2;
+ (BOOL)shouldDisableRecoverFromDraft:(id)a0;
+ (BOOL)enableDegradeInfini:(id)a0;
+ (long long)infiniEditorVideoTypeWithPublishModel:(unsigned long long)a0 withAssets:(id)a1;
+ (BOOL)supportMultiPicturesWithAssets:(id)a0;
+ (BOOL)supportSlidesImportWithAssets:(id)a0 publishModel:(id)a1 vcType:(unsigned long long)a2;

@end
