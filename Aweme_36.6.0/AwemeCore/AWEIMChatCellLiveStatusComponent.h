@class NSString, AWEBinding, NSIndexPath, NSObject;
@protocol AWELiveEntryProtocol, AWELiveStatusManagerProtocol, AWEIMChatCellColorRingInterface, AWEIMChatListTrackerInterface, AWELiveStatusMonitorProtocol, AWEIMChatCellOnLineDotInterface, IESIMGroupLiveStateInterface;

@interface AWEIMChatCellLiveStatusComponent : AWEIMChatCellComponentBase <AWEIMChatCellLiveStatusInterface, AWEIMCellLiveStatusContainerViewDelegate, IESIMUserServiceMessage, AWEIMLiveStatusInteractionAction, IESIMGroupLiveStatusChangeAction>

@property (nonatomic) BOOL isDisplayingLiveStatus;
@property (weak, nonatomic) id<AWEIMChatCellOnLineDotInterface> onlineDotService;
@property (nonatomic) BOOL hasBindLiveStatus;
@property (weak, nonatomic) id<AWEIMChatListTrackerInterface> tracker;
@property (weak, nonatomic) id<AWEIMChatCellColorRingInterface> colorRingService;
@property (weak, nonatomic) NSObject<AWELiveStatusMonitorProtocol> *cachedMonitor;
@property (weak, nonatomic) id<IESIMGroupLiveStateInterface> groupLiveStateInterface;
@property (weak, nonatomic) id<AWELiveEntryProtocol> liveEntryService;
@property (weak, nonatomic) id<AWELiveStatusManagerProtocol> liveStatusManager;
@property (retain) NSIndexPath *cellIndexPath;
@property (retain, nonatomic) AWEBinding *liveStatusBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)groupLiveStateChange:(BOOL)a0 ownerID:(id)a1 roomID:(id)a2;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)didClickLiveStatusContainerView;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentWhenCellPrepareForReuse;
- (void)triggeredByAccessibilityActivity;
- (id)p_userID;
- (long long)p_index;
- (void)p_updateLiveStatus;
- (void)p_removeObserver;
- (BOOL)p_shouldShow;
- (void)p_updateLiveStatusIndicatorViewWithMonitor:(id)a0;
- (void)p_updatePresenterDisplayEnable:(BOOL)a0;
- (void)p_trackDidDisplayLiveWithMonitor:(id)a0;
- (long long)p_locationOfChatAtChatArray:(id)a0 inArray:(id)a1;
- (void)p_removeCacheLiveMonitor;
- (void).cxx_destruct;
- (void)dealloc;

@end
