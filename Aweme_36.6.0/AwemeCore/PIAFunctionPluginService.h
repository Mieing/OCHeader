@class NSString, PIABiMapTable;

@interface PIAFunctionPluginService : NSObject <PIAFunctionPluginService>

@property (retain, nonatomic) PIABiMapTable *pluginsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)onNavigationCommit:(id)a0;
- (void)engine:(id)a0 onLoadFinish:(id)a1;
- (void)onEngineDestroy:(id)a0;
- (void)engine:(id)a0 onFetchManifestDone:(id)a1 error:(id)a2 URL:(id)a3;
- (void)context:(id)a0 onParseManifestDone:(id)a1;
- (void)context:(id)a0 onResponse:(id)a1 fromCache:(BOOL)a2;
- (void)willFetchManifestWithContext:(id)a0;
- (BOOL)registerFunctionPlugin:(Class)a0;
- (id)getPluginInstance:(Class)a0 engine:(id)a1;
- (void).cxx_destruct;

@end
