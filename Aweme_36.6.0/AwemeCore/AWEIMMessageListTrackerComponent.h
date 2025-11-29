@class NSString, NSMutableDictionary, NSDictionary, AWEIMComponentManager;
@protocol IESIMConversationProtocol, AWEIMMessageVisibleCellInterface;

@interface AWEIMMessageListTrackerComponent : AWEIMComponentBase <AWEIMMessageListTrackerInterface, AWEIMComponentContainer, AWEIMComponentManagerDependency, IESIMCellRealDisplayProxyAction>

@property (retain, nonatomic) NSMutableDictionary *shownSetsMap;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (weak, nonatomic) id<AWEIMMessageVisibleCellInterface> visibleCellService;
@property (nonatomic) long long livePipShowCount;
@property (nonatomic) BOOL trackeredOnline;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *trackSessionID;
@property (copy, nonatomic) NSDictionary *conversationTrackParams;
@property (nonatomic) long long unreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)tableView:(id)a0 awe_partDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setShown:(long long)a0 uniqueID:(id)a1;
- (BOOL)hasShown:(long long)a0 uniqueID:(id)a1;
- (void)onCellWillDisplay:(id)a0 indexPath:(id)a1;
- (void)trackPerfWithMethod:(id)a0 withMessageVM:(id)a1 startTime:(double)a2 extra:(id)a3;
- (void)trackMessageListOnlineFirstFrame;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (void)p_viewDidAppear;
- (void)tableView:(id)a0 awe_realDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)p_conversationCommonParamsWithConversation:(id)a0;
- (void)trackCanDelay;
- (void)p_setupSendMessageResponseTrackNodeWithContext:(id)a0;
- (void)p_trackGroupExceptionIfNeeded;
- (void)p_sendEnterTrackIfNeeded;
- (id)p_pageEnvTrackerCommonInfo;
- (void)p_callCellDisplay:(id)a0 withOption:(unsigned long long)a1;
- (void)p_trackOldCellShow:(id)a0;
- (void)p_trackMessageRenderCorrect;
- (void).cxx_destruct;

@end
