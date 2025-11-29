@class NSDictionary, LSIMChatListVM;

@interface LSIMChatListTracker : LSIMBaseTracker

@property (copy, nonatomic) NSDictionary *pageInitUserStateDict;
@property (nonatomic) BOOL fmpRecorded;
@property (readonly, weak, nonatomic) LSIMChatListVM *vm;

- (id)initWithChatListVM:(id)a0;
- (void)techTrackPageInit;
- (void)trackEnterChatList;
- (void)trackClickedUpButton:(id)a0;
- (void)trackClickedListCellParams:(id)a0;
- (void)trackShowCellWithParams:(id)a0;
- (void)trackClickServiceProgress;
- (void)trackShowServiceProgress;
- (void)trackTipShowHighlight;
- (void)trackTipClickHighlight:(id)a0;
- (void)trackTipShowClose;
- (void)trackTipClickClose;
- (void)trackDeleteConversationAction:(id)a0 params:(id)a1;
- (void)techTrackChatListResultSucceed:(BOOL)a0 errMsg:(id)a1 startTime:(long long)a2;
- (void)techTrackChatListFMPForView:(id)a0;
- (void)trackLoadHistoryConversationWithSize:(long long)a0;
- (void).cxx_destruct;

@end
