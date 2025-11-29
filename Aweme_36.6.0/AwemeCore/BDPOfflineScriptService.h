@class BDPThreadSafeArray, NSString;

@interface BDPOfflineScriptService : NSObject <BDPOfflineScriptService, BDPWarmBootMessage, BDPOfflineURLMessage>

@property (retain, nonatomic) BDPThreadSafeArray *loadedScriptInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)syncTryLoadOfflineScriptWithURL:(id)a0 withPageID:(id)a1 completion:(id /* block */)a2;
- (id)getRecordOfflineSettingForPackage:(id)a0;
- (id)getAllPosibleOfflineSettingForPackage:(id)a0;
- (void)asyncTryEvaluateScripts:(id)a0 inEngine:(id)a1 andComplete:(id /* block */)a2;
- (void)setupProperties;
- (id)getCachedUniqueIdFromPageId:(id)a0;
- (void)asyncTryEvaluateScript:(id)a0 inRuntime:(id)a1 successCount:(long long)a2 andComplete:(id /* block */)a3;
- (void)trackOfflineScript:(BOOL)a0 scriptInfo:(id)a1;
- (void).cxx_destruct;

@end
