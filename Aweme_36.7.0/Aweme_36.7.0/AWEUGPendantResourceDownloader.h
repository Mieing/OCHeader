@interface AWEUGPendantResourceDownloader : NSObject

+ (void)downloadLottieWithURL:(id)a0 zipFileURL:(id)a1 zipFileMD5:(id)a2 unzipTargetPath:(id)a3 completion:(id /* block */)a4;
+ (BOOL)moveFileFromPath:(id)a0 toTargetPath:(id)a1;
+ (void)downloadPNGWithURL:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
+ (id)downloadPNGWithURL:(id)a0 targetPath:(id)a1;

@end
