@interface BDWebImageBaseControl : NSObject

@property BOOL loadingFromNet;
@property BOOL loadingFromDisk;
@property BOOL savingToDisk;
@property (retain) id infoConfig;

+ (BOOL)findOrCreateDirectoryInPath:(id)a0;
+ (id)rootPath;

- (id)boeDomain;
- (id)cnDomain;
- (id)sgDomain;
- (id)vaDomain;
- (id)queryStringWithStartUpConfig:(id)a0;
- (Class)mappingClass;
- (id)requestDomainWithStartUpConfig:(id)a0;
- (id)headerFieldsWithStartUpConfig:(id)a0;
- (BOOL)processingNetObj:(id)a0;
- (BOOL)loadFromDisk_sync;
- (Class)infoConfigClass;
- (void)loadFromNetWithStartUpConfig:(id)a0 completion:(id /* block */)a1;
- (void)loadFromDisk_async:(id /* block */)a0;
- (void)saveToDisk_async;
- (void).cxx_destruct;
- (id)fileName;

@end
