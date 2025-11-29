@class NSString, AWEIMMessageConversation;

@interface AWEIMRTVListSelectPresenter : AWEIMRTVBaseListSelectPresenter <AWEIMRTVListSelectProtocol, AWEIMRTVListSelectPresenterProtocol>

@property (nonatomic) BOOL hasDoSelectOperation;
@property (nonatomic) long long maxCanSelectParticipatorCount;
@property (nonatomic) long long enterFrom;
@property (nonatomic) long long rtvType;
@property (retain, nonatomic) AWEIMMessageConversation *conversition;
@property (copy, nonatomic) NSString *customTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)__isCurrentUserAParticipantInConversation:(id)a0;
- (void)listSelectBaseViewController:(id)a0 didClickRightNavigationButtonWithSelectedUsersID:(id)a1;
- (void)listSelectBaseViewController:(id)a0 didClickLeftNavigationButtonWithSelectedUsersID:(id)a1;
- (BOOL)listSelectBaseViewController:(id)a0 canSelectWithCellModel:(id)a1;
- (void)listSelectBaseViewController:(id)a0 didSelectCellModel:(id)a1;
- (void)listSelectBaseViewController:(id)a0 didSelectedChange:(id)a1;
- (long long)__rtvEnterFromWithAWERTVEnterFrom:(long long)a0;
- (long long)__maxGroupVoipMemberCount;
- (BOOL)__canSelectMoreUserWithController:(id)a0;
- (void)__trackDefaultSelectedOnlineFriendsCancledWithConversionID:(id)a0 roomID:(id)a1;
- (void)__trackVideoCallStartGroupCallWithAction:(id)a0 rtvType:(long long)a1;
- (void)selectAndInvokeGroupVoipWithConversation:(id)a0 type:(long long)a1 enterFrom:(long long)a2 extraAction:(unsigned long long)a3 selfStickerID:(id)a4 callback:(id /* block */)a5;
- (long long)__maxCanSelectCountWithDefaultSelectionCount:(unsigned long long)a0;
- (void)__trackVideoCallHasDoSelectOperationIfNeeded;
- (void)__trackVideoCallJoinBannerConfimWithRTVType:(long long)a0;
- (void)__trackEvokeContactListWithConversionID:(id)a0 roomID:(id)a1;
- (void)__trackConfirmInviteClickWithConversionID:(id)a0 roomID:(id)a1 addedCount:(long long)a2;
- (void).cxx_destruct;

@end
