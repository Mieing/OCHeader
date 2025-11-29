@class NSString;
@protocol ACCRecorderViewContainer, ACCRecordFlowService, ACCCameraService, ACCRecordUIHiddenStrategyService;

@interface ACCRecordUIHiddenStrategyComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCRecorderEvent, ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL isWillShowPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRecorderStateDidChange:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)componentDidMount;
- (void).cxx_destruct;

@end
