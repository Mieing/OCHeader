@interface AWEDanmakuResourcesUtil : NSObject

+ (id)directoryNameWithURL:(id)a0;
+ (BOOL)isHandledResourcesWithDirectory:(id)a0;
+ (id)createDanmakuResourcesModel;
+ (id)createDanmakuResourcesModelFromModel:(id)a0;
+ (void)downloadWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)deleteWithModel:(id)a0;
+ (void)cleanResource;
+ (id)localFullPathWithUrl:(id)a0;
+ (id)danmakuResourcesPath;
+ (id)localFileUrls;
+ (void)trackResourceCoverageWithConfigSet:(id)a0 localSet:(id)a1;
+ (void)logWithEvent:(id)a0 message:(id)a1;
+ (void)downloadZipWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
+ (void)downloadFileWithModel:(id)a0 pathExtension:(id)a1 retryTimes:(long long)a2 completion:(id /* block */)a3;
+ (void)trackDownloadStartWithParams:(id)a0;
+ (void)trackDownloadFailedWithParams:(id)a0;
+ (void)handleZipWithModel:(id)a0 retryTimes:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)md5CheckWithModel:(id)a0;
+ (void)trackDownloadSucceedWithParams:(id)a0;
+ (void)markResourcesHandledWithDirectory:(id)a0;
+ (id)md5WithFilePath:(id)a0;
+ (void)showToast:(id)a0;
+ (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;

@end
