@class NSString, ACCChapterViewModel, ACCChapterZoomTransitionDelegate, ACCChapterServiceContainer, UIView, ACCChapterViewController, ACCChapterPointsViewController;
@protocol ACCCTRServiceProtocol, ACCEditTransitionServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCStickerServiceProtocol, ACCEditServiceProtocol;

@interface ACCChapterComponent : ACCFeatureComponent <ACCVideoEditFlowControlSubscriber, ACCChapterViewControllerDelegate, ACCChapterZoomTransitionOuterContextProvider>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) ACCChapterServiceContainer *serviceGenerator;
@property (retain, nonatomic) ACCChapterViewModel *viewModel;
@property (retain, nonatomic) ACCChapterViewController *chapterViewController;
@property (retain, nonatomic) ACCChapterPointsViewController *chapterPointsViewController;
@property (retain, nonatomic) ACCChapterZoomTransitionDelegate *zoomTransitionDelegate;
@property (retain, nonatomic) UIView *bubbleForSingleClipped;
@property (nonatomic) BOOL hasReloadData;
@property (nonatomic) BOOL hasTraceChapterEntranceShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidDisappear;
- (void)dataClearForBackup:(id)a0;
- (void)barItemContainerDidLoad;
- (id)zoomTransitionStartView;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)rootVC;
- (void)didClickCancelButton;
- (void)bindServices:(id)a0;
- (void)addBarItemToToolBar;
- (id)clipBarItem;
- (void)gotoChapterViewControllerWithoutTransition:(id)a0;
- (void)trackChapterEntranceShowFromVideoPostPage:(id)a0;
- (id)chapterItemIndex;
- (void)trackChapterEntranceShowFrom:(id)a0 order:(id)a1 enterMethod:(id)a2;
- (void)chapterClicked;
- (BOOL)isDraftStatus;
- (void)trackEnterChapterFrom:(id)a0 order:(id)a1 enterMethod:(id)a2 isChapterDraft:(BOOL)a3;
- (void)p_gotoChapterViewController;
- (void)p_dismissEditPanel;
- (BOOL)needDeactiveEditor;
- (BOOL)needActiveEditor;
- (void)goToChapterVCWithIsFromEditPage:(BOOL)a0;
- (void)didClickSaveButton;
- (void).cxx_destruct;
- (void)dealloc;
- (id)bottomView;
- (void)willTransitionIn;

@end
