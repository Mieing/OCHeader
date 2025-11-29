@class NSString, NSMutableDictionary;
@protocol BDXElementResourceManagerDelegate;

@interface BDXElementResourceManager : NSObject <SSZipArchiveDelegate>

@property (retain, nonatomic) NSMutableDictionary *fetchingResourceCallbacks;
@property (weak, nonatomic) id<BDXElementResourceManagerDelegate> resourceDelegate;
@property (copy, nonatomic) id /* block */ localizeStringBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unzipCachePathForURL:(id)a0;
+ (id)zipTempCachePathForURL:(id)a0;
+ (void)tryToCleanup;
+ (void)tryToCleanupUntrackedCache:(id)a0 atPath:(id)a1;
+ (void)updateHistory:(id)a0;
+ (void)unzipFile:(id)a0 toPath:(id)a1 completionHandler:(id /* block */)a2;
+ (id)lynxViewFrom:(id)a0;
+ (id)pickOutLynxViewFrom:(id)a0;
+ (id)genContext:(id)a0 withLynxView:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (void)settingsDidUpdate:(id)a0;

- (void)downloadZipFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchFileWithURL:(id)a0 baseURL:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)resourceZipFileWithURL:(id)a0 baseURL:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (id)downloadDestinationPath;
- (id)getRemoteURLWithRelativeURL:(id)a0 baseURL:(id)a1 error:(id *)a2;
- (id)urlStringWithURL:(id)a0;
- (void)resourceDataWithURL:(id)a0 baseURL:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchLocalFileWithURL:(id)a0 baseURL:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)zipArchiveShouldUnzipFileAtIndex:(long long)a0 totalFiles:(long long)a1 archivePath:(id)a2 fileInfo:(struct unz_file_info_s { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned int x13; unsigned long long x14; })a3;
- (void).cxx_destruct;

@end
