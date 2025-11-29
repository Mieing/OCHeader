@class NSString;
@protocol AWEIMChatCellColorRingInterface, AWEIMChatListTrackerInterface, AWEIMMessageTabLiveStatusProtocol, AWEIMChatCellOnLineDotInterface, IESIMMessageTabLiveObserver;

@interface AWEIMChatCellLiveIndicatorComponent : AWEIMChatCellComponentBase <AWEIMChatCellLiveStatusInterface, AWEIMMessageTabChatLiveStatusSubscriber, AWEIMLiveStatusInteractionAction, AWEIMCellLiveIndicatorViewDelegate>

@property (weak, nonatomic) id<AWEIMChatCellOnLineDotInterface> onlineDotService;
@property (weak, nonatomic) id<AWEIMChatCellColorRingInterface> colorRingService;
@property (weak, nonatomic) id<AWEIMChatListTrackerInterface> tracker;
@property (weak, nonatomic) id<IESIMMessageTabLiveObserver> messageTabLiveObserver;
@property (nonatomic) BOOL isDisplayingLiveStatus;
@property (retain, nonatomic) id<AWEIMMessageTabLiveStatusProtocol> liveStatusInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didClickLiveStatusContainerView;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentWhenCellPrepareForReuse;
- (id)p_enterFrom;
- (void)p_createPresenterIfNeeded;
- (void)triggeredByAccessibilityActivity;
- (void)p_subscribeLiveStatus;
- (void)p_updateLiveStatusInfoSupportAsyncUpdate:(id)a0;
- (BOOL)p_isLivingStatus:(long long)a0;
- (id)p_enterMethod;
- (void)p_updateLiveStatusInfo:(id)a0;
- (BOOL)p_currentInfoIsEqualTo:(id)a0;
- (void)p_trackDisplayEvent:(id)a0;
- (void)onLiveStatusInfoChanged:(id)a0;
- (void).cxx_destruct;

@end
