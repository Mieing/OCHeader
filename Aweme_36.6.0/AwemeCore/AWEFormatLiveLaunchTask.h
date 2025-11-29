@interface AWEFormatLiveLaunchTask : NSObject

+ (void)_registerFontIfNeed;
+ (BOOL)_isFontRegisted;
+ (void)downloadVideoWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)formatVideoCacheDirectoryFullPath;
+ (id)downloadFileName:(id)a0;
+ (id)formatCacheDirectoryFullPath;
+ (id)formatVideoCacheDirectoryLastPath;
+ (void)_aweLazyRegisterStaticLoad_Font;

@end
