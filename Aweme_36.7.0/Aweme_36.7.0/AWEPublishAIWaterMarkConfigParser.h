@interface AWEPublishAIWaterMarkConfigParser : NSObject

+ (void)addAIWatermarkToImageAtPath:(id)a0 generateNewPath:(BOOL)a1 completion:(id /* block */)a2;
+ (id)parseWaterMarkIconInfosForKey:(id)a0;
+ (void)parseWaterMarkIconInfosForKey:(id)a0 withCompletion:(id /* block */)a1;
+ (id)parseLivePhotoImageWaterMarkIconInfos;
+ (id)parseLivePhotoVideoWaterMarkIconInfos;
+ (id)parseWaterMarkIconInfosFromNestedKey:(id)a0 childKey:(id)a1;
+ (id)parseWaterMarkIconInfosFromArray:(id)a0;
+ (void)processWatermarkForSourceImage:(id)a0 withIconInfos:(id)a1 outputPath:(id)a2 errorDomain:(id)a3 completion:(id /* block */)a4;
+ (void)parseImageWaterMarkIconInfosWithCompletion:(id /* block */)a0;
+ (void)parseLivePhotoImageWaterMarkIconInfosWithCompletion:(id /* block */)a0;
+ (id)parseVideoWaterMarkIconInfos;
+ (id)parseImageWaterMarkIconInfos;
+ (void)parseVideoWaterMarkIconInfosWithCompletion:(id /* block */)a0;
+ (void)parseLivePhotoVideoWaterMarkIconInfosWithCompletion:(id /* block */)a0;
+ (void)parseWaterMarkIconInfosFromArray:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)shouldAddAIWatermarkWithPublishModel:(id)a0;
+ (void)addLivePhotoAIWatermarkToImageAtPath:(id)a0 generateNewPath:(BOOL)a1 completion:(id /* block */)a2;

@end
