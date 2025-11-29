@class NSString, ACCCTRServiceImpl;
@protocol ACCEditViewContainer, ACCStudioAIMemoriesService;

@interface ACCEditCTRComponent : ACCFeatureComponent <ACCBarItemContainerViewSubscriber>

@property (retain, nonatomic) ACCCTRServiceImpl *ctrService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStudioAIMemoriesService> aiMemoriesService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)barItemContainer:(id)a0 didClickMoreButton:(BOOL)a1;
- (void)barItemContainerDidLoad;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
