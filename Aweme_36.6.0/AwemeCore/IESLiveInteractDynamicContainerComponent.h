@class NSString, IESLiveInteractDynamicJSBService;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveDynamicContainerLoaderService;

@interface IESLiveInteractDynamicContainerComponent : IESLiveInteractComponentBase <IESLiveSocialInteractPreLoadExAction, IESLiveMessageInteractionModuleCommentAction, IESLiveInteractDynamicContainerRoomAndFeedAbility, IESLiveInteractHorizontalAudienceRotationAction, IESLiveInteractDynamicContainerDataSource>

@property (nonatomic) BOOL needDelayMount;
@property (nonatomic) BOOL keyboardShowing;
@property (nonatomic) BOOL didSendStartEvent;
@property (weak, nonatomic) id<IESLiveDynamicContainerLoaderService> loader;
@property (retain, nonatomic) IESLiveInteractDynamicJSBService *jsbService;
@property (retain, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicContainerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)currentLayoutUIFeatureDidUpdate;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)linkedUsersFanTicketDidChange:(id)a0 scene:(unsigned long long)a1;
- (void)orientationTransitioning:(long long)a0;
- (void)componentBindContext;
- (void)componentPreLoadedEnterRoom;
- (void)linkedGuestsVisibleStateDidChange;
- (void)barrageGameFoldStateDidChange:(BOOL)a0;
- (void)loadContainers;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)componentEnterRoom;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)componentWillChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)updateWithKeyboardShowing:(BOOL)a0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;

@end
