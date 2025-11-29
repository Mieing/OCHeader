@class NSString, RTVVoipInvokeController, RTVVoipMonitor, RTVVoipViewsController;
@protocol RTVVoipManagerInterface, RTVPipelineInterface, RTVVoipService;

@interface RTVInvokeVoIPComponent : RTVComponentBase <RTVPipelineHandler>

@property (weak, nonatomic) id<RTVPipelineInterface> pipeline;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) RTVVoipMonitor *monitor;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) RTVVoipViewsController *viewsController;
@property (readonly, nonatomic) RTVVoipInvokeController *invokeOperationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)handleEvent:(id)a0 completion:(id /* block */)a1;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)registedEventIdentities;
- (void)p_callerShowFullScreenIfNeeded;
- (void)p_createViewController;
- (void)p_createRoomWithCompletion:(id /* block */)a0;
- (void)p_authorCheckWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
