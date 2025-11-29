@class NSString, AWEBigToSmallModalDelegate, ACCVideoEditClipViewModel;
@protocol ACCEditClipV1ServiceProtocol, ACCEditTransitionServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditVideoFilterServiceProtocol, ACCEditServiceProtocol;

@interface ACCVideoEditClipComponent : ACCFeatureComponent <AWEVideoClipViewControllerDelegate, ACCVideoEditFlowControlSubscriber, ACCEditTransitionServiceObserver>

@property (retain, nonatomic) AWEBigToSmallModalDelegate *clipVCTransitioningDelegate;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) ACCVideoEditClipViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataClearForBackup:(id)a0;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)bindServices:(id)a0;
- (id)stickerService;
- (void)transitionService:(id)a0 didDismissViewController:(id)a1;
- (BOOL)hasVideoClipEdits;
- (void)removeVideoClipEdits;
- (id)clipBarItem;
- (void)removeAllEdits;
- (void)videoClipClicked;
- (void)gotoVCFromWarning:(BOOL)a0;
- (void)didFinishClipEdit;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasEdits;

@end
