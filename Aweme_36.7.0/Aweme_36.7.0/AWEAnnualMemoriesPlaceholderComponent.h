@class NSString;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface AWEAnnualMemoriesPlaceholderComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
