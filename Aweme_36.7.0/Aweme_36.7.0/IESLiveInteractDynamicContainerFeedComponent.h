@class NSArray, IESLiveInteractDynamicJSBService, NSString, UIView;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveDynamicContainerLoaderService, IESLiveRoomService;

@interface IESLiveInteractDynamicContainerFeedComponent : NSObject <IESLiveInteractDynamicContainerDataSource, IESLiveInteractDynamicContainerFeedProvider, IESLiveInteractDynamicContainerRoomAndFeedAbility>

@property (weak, nonatomic) id<IESLiveDynamicContainerLoaderService> loader;
@property (retain, nonatomic) IESLiveInteractDynamicJSBService *jsbService;
@property (retain, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicContainerProvider;
@property (copy, nonatomic) NSArray *cacheGuestList;
@property (nonatomic) BOOL didStartInteract;
@property (retain, nonatomic) UIView *container;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)viewController_viewWillAppear;
- (void)didSetAttachingDIContext;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)viewController_viewDidDisAppear;
- (void)currentLayoutUIDidBuild;
- (void)currentLayoutUIFeatureDidUpdate;
- (void)onUserEnterLiveRoom:(id)a0;
- (id)getEnterFrom;
- (void)startInteract:(id)a0;
- (void)stopInteract;
- (void)didChangeLayoutFrom:(id)a0 toLayout:(id)a1;
- (void)interactGuestListDidChangeFrom:(id)a0 to:(id)a1;
- (void)updateGuestListWithAppData:(id)a0;
- (void)barrageGameFoldStateDidChange:(BOOL)a0;
- (void)stopDynamicContainer;
- (void)clearJsbService;
- (void)loadDynamicContainerProvider;
- (void)loadJsbService;
- (void)startDynamicContainer;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (void)reset;

@end
