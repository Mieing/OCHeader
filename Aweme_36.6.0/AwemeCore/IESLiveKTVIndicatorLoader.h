@class NSString, IESLiveKTVSongIndicatorView;
@protocol IESLiveCompoundSubscription, IESLiveKTVSongIndicatorViewModelProtocol;

@interface IESLiveKTVIndicatorLoader : NSObject <IESLiveKTVIndicatorLayoutAdapter, IESLiveMultiAudioAction, IESLivePaidStreamAction, HTSLiveStreamPlayerAction, IESLiveKTVIndicatorLayoutService>

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isClear;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) BOOL isShowPanel;
@property (retain, nonatomic) id<IESLiveKTVSongIndicatorViewModelProtocol> viewModel;
@property (nonatomic) BOOL isSubCamera;
@property (retain, nonatomic) IESLiveKTVSongIndicatorView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)dragViewMoved:(id)a0;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (void)handleClearNotification:(id)a0;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)adapt:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)refreshSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enableDragAreaRect;
- (id)getGridY;
- (void)loadKTVIndicatorWithViewModel:(id)a0;
- (void)unloadKTVIndicator;
- (void)hideKTVIndicator:(BOOL)a0;
- (BOOL)isKTVIndicatorHide;
- (void)needUpdateTop:(long long)a0;
- (void)needResumeLastLayout;
- (void)trackKsongIconShow;
- (void)p_updateState;
- (void)p_loadWithViewModel:(id)a0;
- (BOOL)shouldIndicatorHide;
- (BOOL)isInPaidLiveFinish;
- (void)p_loadConstraint;
- (void)p_updateKTVIndicationWithClearStatus;
- (void)p_updateKTVIndicationWithCamera;
- (void)p_remakeConstraint:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)tr_indicatorDragEndEvent;
- (BOOL)shouldDragArea:(double)a0;
- (double)p_getValidTopIfNeed:(double)a0;
- (void)p_checkPaidLiveTrialState;
- (void)p_checkVIPPaidLiveTrialState;
- (void)trialDidFinish;
- (void)trialDidPaied;
- (void).cxx_destruct;
- (void)p_addObservers;

@end
