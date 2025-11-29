@class NSOperationQueue;

@interface AWEUGCountDownResourceDownloader : NSObject

@property (retain, nonatomic) NSOperationQueue *downloadQueue;

+ (id)sharedInstance;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)loadLottieFromURL:(id)a0 withMD5:(id)a1 lottieName:(id)a2 bundleName:(id)a3;
- (id)getAWEUGCountDownRootFolderPath;
- (void)setupResourceRootFolder:(id)a0;
- (void)downloadLottieFromURL:(id)a0 withMD5:(id)a1 lottieName:(id)a2 bundleName:(id)a3;
- (BOOL)isLottieResourceExisted:(id)a0 lottieName:(id)a1;
- (void)downloadResourceWithURL:(id)a0 md5:(id)a1 retryTimes:(long long)a2 completion:(id /* block */)a3;
- (id)lottieResourceDir:(id)a0;
- (id)lottieNamed:(id)a0 bundleName:(id)a1 formPath:(id)a2;
- (void)postResourceIsReadyNotify:(id)a0;
- (void)downloadLottieWithURL:(id)a0 md5:(id)a1 retryTimes:(long long)a2 completion:(id /* block */)a3;
- (id)lottieZipFilePath:(id)a0;
- (void)preDownloadWithConfig:(id)a0;
- (void).cxx_destruct;

@end
