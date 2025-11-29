@class UIView, NSArray, NSString, IESLiveMediaTitleStore, HTSLiveAmazingBackgroundView, IESLiveMediaTitleView;
@protocol IESLiveBubbleGuide, IESLiveMediaRoomActions, IESLiveFeedDrawerProviderAdapter;

@interface IESLiveMediaRoomTitleFragment : IESLiveRoomComponent <IESLiveMediaRoomProfileProvider, IESLiveMessageInteractionModuleCommentAction, HTSLiveHideComponentAction, IESLiveAutoRotateAction, IESLiveMediaRoomTitleInterface>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLiveMediaTitleView *titleView;
@property (retain, nonatomic) IESLiveMediaTitleStore *store;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *playerControlPortraitTitleMask;
@property (retain, nonatomic) NSArray *didHideViews;
@property (retain, nonatomic) UIView *introduceBgView;
@property (retain, nonatomic) UIView *introduceBottomBgView;
@property (retain, nonatomic) UIView *introduceView;
@property (weak, nonatomic) id<IESLiveFeedDrawerProviderAdapter> feedDrawProvider;
@property (retain, nonatomic) id<IESLiveMediaRoomActions> actionCreator;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isShowIntroduce;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)showComponentsForPortrait;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentRefresh;
- (void)liveAccessibility;
- (void)hideIntroduce;
- (void)bringIntroduceToFront;
- (void)updateRoomProfile:(long long)a0;
- (void)hideIntroductionView;
- (void)showIntroduce;
- (BOOL)shouldShowRoomTitleImmediately;
- (void)addTitleView;
- (void)trackTitleDidShow;
- (void)changeTipsToastWithOrientation:(long long)a0;
- (void)removeTitleViewBeforeRotateIfNeed;
- (void)showBubbleTipsToast;
- (void)hideExtraViewWhileIntroduce:(BOOL)a0;
- (void)trackTitleDidClick;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })introduceContentFrame;
- (void)trackIntroduceDidShow;
- (id)pickUpNeedHideViews:(id)a0;
- (BOOL)p_enableShowTipsBubble;
- (void)p_hasShowTipsBubble;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
