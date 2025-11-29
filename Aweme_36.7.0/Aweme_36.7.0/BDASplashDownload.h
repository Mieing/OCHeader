@class NSString, NSMutableArray;

@interface BDASplashDownload : NSObject

@property (retain, nonatomic) NSMutableArray *downloadArray;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *cid;

+ (void)publicDownloadResourceWithInfo:(id)a0 expires:(double)a1 type:(long long)a2;

- (void)downloadComplianceResourceWithComplianceArea:(id)a0 expires:(double)a1 netAllow:(BOOL)a2;
- (void)downloadComplianceResourceWithModuleInfo:(id)a0 expires:(double)a1 netAllow:(BOOL)a2;
- (void)downloadBackgroundResourceWithBackgroundArea:(id)a0 expires:(double)a1 netAllow:(BOOL)a2;
- (void)downloadResourceWithInfo:(id)a0 type:(long long)a1 setupBlock:(id /* block */)a2;
- (void)downloadStaticResourceWithInfo:(id)a0;
- (void)downloadCoreResourceWithModel:(id)a0;
- (void)downloadModuleResourceWithModel:(id)a0;
- (void)downloadCreativeResourceWithModel:(id)a0;
- (void)downloadExtraResourceWithModel:(id)a0;
- (void)downloadDynamicResourceWithInfo:(id)a0 model:(id)a1 type:(long long)a2 resourcePriority:(long long)a3;
- (void)downloadResourceWithDownloadModel:(id)a0;
- (void)downloadResourceWithUrlArray:(id)a0 index:(unsigned long long)a1 downloadBlock:(id /* block */)a2;
- (id)initWithDownloadBlock:(id /* block */)a0;
- (void)downloadCommonResourceWithModel:(id)a0;
- (void)startDownloadResource;
- (void).cxx_destruct;

@end
