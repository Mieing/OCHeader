@class NSMutableDictionary, NSString, ACCNLEImageDownloaderParamsConfig, NLEImageDownloader_OC;

@interface ACCImageTemplateDownloader : NSObject

@property (retain, nonatomic) NLEImageDownloader_OC *nleImageDownloader;
@property (retain, nonatomic) ACCNLEImageDownloaderParamsConfig *downloaderParamsConfig;
@property (retain, nonatomic) NSMutableDictionary *allCachedResourcesDic;
@property (nonatomic) BOOL downloadAllIssuesSuccess;
@property (retain, nonatomic) NSString *unzipPath;
@property (retain, nonatomic) NSString *userSelectedImagePath;
@property (nonatomic) BOOL applyTemplateIsLocked;

+ (id)getResourceFilePathWith:(id)a0 downloadedCache:(id)a1 unzipFilePath:(id)a2 userSelectImagePath:(id)a3;
+ (id)getParamsTransferFrom:(id)a0;
+ (BOOL)isBuildinResource:(id)a0;
+ (id)getLocalResourcesFromUnzipFilePath:(id)a0 forBuildinResource:(id)a1;
+ (void)downloadTemplateResource:(id)a0 downloadParam:(id)a1 templateUnzipPath:(id)a2 userSelectImagePath:(id)a3 onCompletion:(id /* block */)a4;
+ (id)getAllResourcesCacheFromNLEResources:(id)a0 downloadedResourcesCache:(id)a1 unzipFilePath:(id)a2 userSelectImagePath:(id)a3;

- (id)initWithDownloaderConfig:(id)a0;
- (void)downloadTemplateResource:(id)a0 progressChangeCompletion:(id /* block */)a1 onError:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (void)downloadTemplateResource:(id)a0 progressChangeCompletion:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (id)getAllResourcesCacheFromNLEResources:(id)a0;
- (void)addTemplateResourceCache:(id)a0;
- (id)getTemplateResourceCache;
- (id)getResourcesFromNleCache:(id)a0;
- (void).cxx_destruct;

@end
