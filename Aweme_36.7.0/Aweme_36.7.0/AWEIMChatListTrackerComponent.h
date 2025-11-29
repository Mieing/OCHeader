@class NSMutableDictionary, AWEIMChatListCellTailTracker, NSMutableSet, NSString;
@protocol AWEIMChatListHeaderInterface;

@interface AWEIMChatListTrackerComponent : AWEIMComponentBase <AWEIMChatListTrackerInterface, AWEUserMessage>

@property (nonatomic) BOOL curentViewIsNotVisible;
@property (retain, nonatomic) NSMutableSet *chatCellHintTrackerSet;
@property (retain, nonatomic) NSMutableSet *consecutiveChatDaysTrackerSet;
@property (retain, nonatomic) NSMutableDictionary *consecutiveChatDaysTrackerDictionary;
@property (retain, nonatomic) NSMutableSet *exchangeCameraReplyTrackerSet;
@property (retain, nonatomic) NSMutableSet *liveStatusTrackerSet;
@property (retain, nonatomic) AWEIMChatListCellTailTracker *cellTailTracker;
@property (nonatomic) long long livePipShowCount;
@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> listHeaderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)didEndDisplayingCell:(id)a0;
- (void)trackChatCellHintShowWithHintModel:(id)a0 cellContext:(id)a1 option:(unsigned long long)a2 extraParams:(id)a3;
- (void)trackChatCellHintShowWithHintModel:(id)a0 cellContext:(id)a1 option:(unsigned long long)a2 extraParams:(id)a3 customEventName:(id)a4;
- (void)trackChatCellHintClickWithHintModel:(id)a0 cellContext:(id)a1 option:(unsigned long long)a2 extraParams:(id)a3;
- (void)trackChatCellHintClickWithHintModel:(id)a0 cellContext:(id)a1 option:(unsigned long long)a2 extraParams:(id)a3 customEventName:(id)a4;
- (void)trackDidShowExchangeCameraIcon:(id)a0;
- (void)trackDidDisplayLiveWithSessionId:(id)a0 params:(id)a1;
- (void)removeFromHintTrackerSetWithHintModel:(id)a0 cellContext:(id)a1;
- (id)chatType:(id)a0;
- (void)trackPerfCellRender:(id)a0 cost:(long long)a1;
- (void)addServiceChatTrackers;
- (id)trackerIdentifierWithHintModel:(id)a0 cellContext:(id)a1;
- (id)__paramsWithOption:(unsigned long long)a0 cellContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
