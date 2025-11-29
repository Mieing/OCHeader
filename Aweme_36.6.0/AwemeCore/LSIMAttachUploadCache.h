@interface LSIMAttachUploadCache : NSObject

+ (void)cacheItem:(id)a0 forData:(id)a1 type:(long long)a2;
+ (id)itemForData:(id)a0 type:(long long)a1;
+ (id)itemForMd5:(id)a0 type:(long long)a1;
+ (void)cacheItem:(id)a0 forMd5:(id)a1 type:(long long)a2;
+ (id)cacheKeyOfMd5:(id)a0 type:(long long)a1;
+ (void)fetchItemForFile:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
+ (void)cacheItem:(id)a0 forFile:(id)a1 type:(long long)a2;
+ (id)cacheInstance;

@end
