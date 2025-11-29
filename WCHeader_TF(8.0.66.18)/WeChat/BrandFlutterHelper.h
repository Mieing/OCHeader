@interface BrandFlutterHelper : NSObject

+ (id)fixAbsolutePath:(id)a0;
+ (id)getFixUrl:(id)a0;
+ (id)getBrandFlutterPrivateRootFolderPath;
+ (id)getBrandFlutterDraftFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getFileTypeWithData:(id)a0;
+ (BOOL)saveImageAsPng:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)saveImageData:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (void)asyncProcessAssets:(id)a0 useOriginalImage:(BOOL)a1 completion:(id /* block */)a2;
+ (id)createBrandFlutterFeedCompressConfig:(unsigned long long)a0;
+ (id)compressImage:(id)a0 compressType:(unsigned long long)a1 targetPath:(id)a2;
+ (void)addToPreloadUrl:(id)a0 itemShowType:(long long)a1 openScene:(unsigned int)a2 brandUserName:(id)a3 mpPageEnterType:(unsigned int)a4 fastLoadTemplateSet:(id)a5;

@end
