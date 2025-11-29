@class NSString;

@interface AWEStudioComposerFlowManagerUtilsImpl : HTSService <AWEStudioComposerFlowManagerUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorPageLifecycle;
- (id)createFlowManager;
- (BOOL)isComposerFlowFirstPage:(id)a0;

@end
