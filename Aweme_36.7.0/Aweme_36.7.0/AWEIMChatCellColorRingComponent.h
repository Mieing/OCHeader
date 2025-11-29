@class AWEIMChatListCommonCell, NSString, UIGestureRecognizer;
@protocol AWEIMChatListColorRingInterface, AFDCloseFriendsColorRingDisplayManagerProtocol, AWEIMChatCellLiveStatusInterface, AFDColorRingFacadeProtocol;

@interface AWEIMChatCellColorRingComponent : AWEIMChatCellComponentBase <AWEIMChatCellColorRingInterface, UIGestureRecognizerDelegate, AWEIMChatCellColorRingViewDelegate, AFDCloseFriendsColorRingDisplayManagerDelegate, AFDCloseFriendsMessage>

@property (weak, nonatomic) id<AWEIMChatListColorRingInterface> colorRingService;
@property (weak, nonatomic) id<AWEIMChatCellLiveStatusInterface> liveStatusService;
@property (retain, nonatomic) UIGestureRecognizer *avatarTapGesture;
@property (weak, nonatomic) AWEIMChatListCommonCell *currentCell;
@property (nonatomic) BOOL shouldHide;
@property (retain, nonatomic) id<AFDCloseFriendsColorRingDisplayManagerProtocol> colorRingDisplayManager;
@property (nonatomic) BOOL isHitStory25Exp;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (nonatomic) BOOL hasTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)colorRingType;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellWillDisplay:(id)a0;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (BOOL)cf_canShowColorRingWithRingStatus:(long long)a0;
- (id)cf_transitionTargetView;
- (void)cf_didUpdateByColorRingChanged;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)registerMessages;
- (void)unregisterMessages;
- (void)closeFriendsDidUpdatedUserSetting:(BOOL)a0;
- (void)handleIMBaseViewControllerWillDisAppear;
- (void)onTabBarDidChangeNotification:(id)a0;
- (void)updateShow:(BOOL)a0;
- (BOOL)isDisplayingColorRing;
- (void)p_updateColorRingFacadeWithUid:(id)a0;
- (void)updateColorRingView;
- (void)didClickStoryRing:(id)a0;
- (BOOL)p_shouldShowCondition;
- (void)didClickColorRingView;
- (void)facadeBindColorRingView:(id)a0;
- (void)facadeUnbindColorRingView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;

@end
