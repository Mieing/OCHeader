@interface AWEHPProfileSideBarFileManager : NSObject

+ (id)defaultSideBarData;
+ (id)cacheDataPathWithUserID:(id)a0;
+ (id)getCacheDataWithUserID:(id)a0;
+ (id)storageKeyWithUserID:(id)a0;
+ (Class)aAWEHPProfileSideBarCommonAdapterClass;
+ (void)writeCacheData:(id)a0 withUserID:(id)a1;
+ (void)deleteCacheDataWithUserID:(id)a0;
+ (id)getCacheModelWithUserID:(id)a0;
+ (id)defaultSideBarModel;

- (id)aAWEHPProfileSideBarCommonAdapter;

@end
