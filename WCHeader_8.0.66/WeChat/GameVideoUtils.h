@interface GameVideoUtils : MMObject

+ (id)gameHaowanDataDir;
+ (id)postInfoFilePath;
+ (id)haowanPostDBPath;
+ (int)getVideoDurationOfPath:(id)a0;
+ (int)getVideoDuration:(id)a0;
+ (BOOL)isRetryEnabled;
+ (int)getMaxRetryCount;
+ (id)fileExtensionFromMimeType:(id)a0;
+ (id)humanEasyTextOfDataSize:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })readImageSizeWithoutLoadingDataForPath:(id)a0;
+ (BOOL)readImagePropertiesWithoutLoadingDataForPath:(id)a0 thenDo:(id /* block */)a1;
+ (id)storeVideoToWebResource:(id)a0;
+ (id)storeByCopyVideoToWebResource:(id)a0 andThumbPath:(id)a1;
+ (id)openWebViewWithUrl:(id)a0;
+ (void)showViewController:(id)a0;
+ (void)showViewControllerWithCreator:(id /* block */)a0;
+ (id)relativePathForAbosultePath:(id)a0;
+ (id)abosultePathForRelativePath:(id)a0;

@end
