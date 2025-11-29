@class OMJMovieComposingSession;

@interface MJMovieComposingSession : MJTemplateSession

@property (retain, nonatomic) OMJMovieComposingSession *movieComposingSession;

+ (id)createRenderView;
+ (id)getOrCreateMaterialManager;
+ (id)getOrCreateCamResourceManager;
+ (id)getOrCreateSpeechManager;
+ (id)getOrCreateProjectManager;
+ (id)getOrCreateDecorPackageManager;
+ (void)destroyCamResourceManager;

- (BOOL)createMaasSession;
- (BOOL)_createMovieComposingSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_tearDownMovieComposingSessionWithCompletionHandler:(id /* block */)a0;
- (void)_destroyMovieComposingSessionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
