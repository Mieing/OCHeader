@class ACCImageTemplateDownloader, AWEDavinciWrapper;

@interface AWEImageTemplateResourcesDownloader : NSObject

@property (retain, nonatomic) AWEDavinciWrapper *davinciWrapper;
@property (retain, nonatomic) ACCImageTemplateDownloader *templateDownloader;

+ (id)templateCacheDir;
+ (void)downloadTemplateZIPWithTemplateID:(id)a0 cacheDir:(id)a1 callback:(id /* block */)a2;
+ (id)getNeedDownloadedTemplateResourcesFromTemplateInfoModel:(id)a0 logSubTag:(id)a1;
+ (id)errorOfTemplateResourcesDownload;
+ (id)fixedResources;
+ (id)JSONToDictionary:(id)a0 logSubTag:(id)a1;
+ (BOOL)isValidTemplateResourceTypeWith:(unsigned long long)a0;
+ (void)predownloadFixedResourcesWithCallback:(id /* block */)a0;

- (void)setShouldLockTemplateApply:(BOOL)a0;
- (void)downloadTemplateZipWithMediaID:(id)a0 callback:(id /* block */)a1;
- (void)adjustTemplatePositionByBachAlgorithmWithMediaID:(id)a0 currentImageURI:(id)a1 cropImageInfo:(id)a2 originImageSize:(struct CGSize { double x0; double x1; })a3 callback:(id /* block */)a4;
- (void)downloadTemplateResources:(id)a0 unzipFilePath:(id)a1 progressChangeCompletion:(id /* block */)a2 onError:(id /* block */)a3 onCompletion:(id /* block */)a4;
- (void)downloadTemplateResources:(id)a0 unzipFilePath:(id)a1 progressChangeCompletion:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (id)combineDownloadedTemplateResourcesLocalCache:(id)a0 unzipFilePath:(id)a1;
- (id)getResourceFromNleCache:(id)a0;
- (void).cxx_destruct;

@end
