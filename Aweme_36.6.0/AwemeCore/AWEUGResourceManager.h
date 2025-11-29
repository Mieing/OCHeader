@class NSRecursiveLock, NSMutableDictionary, NSOperationQueue, NSMutableArray;

@interface AWEUGResourceManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSMutableArray *invalidResources;
@property (retain, nonatomic) NSMutableDictionary *downloadHistory;
@property (retain, nonatomic) NSMutableDictionary *resourceMap;
@property (retain, nonatomic) NSMutableDictionary *resourceValidTime;

+ (id)sharedInstance;

- (void)loadLottieFromURLs:(id)a0 withMD5:(id)a1 lottieNames:(id)a2 bundleName:(id)a3 completion:(id /* block */)a4;
- (void)setupRootFolder:(id)a0;
- (void)cleanPath:(id)a0;
- (id)lottieResourceDir:(id)a0;
- (id)lottieZipFilePath:(id)a0;
- (void)cleanExpiredResourcesAfterLaunch;
- (BOOL)isPNGResourceExisted:(id)a0;
- (id)pngImagePath:(id)a0;
- (void)cleanExpiredResources;
- (id)resourceName:(id)a0;
- (BOOL)isLottieResourceExisted:(id)a0 jsonNames:(id)a1;
- (BOOL)isDownloadingWithName:(id)a0;
- (void)downloadLottieWithURLs:(id)a0 zipFileMD5:(id)a1 retryTimes:(long long)a2 completion:(id /* block */)a3;
- (void)downloadPNGWithURLs:(id)a0 identify:(id)a1 retryTimes:(long long)a2 completion:(id /* block */)a3;
- (id)lottieNamed:(id)a0 formDir:(id)a1 bundleName:(id)a2;
- (void)cleanInvalidResourceWithPath:(id)a0;
- (void)recordDownloadHistory:(id)a0 resourceName:(id)a1;
- (void)postDownloadSuccessWithIdentify:(id)a0;
- (void)monitorDownloadStatus:(long long)a0 URLs:(id)a1 md5:(id)a2 downloadTimes:(long long)a3 isLottie:(BOOL)a4 error:(id)a5;
- (void)monitorLoadStatus:(long long)a0 path:(id)a1 isLottie:(BOOL)a2 errorMessage:(id)a3;
- (void)setResourceValidTime:(long long)a0 withURLs:(id)a1;
- (void)downloadLottieWithURLs:(id)a0 zipFileMD5:(id)a1 completion:(id /* block */)a2;
- (void)downloadPNGWithURLs:(id)a0 identify:(id)a1 completion:(id /* block */)a2;
- (void)loadPNGImageFromURLDic:(id)a0 identify:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)imageWithPath:(id)a0;

@end
