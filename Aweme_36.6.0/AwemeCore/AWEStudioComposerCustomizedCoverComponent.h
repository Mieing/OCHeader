@class NSString, AWEStudioComposerCustomizedCovertConfig;
@protocol AWEHttpTask, ACCVideoEditCoverFeatureService, ACCVideoEditFlowControlService;

@interface AWEStudioComposerCustomizedCoverComponent : ACCFeatureComponent <ACCVideoEditFlowControlSubscriber>

@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowService;
@property (retain, nonatomic) AWEStudioComposerCustomizedCovertConfig *featureConfig;
@property (weak, nonatomic) id<ACCVideoEditCoverFeatureService> editCoverFeatureService;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (copy, nonatomic) NSString *requestPreId;
@property (nonatomic) BOOL showSharePanelCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEnterPublishWithEditFlowService:(id)a0;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)sharePanelPublish:(id)a0;
- (id)errorMsgForTracker:(id)a0;
- (void)requestCoverWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
