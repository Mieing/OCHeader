@interface AWELeftSideBarFileManager : NSObject

+ (id)storageKeyWithUserID:(id)a0;
+ (id)getLeftSideCacheDirectories;
+ (id)getLeftSideCachePathWithUserKey:(id)a0;
+ (id)getLeftSideCacheDataModelWithFilePath:(id)a0;
+ (id)getLeftSideCacheDataWithFilePath:(id)a0;
+ (id)getHomePageMMKV;
+ (void)deleteLeftSideBarDynamicCacheData;
+ (id)getLeftSideDynamicDataCachePath;
+ (BOOL)leftSideCacheDirectoriesHasFile;
+ (id)getLeftSideCacheDataWithUserID:(id)a0;
+ (void)writeLeftSideData:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
+ (void)deleteLeftSideBarCacheData;
+ (void)writeLeftSideDynamicData:(id)a0 async:(BOOL)a1;
+ (void)getLeftSideDynamicDataWithAsync:(BOOL)a0 completion:(id /* block */)a1;

@end
