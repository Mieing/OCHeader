@class NSString, HTSLiveToolbarItem, IESLivePlaybackAutoHideLockButton, UIView, UIButton;

@interface IESLivePlaybackAutoHideFragment : IESLivePlaybackComponent <IESLivePlaybackAutoHideRouter, IESLivePlaybackTapAction, IESLivePlaybackSeekAction, IESLivePlaybackAutoHideAction, IESLivePlaybackOrientationActions, IESLivePlaybackCommentAction, IESVSVideoPlayAction, IESLivePlaybackSeekPlayAction, IESLivePlaybackShareRouter, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) IESLivePlaybackAutoHideLockButton *lockButton;
@property (retain, nonatomic) HTSLiveToolbarItem *lockBtnItem;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *tipView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitPlayerFrame;
@property (nonatomic) BOOL isUserInteracting;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) BOOL isAllComponentsHide;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL isPortraitStream;
@property (copy, nonatomic) id /* block */ hideComponentTask;
@property (copy, nonatomic) id /* block */ hideLockScreenTask;
@property (nonatomic) BOOL intrinsicElementsHide;
@property (nonatomic) BOOL ignoreIntrinsicElementsWhenHideAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)onOrientationTransitionBegin:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)didForceUpdateToOrientation:(long long)a0;
- (void)sharePanelWillShow;
- (void)hideTip;
- (void)hideAllElements;
- (void)showAllElements;
- (void)delayToHideAllComponents;
- (void)setAllViewsTransformToHidden:(BOOL)a0;
- (void)lockBtnDidClick;
- (void)zoneClicked:(struct CGPoint { double x0; double x1; })a0;
- (void)onOrientationTransitionEnd;
- (void)componentWillMount;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restartAutoHideByUserAction;
- (void)hideAllElementsAnimated:(BOOL)a0;
- (void)showAllElementsAnimated:(BOOL)a0;
- (void)setUserInteractingEnable:(BOOL)a0;
- (void)commentDidStart;
- (void)commentDidEnd;
- (void)vsSeekPlayDidPanGrogress:(id)a0;
- (void)streamWillChangeWithEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (BOOL)isCurrentPortrait;
- (BOOL)usePadNewStyle;
- (void)hideAllComponents:(unsigned long long)a0;
- (void)updateUIWithStyle:(BOOL)a0;
- (void)setupLockButtonIfNeeded;
- (void)remakeLockBtn;
- (BOOL)p_lockBtnHidden;
- (void)pad_remakeLockBtn;
- (void)phone_remakeLockBtn;
- (void)showAllComponents:(unsigned long long)a0;
- (BOOL)isAllComponentsAndIntrinsicElementsHide;
- (void)tryNotifyServiceAnimationStart:(BOOL)a0 source:(unsigned long long)a1;
- (void)tryNotifyServiceAnimationEnd:(BOOL)a0 source:(unsigned long long)a1;
- (void)hideLockScreenBtnNeedDelay:(BOOL)a0;
- (void)setAllViewsTransformToHidden:(BOOL)a0 isLandscape:(BOOL)a1;
- (void)backgroundClicked:(id)a0;
- (void).cxx_destruct;

@end
