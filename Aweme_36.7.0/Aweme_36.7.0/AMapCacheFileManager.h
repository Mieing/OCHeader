@class NSString, NSFileManager;

@interface AMapCacheFileManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *rootDirectory;
@property (readonly, nonatomic) NSString *basePath;

- (BOOL)addSkipBackupAttributeToItemAtPath:(id)a0;
- (void)initBasePath;
- (void)initLibraryBasePath;
- (id)filePathWithName:(id)a0 atPath:(id)a1 withDirectoryCreate:(BOOL)a2;
- (BOOL)removeItemWithName:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)removeAllItemsAtPath:(id)a0 error:(id *)a1;
- (id)initWithRootPath:(id)a0;
- (id)initWithLibraryRootPath:(id)a0;
- (BOOL)cacheItem:(id)a0 withFileName:(id)a1 atPath:(id)a2;
- (id)cachedItemsAtPath:(id)a0;
- (unsigned long long)cachedItemsCountAtPath:(id)a0;
- (id)cacheItemWithFileName:(id)a0 atPath:(id)a1;
- (BOOL)moveItemAtPath:(id)a0 withName:(id)a1 toPath:(id)a2 withName:(id)a3 error:(id *)a4;
- (BOOL)removeItemWithName:(id)a0 atPath:(id)a1;
- (BOOL)removeAllItemsAtPath:(id)a0;
- (id)cacheItemNameAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileIsExistWithPath:(id)a0 isDirectory:(BOOL *)a1;
- (unsigned long long)fileSizeWithName:(id)a0 AtPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
