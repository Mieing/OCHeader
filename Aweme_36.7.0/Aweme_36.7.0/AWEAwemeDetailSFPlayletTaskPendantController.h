@class NSString, NSArray, UIView;
@protocol BDUGLuckyCountDownPendantViewProtocol;

@interface AWEAwemeDetailSFPlayletTaskPendantController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, BDUGLuckyCountDownTaskPendantDelegateProtocol>

@property (copy, nonatomic) NSString *taskSceneId;
@property (copy, nonatomic) NSArray *taskTypeList;
@property (nonatomic) BOOL isShowingBlockView;
@property (nonatomic) BOOL isIncentivePendantShowing;
@property (nonatomic) BOOL isIncentivePendantTimerOn;
@property (nonatomic) BOOL isVideoControllerPause;
@property (retain, nonatomic) UIView<BDUGLuckyCountDownPendantViewProtocol> *pendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)playerWillStartNextLoop:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)pendantIsReady;
- (void)pendantWillDestroy;
- (void)setupEvent;
- (void)startIncentivePendantTimer;
- (void)stopIncentivePendantTimer;
- (void)hideIncentivePendant;
- (BOOL)shouldShowPlayletIncentivePendant;
- (void)getTaskParams;
- (BOOL)enableClosePendantAndTimerContinue;
- (void)processBlockViewInNoPreviewAwemeModel:(id)a0;
- (BOOL)enableFixTimerBug;
- (void)updateIncentivePendantState:(id)a0;
- (void)processBlockViewInAwemeModel:(id)a0 playTime:(double)a1;
- (BOOL)enableShowingPendantAndTimerContinue;
- (void)updateIncentivePendantStateFromSearch:(id)a0;
- (void)updateIncentivePendantStateFromIAATab:(id)a0;
- (void)showIncentivePendantIfNeeded;
- (BOOL)containsPlayletPaidTypeForIncentivePendant:(id)a0;
- (BOOL)hasShownBlockViewToast;
- (void)updateShownBlockViewToastState:(BOOL)a0;
- (void)updateBlockViewShowingStateIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
