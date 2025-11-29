@class AWEBigToSmallModalDelegate, NSString, UIView, AWESelectTemplateViewModel;
@protocol ACCEditVideoFilterServiceProtocol, ACCEditViewContainer, ACCStickerServiceProtocol, ACCEditSpecialEffectServiceProtocol, ACCVideoEditFlowControlService, ACCCTRServiceProtocol, ACCVideoEditBottomControlService, ACCEditTransitionServiceProtocol;

@interface ACCSelectTemplateComponent : ACCFeatureComponent <ACCEditTransitionServiceObserver, ACCVideoEditFlowControlSubscriber, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) AWEBigToSmallModalDelegate *vcTransitioningDelegate;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerSerivce;
@property (retain, nonatomic) id<ACCVideoEditBottomControlService> bottomService;
@property (retain, nonatomic) id<ACCEditSpecialEffectServiceProtocol> effectService;
@property (retain, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (retain, nonatomic) UIView *bubble;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateTheNecessaryResourcesForPublishViewModel:(id)a0 completion:(id /* block */)a1;

- (void)clickAction;
- (void)willDirectPublishWithEditFlowService:(id)a0;
- (void)barItemContainerDidLoad;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (id)editService;
- (void)bindServices:(id)a0;
- (void)addBarItemToToolBar;
- (id)stickerService;
- (void)transitionService:(id)a0 didDismissViewController:(id)a1;
- (BOOL)shouldShowEditTemplate;
- (void)updateBarItemSate;
- (void)componentDidAppearForOneClickFilming;
- (void)componentDidAppearForCutSame;
- (void)jumpToViewController;
- (id)editTemplateItem;
- (void)removeAllEdits;
- (void)resetEditPagePlayerViewAndMusic;
- (void)updateVideoData;
- (void)p_handleClickAction;
- (void)showAnimation;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasEdits;

@end
