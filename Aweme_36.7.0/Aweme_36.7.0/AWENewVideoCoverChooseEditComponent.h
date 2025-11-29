@protocol ACCBusinessInputData, ACCEditViewContainer, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface AWENewVideoCoverChooseEditComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)setupFirstPlaceholderImageViewIfNeed;
- (BOOL)userVideoCoverRenderOptimize;
- (void).cxx_destruct;
- (void)dealloc;

@end
