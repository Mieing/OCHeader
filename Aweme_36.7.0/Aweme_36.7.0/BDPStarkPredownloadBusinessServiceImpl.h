@class NSString;

@interface BDPStarkPredownloadBusinessServiceImpl : NSObject <BDPStarkPredownloadBusinessService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;

- (id)initService;
- (BOOL)checkShouldStarkPreDownloadWithModel:(id)a0 error:(id *)a1;
- (void)preDownloadSCGameWithModel:(id)a0 trackInfo:(id)a1 callback:(id /* block */)a2;
- (void)preLoadStarkCoreIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)preDownloadFontIfNeeded;
- (void)preLoadStarkCoreIfNeededWithModel:(id)a0 uniqueID:(id)a1;
- (void)preDownloadSCPkgWithModel:(id)a0 uniqueId:(id)a1 scModel:(id)a2 trackInfo:(id)a3 callback:(id /* block */)a4;
- (void)trackDownloadResultForTask:(id)a0 uniqueId:(id)a1 trackInfo:(id)a2 error:(id)a3;

@end
