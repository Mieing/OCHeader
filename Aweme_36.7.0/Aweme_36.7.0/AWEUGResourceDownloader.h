@interface AWEUGResourceDownloader : NSObject

+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (BOOL)moveFileFromPath:(id)a0 toTargetPath:(id)a1;
+ (void)downloadWithURLs:(id)a0 targetPath:(id)a1 index:(long long)a2 completion:(id /* block */)a3;
+ (id)ugResourceTmpRootFolder;
+ (void)downloadLottieWithURLs:(id)a0 zipFileMD5:(id)a1 zipTargetPath:(id)a2 unzipDirectory:(id)a3 completion:(id /* block */)a4;
+ (void)downloadPNGWithURLs:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
+ (id)ugResourceRootFolder;

@end
