@class NSString, AWEDetailMVViewModel, AWEDetailMVTracker;

@interface AWEDetailMVActionServiceImpl : NSObject <AWEDetailActionService>

@property (weak, nonatomic) AWEDetailMVViewModel *stateContext;
@property (weak, nonatomic) AWEDetailMVTracker *tracker;
@property (nonatomic, getter=isOnAction) BOOL onAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDetailCollectionModuleServiceDOUYINLiteAdaperClass;

- (void)actionWithActionSender:(id)a0;
- (id)initWithStateContext:(id)a0 tracker:(id)a1;
- (void)p_createGenericTemplate;
- (void)p_createPixelTemplate;
- (void)p_createMediaMV;
- (void)p_createCutSameMV;
- (void)p_createClassicMV;
- (id)aAWEDetailCollectionModuleServiceDOUYINLiteAdaper;
- (void)createTaskInfoWithParams:(id)a0;
- (BOOL)disableLoadingIfNeeded;
- (void)updateStateContext:(id)a0;
- (void).cxx_destruct;

@end
