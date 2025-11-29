@class NSNumber, NSString, AWEIMMessageTabMultiTabConfig;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabModeProviderManagerInterface;

@interface AWEIMMessageTabModeEnterpriseModesComponent : AWEIMMessageTabModeDefaultComponent <AWEIMMessageTabModeUpdateEnterpriseModeInterface>

@property (nonatomic) unsigned long long enterpriseMode;
@property (weak, nonatomic) id<AWEIMMessageTabModeProviderManagerInterface> modeProviderManagerInterface;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeInterface;
@property (nonatomic) BOOL hasReportedMessageTabModeToServer;
@property (retain, nonatomic) AWEIMMessageTabMultiTabConfig *professionalModeConfig;
@property (retain, nonatomic) AWEIMMessageTabMultiTabConfig *regularModeConfig;
@property (nonatomic) long long currentEnterprisePlusButtonStrategy;
@property (retain, nonatomic) NSNumber *highlyProspectiveOpenStatus;
@property (retain, nonatomic) NSNumber *highlyProspectiveCurrentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)enterpriseNoticeShouldStickOnTop;
- (BOOL)shouldDisableVajra;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateHighlyProspectiveOpenStatus:(BOOL)a0 currentStatus:(long long)a1;
- (id)tabOrder;
- (BOOL)enableMessageTabFullSwip;
- (BOOL)shouldAppendPaddingsUnderTableViewHeaderForEntryType:(long long)a0;
- (BOOL)canCreateChildDataController;
- (BOOL)canShowInvalidConvTab;
- (BOOL)canShowOnlineAvatarList;
- (BOOL)canShowMessageTabInteractComponent;
- (BOOL)disableMomentEntryFromPanDown;
- (id)trackingStatusVersion;
- (BOOL)chatListComponenetUseMessage5kAsTitle;
- (BOOL)setNickNameShouldBePrioritised;
- (BOOL)canShowSchoolGroup;
- (BOOL)canShowNoticeFakeTip;
- (BOOL)enableEnterprisePlusButtonStrategy;
- (long long)enterprisePlusButtonStrategy;
- (BOOL)hasOpenHighlyProspective;
- (long long)currentHighlyProspectiveStatus;
- (void)userDidLogin;
- (void)requestToChangeEnterpriseMode;
- (void)requestToChangeEnterpriseModeTo:(unsigned long long)a0 isInitial:(BOOL)a1;
- (void)setupMultiTabConfig;
- (BOOL)canBeActivated;
- (void)userDidLoginFirstUpdateCurrentFullUser;
- (void)__setMessageTabModeFromLocalCache;
- (void)messageBaseViewControllerDidAppear:(id)a0;
- (BOOL)__currentAccountEnableEnterpriseMode;
- (void)resetHighlyProspectiveDatas;
- (void)__updateToMode:(unsigned long long)a0;
- (void)reportMessageTabModeToServer;
- (void).cxx_destruct;
- (unsigned long long)currentMode;
- (void)dealloc;

@end
