@class ACCGenericTemplateProcessTaskManagerBackgroundPlugin, NSString, AWEVideoPublishViewModel, AWEGenericTemplatePreprocessHandler;

@interface ACCGenericTemplateTTSTaskManager : NSObject <ACCGenericTemplateProcessTaskManagerBackgroundPluginDelegation, ACCGenericTemplateTTSTaskDelegate, NPPreprocessTTSDelegateProtocol_OC>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEGenericTemplatePreprocessHandler *presetTaskHandler;
@property (retain, nonatomic) ACCGenericTemplateProcessTaskManagerBackgroundPlugin *backgroundPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)requestTTSResultsWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (id)retrieveTemplateTTSTrackModel:(id)a0;
- (void)removeTemplateTTSTrackModel:(id)a0;
- (id)retrieveOrCreateTaskWithTemplateId:(id)a0 requestId:(id)a1;
- (void)resumeBackgroundTask:(id)a0;
- (void)didFinishTTSRequestTask:(id)a0;
- (void).cxx_destruct;

@end
