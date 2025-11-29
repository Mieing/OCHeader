@class NSString;

@interface IESIMGroupSettingsOCService : HTSService <IESIMGroupSettingsOCServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showFormatSettingsWithCon:(id)a0 params:(id)a1;
- (void)showGroupSettingsWithCon:(id)a0 params:(id)a1;
- (void)showGroupManagementWithContext:(id)a0 params:(id)a1;
- (void)showSingleSettingsWithCon:(id)a0 params:(id)a1;
- (void)showGroupInfomationVCWithContext:(id)a0 hideDecription:(BOOL)a1;
- (void)showSetGroupNickNameVC:(id)a0;
- (void)showGroupNoticeEditVCWithContext:(id)a0;
- (void)showGroupNoticeDisplayVCWithContext:(id)a0;
- (void)showGroupDescEditVCWithContext:(id)a0;
- (void)showGroupDescDisplayVCWithContext:(id)a0;
- (void)showGroupSharePanelWithConversation:(id)a0;
- (void)showGroupSharePanelWithConversation:(id)a0 ext:(id)a1;
- (void)showMuteSettingViewWithConversation:(id)a0;
- (void)showGroupUpgradeViewControllerWithConversation:(id)a0;
- (void)showRemoveParticipatorViewWithConversation:(id)a0 enterFrom:(id)a1;
- (void)showGroupEntryLimitsViewWithEntrySettings:(id)a0 groupEntryLimitDict:(id)a1 groupManagementInfo:(id)a2 conversation:(id)a3 completion:(id /* block */)a4;
- (void)showGroupEntryLimitsViewWithEntrySettings:(id)a0 isFloatMode:(BOOL)a1 onVC:(id)a2 groupEntryLimitDict:(id)a3 groupManagementInfo:(id)a4 conversation:(id)a5 completion:(id /* block */)a6;
- (void)transferToAddGroupManagerWithCid:(id)a0 navbarType:(unsigned long long)a1 addGroupAdminBlock:(id /* block */)a2;
- (void)updateGroupEntryQuestionWithQuestion:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)showSetGroupApplyQuestionVC:(id)a0 andInfoModel:(id)a1;
- (void)showAnswerGroupApplyQuestionVC:(id)a0 andInfoModel:(id)a1;
- (long long)getGroupSetAdminLimitWithConversation:(id)a0;
- (void)showBlockManageViewControllerWithContext:(id)a0 blockManagerModel:(id)a1;
- (void)showGroupWelcomeManageViewControllerWithContext:(id)a0;
- (void)showQRCodeWithContext:(id)a0 withGroupNumber:(BOOL)a1;
- (void)copyGroupNumberToPasteBoard:(id)a0;
- (void)showSearchHistoryMessageVCWithContext:(id)a0;
- (void)showIMHistoryMediaVC:(id)a0 hostViewController:(id)a1;
- (void)showSharedVideoMediaVC:(id)a0 hostViewController:(id)a1;
- (void)transferToCreateGroupWithConversation:(id)a0;
- (void)transferToUserProfileWithConversation:(id)a0;
- (void)showChangeBubbleColorWithConversation:(id)a0;
- (void)cleanAllMessageWithContext:(id)a0;
- (void)transferToSingleReportWithContext:(id)a0;
- (void)transferToGroupUserSelfPageWithUser:(id)a0 shouldUseWebcastProfile:(BOOL)a1;
- (BOOL)isGroupTypeAndUseNewUI:(id)a0;
- (BOOL)isSingleTypeAndUseNewUI:(id)a0;
- (id)getGroupNickName:(id)a0;
- (id)getGroupAvatar:(id)a0 isNeedHighResolution:(BOOL)a1;
- (id)getGroupDescAttributeString:(id)a0;
- (BOOL)canGroupNoticeEdit:(id)a0;
- (BOOL)canGroupDescEdit:(id)a0;
- (BOOL)canJumpToSetAdminPageWithCid:(id)a0 navBarType:(unsigned long long)a1;
- (id)displayNameInSetAdminVCWithUser:(id)a0 participantModel:(id)a1;
- (id)getGroupManagementInfoWithConversation:(id)a0;
- (void)fetchGroupNumberWithContext:(id)a0 result:(id /* block */)a1;
- (void)didUnMuteForDemoteWithConversation:(id)a0;
- (void)adaptNavbarWithSetAdminVC:(id)a0;
- (void)trackGroupManagementMonitorAndShowErrorToastWithConversation:(id)a0 error:(id)a1 duration:(double)a2 removeID:(id)a3 hasRemoveFail:(BOOL)a4;
- (void)fetchConversationAuditSwitchStatusWithConvShortID:(id)a0 conversationType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateConversationAuditSwitchStatusWithConversation:(id)a0 conversationType:(unsigned long long)a1 switchStatus:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_trackCleanAllMessageConfirmForEnterMethod:(id)a0 con:(id)a1;
- (void)p_trackCleanAllMessageItemTapedWithCon:(id)a0;

@end
