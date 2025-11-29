@class NSString;

@interface AWEStudioComposerServiceImpl : HTSService <APCParameterizedService>

@property BOOL isExecuting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_publishEnabled;
+ (void)p_notSupportPublishCallbackWithBlock:(id /* block */)a0;

- (id)startCreationTaskWithConfig:(id)a0 beforeTaskInject:(id /* block */)a1 completion:(id /* block */)a2 exitAction:(id /* block */)a3;
- (id)startWithComposerModel:(id)a0;
- (id)startWithComposerModel:(id)a0 cameraCustomization:(id)a1 injectService:(id /* block */)a2;
- (id)startWithComposerModel:(id)a0 cameraCustomization:(id)a1;
- (id)composerModelWithSchema:(id)a0 error:(id *)a1;
- (id)startCreationTaskWithConfig:(id)a0 completion:(id /* block */)a1 exitAction:(id /* block */)a2;
- (id)generateSchemaWithComposerModel:(id)a0;
- (id)startWithComposerModel:(id)a0 cameraCustomization:(id)a1 injectService:(id /* block */)a2 prepareCompletion:(id /* block */)a3;
- (void)startSilentPublishTaskWithConfig:(id)a0 silentPublishApi:(id)a1 beforeTaskInject:(id /* block */)a2 completeAddPublishTask:(id /* block */)a3;
- (id)p_startWithComposerModel:(id)a0 cameraCustomization:(id)a1 injectService:(id /* block */)a2 completion:(id /* block */)a3 exitAction:(id /* block */)a4 context:(id)a5;
- (id)startWithComposerModel:(id)a0 cameraCustomization:(id)a1 injectService:(id /* block */)a2 completion:(id /* block */)a3 exitAction:(id /* block */)a4;

@end
