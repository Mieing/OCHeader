@interface AWEStudioComposerPageLifecycleManager : NSObject

@property (class, readonly) AWEStudioComposerPageLifecycleManager *shared;

- (void)studioPageWillAppear:(id)a0;
- (void)studioPageDidAppear:(id)a0;
- (void)studioPageWillDisappear:(id)a0;
- (void)studioPageDidDisappear:(id)a0;
- (void)albumPageWillAppear:(id)a0;
- (void)albumPageDidAppear:(id)a0;
- (id)p_studioPageInfoWithNotification:(id)a0;
- (void)p_pageWillAppear:(id)a0;
- (void)p_pageDidAppear:(id)a0;
- (id)p_albumPageInfoWithNotification:(id)a0;
- (id)p_composerFlowManagerWithPage:(id)a0;
- (id)init;
- (void)start;
- (void)dealloc;

@end
