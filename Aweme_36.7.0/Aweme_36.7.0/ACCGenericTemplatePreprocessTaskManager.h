@class ACCGenericTemplateProcessTaskManagerBackgroundPlugin, NSString, AWEVideoPublishViewModel, AWEGenericTemplatePreprocessHandler;

@interface ACCGenericTemplatePreprocessTaskManager : NSObject <ACCGenericTemplateCustomInfoTaskDelegate, ACCGenericTemplateProcessTaskManagerBackgroundPluginDelegation, NPPreprocessCustomInfoDelegateProtocol_OC>

@property (retain, nonatomic) AWEGenericTemplatePreprocessHandler *presetTaskHandler;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCGenericTemplateProcessTaskManagerBackgroundPlugin *backgroundPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)requestCustomInfoResults:(id)a0 requestInfo:(id)a1 requestCallback:(id)a2;
- (id)retrieveTemplateCustomInfoTrackModel:(id)a0;
- (void)removeTemplateCustomInfoTrackModel:(id)a0;
- (void)didFinishCustomInfoRequestTask:(id)a0;
- (id)retrieveOrCreateTaskWithTemplateId:(id)a0 requestId:(id)a1;
- (void)resumeBackgroundTask:(id)a0;
- (void).cxx_destruct;

@end
