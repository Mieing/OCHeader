@class YYDiskCache, NSString;

@interface PIAManifestService : NSObject <PIAManifestService>

@property (retain, nonatomic) YYDiskCache *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)saveManifest:(id)a0 forURL:(id)a1;
- (id)getCacheManifestForURL:(id)a0;
- (void)removeManifestForURL:(id)a0;
- (void).cxx_destruct;

@end
