@class UIImageView, NSString;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface AWENewCoverChooseEditComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) UIImageView *firstPlaceholderImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)setupFirstPlaceholderImageViewIfNeed;
- (void).cxx_destruct;
- (void)dealloc;

@end
