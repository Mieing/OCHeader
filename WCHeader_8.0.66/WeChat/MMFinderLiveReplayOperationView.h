@class WCFinderLiveFullScreenGestureRecognizer, NSString, MMFinderLiveTask, MMFinderLiveReplayView, MMFinderLiveReplayTask, MMFinderLiveTaskId, UIPanGestureRecognizer, WCFinderLiveReplayControlView, MMFinderLiveReplayTaskId, MMLiveGradientView, MMLiveRewardGiftRecievingAnimationView;
@protocol MMFinderLiveReplayOperationViewDelegate;

@interface MMFinderLiveReplayOperationView : UIView <UIGestureRecognizerDelegate, WCFinderLiveReplayControlDelegate, WCFinderLiveFullScreenGestureDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) MMLiveGradientView *topShadowView;
@property (retain, nonatomic) MMLiveGradientView *bottomShadowView;
@property (weak, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMFinderLiveReplayTaskId *replayTaskId;
@property (readonly, nonatomic) MMFinderLiveReplayTask *replayTask;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) BOOL isHiddenContent;
@property (retain, nonatomic) WCFinderLiveReplayControlView *controlView;
@property (weak, nonatomic) id<MMFinderLiveReplayOperationViewDelegate> operationDelegate;
@property (readonly, nonatomic) MMLiveRewardGiftRecievingAnimationView *giftReceivingAnimationView;
@property (weak, nonatomic) MMFinderLiveReplayView *replayView;
@property (retain, nonatomic) WCFinderLiveFullScreenGestureRecognizer *fullScreenGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (id)initWithLiveTask:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)onEnterLive;
- (void)onGetLiveInfo;
- (void)onReplayLiveInfoUpdate;
- (void)onGetDetailDataItem;
- (void)onExitLive;
- (void)configureOperationViewWithConnectMicState:(id)a0 connectMicStateValid:(BOOL)a1 anchorInAudioMode:(BOOL)a2 isScreenSharing:(BOOL)a3;
- (void)layoutUI;
- (void)layoutReplayControlView;
- (void)layoutShadowView;
- (void)createReplayControlView;
- (id)createHLSPlayerConfig;
- (BOOL)shouldHideTopMaskWhenCLeanScreen;
- (BOOL)shouldHideBottomMaskWhenCLeanScreen;
- (void)addFullScreenGesture;
- (void)showContents;
- (void)hideContents;
- (BOOL)shouldAllowProgressManipulationByPanning;
- (void)onFullScreenSingleTap;
- (BOOL)handleForFullScreenSingleTap;
- (void)onPanned:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onGetVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onVideoSizeChange:(struct CGSize { double x0; double x1; })a0;
- (id)getPreviewContainerSuperView;
- (double)getProgrressBarLeft;
- (double)getProgrressBarRight;
- (BOOL)isFullScreenGestureShouldReceiveTouch:(id)a0;
- (BOOL)isFullScreenPanGestureShouldReceiveTouch:(id)a0;
- (void).cxx_destruct;

@end
