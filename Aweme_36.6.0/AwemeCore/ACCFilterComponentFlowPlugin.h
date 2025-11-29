@class NSString, ACCFilterComponent;
@protocol ACCFeatureComponent, ACCFilterService, ACCCameraPureModeService;

@interface ACCFilterComponentFlowPlugin : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCCameraPureModeRecover, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCCameraPureModeService> pureModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)flowServiceDidAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)rollbackEffect;
- (void)p_pureModeAddObserver;
- (void).cxx_destruct;

@end
