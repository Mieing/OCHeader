@class IESLiveDynamicContainerFeedService, NSString;

@interface AWELivePreStreamInteractDynamicContainerElement : AWELiveBusinessBaseElement <IESLiveInteractPreStreamMSequenceSwitchAction>

@property (retain, nonatomic) IESLiveDynamicContainerFeedService *dynamicContainerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)interactMSequenceDidSwitchWithRoom:(id)a0;
- (void)loadDynamicContainerWithRoom:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
