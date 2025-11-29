@class NSDictionary, LSIMChatDetailVM;

@interface LSIMChatDetailTracker : LSIMBaseTracker

@property (copy, nonatomic) NSDictionary *pageInitUserStateDict;
@property (nonatomic) long long enterTime;
@property (nonatomic) double viewAppearTime;
@property (nonatomic) double stayDuration;
@property (nonatomic) BOOL fmpRecorded;
@property (nonatomic) BOOL initResultRecorded;
@property (readonly, weak, nonatomic) LSIMChatDetailVM *vm;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)registerNotification;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (id)defaultTechTrackerParams;
- (void)businessTrackEvent:(id)a0 params:(id)a1;
- (void)trackChatDetailVCButtonType:(unsigned long long)a0 state:(unsigned long long)a1 itemName:(id)a2 params:(id)a3;
- (id)stateStringFrom:(unsigned long long)a0;
- (id)buttonStringFrom:(unsigned long long)a0;
- (id)defaultBusinessTrackerParams;
- (id)pageInitRouterParams;
- (void)techTrackEvent:(id)a0 params:(id)a1;
- (void)techTrackPageResult:(BOOL)a0 startTime:(long long)a1 reason:(id)a2 errorMsg:(id)a3;
- (id)initWithChatListVM:(id)a0;
- (void)trackEnterChatDetail;
- (void)trackLeaveChatDetail;
- (void)trackChatDetailClickedPanelItem:(id)a0;
- (void)trackChatDetailCSNaviBarClickedItem:(id)a0;
- (void)trackFloatingCardState:(unsigned long long)a0 cardType:(id)a1 itemID:(id)a2 isSend:(BOOL)a3;
- (void)trackChatDetailActionButtonShowWithModels:(id)a0;
- (void)trackChatDetailActionButtonClickedWithModel:(id)a0;
- (void)trackChatDetailPlusPanelShowWithModels:(id)a0;
- (void)trackChatDetailPlusPanelClickedWithModel:(id)a0;
- (void)trackSendUserEnterMessageAction:(id)a0;
- (void)trackHideMessage:(id)a0 params:(id)a1;
- (void)techTrackPageInit;
- (void)techTrackPageResult:(BOOL)a0 startTime:(long long)a1;
- (void)techTrackMessageReceived:(id)a0;
- (void)trackPhotoPickerWithAction:(id)a0;
- (void)trackPiturePickerWithAction:(id)a0;
- (void)trackIMCardList:(id)a0;
- (void)techTrackChatDetailFMPForView:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
