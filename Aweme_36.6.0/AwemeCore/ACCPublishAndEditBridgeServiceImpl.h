@class NSString, ACCPublishAndEditBridgeContext;

@interface ACCPublishAndEditBridgeServiceImpl : HTSService <ACCPublishAndEditBridgeService>

@property (nonatomic) long long publishSaveLocalActionSignal;
@property (nonatomic) long long publishSaveLocalTaskStartSignal;
@property (nonatomic) long long publishShareActionSignal;
@property (nonatomic) long long publishIMTaskStartSignal;
@property (nonatomic) long long publishDraftActionSignal;
@property (nonatomic) BOOL saveLocalLoading;
@property (retain, nonatomic) ACCPublishAndEditBridgeContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishSaveLocalAction;
- (void)publishSaveLocalTaskStart;
- (void)publishSaveLocalTaskWithContext:(id)a0;
- (void)publishSaveLocalWillExecute;
- (void)publishSaveLocalFinishWithSuccess:(BOOL)a0 error:(id)a1 cancel:(BOOL)a2;
- (void)triggerSaveLocalLoadingIfNeeded;
- (void)publishShareAction;
- (void)publishIMTaskStart;
- (void)publishIMTaskWithContext:(id)a0;
- (void)publishIMTaskWillExecute;
- (void)publishIMTaskFinishWithSuccess:(BOOL)a0 error:(id)a1 cancel:(BOOL)a2;
- (void)publishDraftAction;
- (BOOL)cancelSaveLocalIfNeeded;
- (void).cxx_destruct;
- (void)reset;

@end
