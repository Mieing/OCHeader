@interface NewLifeHelper : NSObject

+ (id)fixAbsolutePath:(id)a0;
+ (id)getFixUrl:(id)a0;
+ (id)getNewLifePrivateRootFolderPath;
+ (id)getNewLifeDraftFolderPath;
+ (id)getNewLifeStreamCacheFolderPath;
+ (id)getNewLifeShareCoverUrlKey:(id)a0;
+ (id)getNewLifeAutoCleanCacheFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getNewLifeDocumentsRootFolderPath;
+ (id)getNewLifeDatabaseFolderPath;
+ (id)getNewLifeUploadFolderPath;
+ (BOOL)saveImageAsPng:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)createNewLifeFeedCompressConfig:(unsigned long long)a0;
+ (id)compressImage:(id)a0 compressType:(unsigned long long)a1 targetPath:(id)a2;
+ (struct CGSize { double x0; double x1; })chatImageSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)countStringWithCount:(long long)a0 isAuthor:(BOOL)a1;
+ (int)getUptimeInMilliseconds;
+ (void)migratePictureLocationPermission;
+ (BOOL)isDiscoverSearchEnabled;
+ (void)setIlinkGetWifiInfoCallback;
+ (id)generatePostSessionId;

@end
