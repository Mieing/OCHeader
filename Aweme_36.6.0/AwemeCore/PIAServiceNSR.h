@class NSString, NSMutableSet;

@interface PIAServiceNSR : NSObject <PIAServiceNSR, PIAWorkerDelegate>

@property (retain, nonatomic) NSMutableSet *contextSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (void)executePrepareServiceTask;
+ (void)injectBridgeGlobalAPI;

- (id)initService;
- (id)NSRContentForURL:(id)a0;
- (void)executeNSRWithURL:(id)a0 configuration:(id)a1;
- (void)PIAWorker:(id)a0 didReceiveError:(id)a1;
- (BOOL)clearNSRContentForURL:(id)a0;
- (void)extractManifestFromURL:(id)a0 context:(id)a1 config:(id)a2;
- (void)onParseManifestWithContext:(id)a0 manifest:(id)a1 URL:(id)a2 configuration:(id)a3;
- (void)p_validateAsyncWithURL:(id)a0 version:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
