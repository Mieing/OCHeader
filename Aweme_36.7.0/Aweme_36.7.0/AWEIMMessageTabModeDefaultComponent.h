@class NSString, AWEIMMessageTabMultiTabConfig;

@interface AWEIMMessageTabModeDefaultComponent : AWEIMComponentBase <AWEIMMessageTabModeProviderComponentProtocol>

@property (retain) AWEIMMessageTabMultiTabConfig *multiTabConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)enterpriseNoticeShouldStickOnTop;
- (BOOL)shouldDisableVajra;
- (BOOL)isHeaderFixedInMessageTab;
- (void)updateHighlyProspectiveOpenStatus:(BOOL)a0 currentStatus:(long long)a1;
- (id)tabOrder;
- (BOOL)enableMessageTabFullSwip;
- (BOOL)enablingAnyMultiTabMode;
- (BOOL)shouldAppendPaddingsUnderTableViewHeaderForEntryType:(long long)a0;
- (BOOL)addEmptyViewToChatListTableView;
- (BOOL)canCreateChildDataController;
- (BOOL)canShowInvalidConvTab;
- (BOOL)shouldDisableCellSwipeAction;
- (BOOL)canShowOnlineAvatarList;
- (BOOL)canShowMessageTabInteractComponent;
- (BOOL)shouldPinIndexView;
- (unsigned long long)indicatorViewStyle;
- (BOOL)disableMomentEntryFromPanDown;
- (BOOL)shouldAddLongPressGestureForIMChatList;
- (BOOL)shouldEnableLongPressGestureForIMChatList;
- (id)trackingStatusVersion;
- (BOOL)shouldHideIndexerLine;
- (BOOL)noticeListComponentShouldRemoveCurrentViewControllerFromTabSkeletonWhenSwitchAccount;
- (BOOL)campaignShouldUpdateFakeNavBar;
- (long long)tabSkeletonCellSwipeType;
- (BOOL)chatListComponenetUseMessage5kAsTitle;
- (BOOL)setNickNameShouldBePrioritised;
- (BOOL)canShowSchoolGroup;
- (BOOL)canShowNoticeFakeTip;
- (BOOL)enableEnterprisePlusButtonStrategy;
- (long long)enterprisePlusButtonStrategy;
- (BOOL)hasOpenHighlyProspective;
- (long long)currentHighlyProspectiveStatus;
- (void)userDidLogin;
- (void)setupMultiTabConfig;
- (BOOL)canBeActivated;
- (void)userDidLoginFirstUpdateCurrentFullUser;
- (BOOL)enableNotice;
- (void).cxx_destruct;
- (unsigned long long)currentMode;
- (id)init;

@end
