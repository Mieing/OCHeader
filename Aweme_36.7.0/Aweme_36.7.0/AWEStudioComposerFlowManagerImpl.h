@class NSString, AWEStudioComposerFlowContextImpl, NSHashTable;

@interface AWEStudioComposerFlowManagerImpl : NSObject <AWEStudioComposerFlowManager>

@property (retain, nonatomic) AWEStudioComposerFlowContextImpl *currentContext;
@property (retain, nonatomic) NSHashTable *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerExitComposerFlowLifecycleWithReason:(long long)a0;
- (void)willExitComposerFlowWithReason:(long long)a0;
- (void)didExitComposerFlow;
- (void)p_initParamsIfNeeded;
- (void)p_callbackWithStepIfNeeded:(long long)a0;
- (void)willEnterComposerFlow;
- (void)didEnterComposerFlow;
- (void).cxx_destruct;
- (id)init;
- (void)addDataSource:(id)a0;
- (void)dealloc;

@end
