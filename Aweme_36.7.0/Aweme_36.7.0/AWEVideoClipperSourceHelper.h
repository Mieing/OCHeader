@interface AWEVideoClipperSourceHelper : NSObject

+ (BOOL)needReportSourceInfo;
+ (void)tryToAddSourceInfoInfoAsset:(id)a0 withPublishViewModel:(id)a1 completionHandler:(id /* block */)a2;
+ (void)addSourceInfoIfNeededForAsset:(id)a0 withPublishViewModel:(id)a1 completionHandler:(id /* block */)a2;

@end
