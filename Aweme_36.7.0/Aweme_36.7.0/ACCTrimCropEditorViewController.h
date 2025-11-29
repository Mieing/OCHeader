@class ACCTrimCropEditorViewControllerConfig, ACCTrimCropEditViewModel, UIView, ACCCameraSubscription, IESContainer, ACCTrimCropBarModel, NSString, ACCTrimCropEditorBottomView;
@protocol ACCTrimCropEditorFinishProtocol, ACCTrimCropSequencePieceServiceProtocol, ACCSequenceEditServiceProtocol, ACCTrimPlayerServiceProtocol, ACCTCETrackEventServiceProtocol, ACCTrimCropEditorExitServiceProtocol, ACCTrimCropEditorFlagProtocol, IESServiceProvider;

@interface ACCTrimCropEditorViewController : UIViewController <ACCNLEEditZoomTransitionInnerContextProvider, AWEMediaSmallAnimationProtocol, ACCTrimPlayerListener, ACCTrimCropBottomBarServiceProtocol>

@property (retain, nonatomic) IESContainer *context;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropEditorExitServiceProtocol> exitService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropEditorFinishProtocol> editorFinishService;
@property (weak, nonatomic) id<ACCTrimPlayerServiceProtocol> trimPlayerService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (retain, nonatomic) ACCTrimCropEditorViewControllerConfig *config;
@property (retain, nonatomic) ACCTrimCropEditViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCTrimCropEditorBottomView *bottomView;
@property (weak, nonatomic) ACCTrimCropBarModel *selectedBar;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) id /* block */ dismissCoverImageBlock;
@property (nonatomic) double startTimeStamp;
@property (readonly, weak, nonatomic) NSString *selectedBarItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionEndView;
- (void)showBottomBar:(BOOL)a0;
- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (void)willTransitionIn:(id /* block */)a0;
- (id)animateViewsWithAlpha;
- (id)smallPreview;
- (void)hiddenBottomBar:(BOOL)a0;
- (void)buildServiceContainer:(id)a0;
- (void)configBottomBars;
- (void)switchItemAction:(id)a0;
- (void)didFinishFirstFrameSeekTime;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)addSubscriber:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)removeSubscriber:(id)a0;
- (void)setupUI;
- (void)setupData;

@end
