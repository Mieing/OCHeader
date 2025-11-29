@interface FavFileUtil : NSObject

+ (id)getUserFavoritesRootDir;
+ (id)getFavoritesFontDir;
+ (id)getFavoritesFontCache;
+ (id)getFavoritesBkgImageDir;
+ (id)getFavoritesBkgImageCache;
+ (id)getFavoritesDBPath;
+ (id)getFavoritesDataDir;
+ (id)getFavorites3rdTempDir;
+ (id)getFavoritesRecentItemsDir;
+ (id)getFavTempFileDir;
+ (id)getCompressedVideoDir;
+ (id)getFavWebCacheDir;
+ (id)getFavoritesSyncBufferPath;
+ (id)getFavoritesSettingPath;
+ (id)getFavoritesBatchDelQueuePath;
+ (id)UIImageWriteToFile:(id)a0;
+ (id)UIThumbImageWriteToFile:(id)a0;
+ (id)TempDataWriteToFile:(id)a0;
+ (id)TempDataWriteToFile:(id)a0 ext:(id)a1;
+ (void)DeleteTempFile:(id)a0;
+ (id)CopyFileFromOriginPath:(id)a0;
+ (id)getTempFilePath;
+ (BOOL)isFavoritesTempFilePath:(id)a0;
+ (id)getCompressedVideoPathForPath:(id)a0;
+ (int)getVideoDurationOfPath:(id)a0;
+ (int)getVideoDurationOfURL:(id)a0;
+ (BOOL)isCompressedVideoPath:(id)a0;
+ (BOOL)isFavoritesDataFile:(id)a0;
+ (BOOL)isFavoritesPath:(id)a0;
+ (id)GetTempPathByMd5:(id)a0 isThumb:(BOOL)a1 DataFmt:(id)a2;
+ (id)GetPathByMd5:(id)a0 isThumb:(BOOL)a1 DataFmt:(id)a2;
+ (id)GetPathByMd5:(id)a0 isThumb:(BOOL)a1 DataFmt:(id)a2 isTmp:(BOOL)a3;
+ (id)Get3rdAppTempPathByLocalDataId:(id)a0 isThumb:(BOOL)a1 DataFmt:(id)a2;

@end
