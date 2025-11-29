@class OMJMaasCore, NSString, MMContext, NSMutableArray, MJTemplateSessionExportOperation, MJTemplateSessionOperation;

@interface MJTemplateSession : NSObject

@property (copy, nonatomic) NSString *sessionKey;
@property (copy, nonatomic) NSString *currentTemplateId;
@property (retain, nonatomic) MJTemplateSessionExportOperation *exportOperation;
@property (copy, nonatomic) id /* block */ prepareCompletionHandler;
@property (copy, nonatomic) id /* block */ destroyCompletionHandler;
@property (readonly, nonatomic) MMContext *mmContext;
@property (retain, nonatomic) OMJMaasCore *maasCore;
@property (nonatomic) long long status;
@property (retain, nonatomic) MJTemplateSessionOperation *currentOperation;
@property (retain, nonatomic) NSMutableArray *pendingOperationQueue;
@property (nonatomic) unsigned long long scene;

- (id)init;
- (void)dealloc;
- (BOOL)bindMaasCore:(id)a0;
- (BOOL)canStartUp;
- (BOOL)startUp:(id *)a0;
- (BOOL)createMaasSession;
- (BOOL)isCleaningUp;
- (BOOL)canCleanUp;
- (void)cleanUpWithCompletionHandler:(id /* block */)a0;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)a0;
- (void)_didCompleteCleaningUpWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_tearDownMaasCoreWithCompletionHandler:(id /* block */)a0;
- (void)_finishCleaningUp;
- (BOOL)canPrepareCreation;
- (BOOL)canStartPreviewOperation;
- (BOOL)_validateStatusForStartingPendingPreviewOperation;
- (void)_addPendingPreviewOperation:(id)a0;
- (void)_currentOperationDidChangeStatus:(id)a0;
- (BOOL)_canStartPendingPreviewOperation;
- (void)_startPendingPreviewOperationIfReady;
- (BOOL)canStartExportingCreation;
- (BOOL)_canStartExportingCreationInStatus:(long long)a0;
- (void)_setExportOperation:(id)a0;
- (void)_currentExportOperationDidChangeStatus:(id)a0;
- (void)_startExportOperationIfReady;
- (id)updatePreloadConcurrencyLimit:(unsigned long long)a0;
- (id)updatePreloadResourceSizeLimit:(unsigned long long)a0;
- (id)preloadTemplatesByIds:(id)a0;
- (id)preloadMusicsByIds:(id)a0;
- (id)stopPreloading;
- (id)_fetchPreloaderWithError:(id *)a0;
- (BOOL)canCheckTemplateInfo;
- (void)filterIntegralTemplateList:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_checkIntegralTemplateInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkCameraTemplateId:(id)a0 templateVersion:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)reportScene;
- (id)description;
- (void).cxx_destruct;

@end
