@class NSString, NSMapTable, NSMutableDictionary, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface BDPODRXFileManager : NSObject <BDPFileHandleLifecycleDelegate, NSCacheDelegate> {
    NSCache *_aliveHandlesCache;
    NSMutableDictionary *_loadingHandles;
}

@property (retain, nonatomic) NSMapTable *weakHandleTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allPackagesDownloadedWithModel:(id)a0;

- (id)getFileReaderWithContext:(id)a0;
- (BOOL)hasFullLocalAppFileWithModel:(id)a0 pagePath:(id)a1;
- (id)aliveFileReaderWithModel:(id)a0 readType:(long long)a1 startPagePath:(id)a2;
- (void)removeHandleWithMeta:(id)a0;
- (long long)appLoadStatusWithModel:(id)a0 pagePath:(id)a1;
- (void)removeHandlesWithAppId:(id)a0 options:(unsigned long long)a1;
- (id)downloadTokenOfReader:(id)a0;
- (void)resumeAppDownloadWithToken:(id)a0 completion:(id /* block */)a1;
- (void)stopDownloadAppWithToken:(id)a0;
- (void)removeDownloadCacheWithToken:(id)a0;
- (id)downloadPkgWithConext:(id)a0;
- (void)releaseAllFileReader;
- (id)pkgFolderPathWithModel:(id)a0;
- (void)recoverAppBasicPathWithAppId:(id)a0;
- (void)keepStrongRefToHandle:(id)a0;
- (void)removeMemoryCacheOfHandle:(id)a0;
- (void)moveItemAtPath:(id)a0 toPath:(id)a1 shouldCopy:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
