@class NSArray, AWELiveVisibleTypeModel, BDXBridgeEventSubscriber, NSString, CreateInfoResponse_CreateInfo;

@interface AWELiveVisibleScopeListFragment : IESLiveGuideComponent <AWELiveVisibleScopeListRouter, IESLiveGuidePaidVisibleEvent, IESLiveGuideToolBarAction, IESLiveGuideOpenLiveAdditionalEvent>

@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (nonatomic) int realCurrentVisibleType;
@property (nonatomic) unsigned long long currentVisibleType;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) AWELiveVisibleTypeModel *curPaidSelectModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *vipPanelSubscriber;
@property (retain, nonatomic) NSArray *chatGroupList;
@property (nonatomic) int realVisibleType;
@property (nonatomic) unsigned long long currentSelectedVisibleType;
@property (retain, nonatomic) NSArray *selectedUserList;
@property (retain, nonatomic) AWELiveVisibleTypeModel *paidSelectModel;
@property (retain, nonatomic) NSArray *selectedChatGroupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarItemReloadFinished;
- (void)addSubscribeVIPPanelFinishSettingIfNeed;
- (void)handleSchemaOpenTryLive;
- (id)getVisibleScopeDetailListVC:(unsigned long long)a0 liveType:(unsigned long long)a1 DIContext:(id)a2 selectedBlock:(id /* block */)a3;
- (id)getItemAddTextOf:(unsigned long long)a0;
- (id)getCreateAPIParamsOf:(unsigned long long)a0;
- (id)getTrackStrOf:(unsigned long long)a0;
- (void)updateOpenLiveModel:(id)a0;
- (void)openTryLiveVisibleScopeDetailVC:(id)a0;
- (id)getVisiblePanelViewWithType:(unsigned long long)a0 liveType:(unsigned long long)a1 DIContext:(id)a2 selectedBlock:(id /* block */)a3;
- (id)getPaidVisiblePanelViewWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 isPaidOpenLiveNow:(BOOL)a3 selectedBlock:(id /* block */)a4;
- (void)setTryLiveVisibleScopeWithDIContext:(id)a0 completedBlock:(id /* block */)a1;
- (void)openAudienceExemptionPageWithCompletion:(id /* block */)a0;
- (void)changeGuidePaidLiveStatus:(BOOL)a0;
- (void)changePaidVisibleRange:(long long)a0;
- (void)willCancelPaidLiveStateWhenChangeLiveType:(unsigned long long)a0;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)initSelect;
- (void)handleSelectType:(unsigned long long)a0 userList:(id)a1;
- (void)handleSchemaChatGroupLiveIfNeed;
- (BOOL)isInPaidSelectionType:(unsigned long long)a0;
- (void)handleUpdateVisibleScopeResult:(BOOL)a0 userList:(id)a1;
- (void)addUploadVisibleSelectMonitor:(id)a0 type:(unsigned long long)a1 userList:(id)a2 updateFailedList:(id)a3 cancelFailedList:(id)a4;
- (id)chatGroupListStr:(id)a0;
- (void)saveSelectType:(unsigned long long)a0 realType:(int)a1 source:(id)a2;
- (void)showToastWithType:(unsigned long long)a0;
- (id)parseGroupIDListStr:(id)a0;
- (void)setChatGroupLiveVisibleScopeWithDataSource:(id)a0;
- (void)showVisibleTryLiveErrorAlert;
- (id)userIdStringArray:(id)a0;
- (void).cxx_destruct;

@end
