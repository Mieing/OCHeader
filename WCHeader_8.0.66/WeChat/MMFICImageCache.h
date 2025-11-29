@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MMFICImageCache : MMUserService <MMServiceProtocol> {
    NSRecursiveLock *_tableLock;
    NSMutableDictionary *_imageTables;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)addFormatIfNotExist:(id)a0 imgSize:(struct CGSize { double x0; double x1; })a1 maxImgCnt:(unsigned int)a2 version:(unsigned int)a3;
- (id)retrieveImageForEntity:(id)a0 isNeedMemoryCache:(BOOL)a1;
- (void)deleteImageForEntity:(id)a0;
- (void)reset;
- (void)clearImgTableWithPrefix:(id)a0;
- (void)asyncCreateFICImgForEntity:(id)a0;
- (void)asyncCreateFICImgForEntity:(id)a0 withImage:(id)a1;
- (void)executeEntityCreating:(id)a0 withImage:(id)a1;
- (unsigned long long)cleanFICImageCache;
- (unsigned long long)preGetFICImageCacheSize;
- (void).cxx_destruct;

@end
