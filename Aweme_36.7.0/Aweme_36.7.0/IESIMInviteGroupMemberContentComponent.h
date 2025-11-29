@class NSDate, NSArray, AWEIMGroupChatMonitor, NSString, IESIMContactPickerComponentContext, UIView, IESIMContactPickerUserDataProvider;
@protocol IESIMConversationProtocol, IESIMTextLoadingViewProtocol, IESIMPerfFPSMonitorProtocol;

@interface IESIMInviteGroupMemberContentComponent : IESIMContactPickerCollectionViewContentComponent <IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerConfirmAction, IESIMContactPickerContentAction>

@property (retain, nonatomic) IESIMContactPickerUserDataProvider *stickOnTopProvider;
@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) NSArray *conversationParticipantsUids;
@property (retain, nonatomic) UIView<IESIMTextLoadingViewProtocol> *inviteLoadingView;
@property (retain, nonatomic) NSDate *viewDidLoadTimestamp;
@property (retain, nonatomic) AWEIMGroupChatMonitor *monitor;
@property (retain, nonatomic) id<IESIMPerfFPSMonitorProtocol> fpsMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__handleErrorResponse:(id)a0 showToast:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;

- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)dataProvider:(id)a0 updateCellModel:(id)a1;
- (id)dataProvider:(id)a0 cellModelForShareModel:(id)a1;
- (id)getProviders;
- (void)contactPickerConfirmService:(id)a0 didConfirmWithCurrentSelects:(id)a1;
- (void)contactPickerConentService:(id)a0 didLoadData:(id)a1;
- (id)__uidStringArrayFromCreateRecommendUsers;
- (id)__uidStringArrayFromRecommendUsers;
- (void)p_trackPanelDismiss;
- (void)__trackFPS;
- (void)__inviteNotFriendsInChat:(id)a0 completion:(id /* block */)a1;
- (id)p_getRelationTagModel:(id)a0;
- (id)maximumSelectCount;
- (void)selectOverMaximumLimitWithCellModel:(id)a0;
- (void)didSelectCellModelFromSearch:(id)a0;
- (id)__extraSectionModel;
- (id)__cellModelWithShareModel:(id)a0;
- (void)__injectCommonInfoToCellModel:(id)a0;
- (void)__didSelectWithCellModel:(id)a0;
- (void)__updateCellModel:(id)a0 withIsSelected:(BOOL)a1;
- (long long)__trackerCellOrderOfCellModel:(id)a0;
- (void)__trackSearchResultIfNeededWithCellModel:(id)a0;
- (id)__stickOnTopUidArray;
- (void)__readConversationParticipants;
- (void)__selectStickOnTopUidIfNeeded;
- (void)__updateHasInConversationIfNeeded:(id)a0;
- (void)__inviteIntoChat;
- (BOOL)__needSelectStickOnTopItem;
- (void)__trackPanelShowWithLoadedData:(id)a0;
- (BOOL)__enableDefaultSelect;
- (void)__showInviteLoadingView;
- (id)__splitSelectedUsers;
- (void)__handleInviteWithResponse:(id)a0 error:(id)a1 inviteNotFriendsSucceed:(BOOL)a2 addedParticipantsCount:(long long)a3 friendUidArray:(id)a4;
- (void)__inviteCompleteWithAddCount:(long long)a0 inviteCount:(long long)a1;
- (void)__dismissInviteLoadingView;
- (void)__trackInviteResultWithAddCount:(long long)a0 inviteCount:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
