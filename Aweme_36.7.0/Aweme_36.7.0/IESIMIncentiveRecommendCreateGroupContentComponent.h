@class UIView, NSString, IESIMContactPickerComponentContext, AWEIMGroupChatMonitor, NSDate;
@protocol IESIMPerfFPSMonitorProtocol;

@interface IESIMIncentiveRecommendCreateGroupContentComponent : IESIMContactPickerCollectionViewContentComponent <IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerConfirmAction, IESIMContactPickerContentAction>

@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (retain, nonatomic) NSDate *viewDidLoadTimestamp;
@property (retain, nonatomic) AWEIMGroupChatMonitor *monitor;
@property (retain, nonatomic) id<IESIMPerfFPSMonitorProtocol> fpsMonitor;
@property (nonatomic) BOOL hasIncentiveRecommendCreateGroupAward;
@property (retain, nonatomic) UIView *collectionBackgroundViewForSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)dataProvider:(id)a0 updateCellModel:(id)a1;
- (void)dataProvider:(id)a0 filteredIdentifier:(id)a1;
- (id)dataProvider:(id)a0 cellModelForShareModel:(id)a1;
- (void)searchWithKeyword:(id)a0;
- (id)getProviders;
- (void)__log:(id)a0;
- (void)contactPickerConfirmService:(id)a0 didConfirmWithCurrentSelects:(id)a1;
- (id)groupCreateSource;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)searchService:(id)a0 stateChangedTo:(BOOL)a1;
- (id)pageSwitchConfig;
- (id)createGroupContext;
- (void)contactPickerConentService:(id)a0 didLoadData:(id)a1;
- (void)contactPickerConentService:(id)a0 didChangeToEmpty:(BOOL)a1;
- (id)naviBarConfig;
- (void)trackPanelDismiss;
- (BOOL)enableRecoverOffsetAfterSearch;
- (id)maximumSelectCount;
- (void)selectOverMaximumLimitWithCellModel:(id)a0;
- (void)didSelectCellModelFromSearch:(id)a0;
- (BOOL)disableAutoExitSearch;
- (void)injectCommonInfoToCellModel:(id)a0;
- (void)updateCellModel:(id)a0 withIsSelected:(BOOL)a1;
- (void)__didSelectWithCellModel:(id)a0;
- (id)createChatWithCompletion:(id /* block */)a0 isSingleChat:(BOOL)a1 shouldRouter:(BOOL)a2 willTransferToMessageVCBlock:(id /* block */)a3 ext:(id)a4;
- (void)setupDecorationViewWithSectionBuilder:(id)a0;
- (void)trackGroupQoSCreateGroupStart;
- (void)trackFPS;
- (id)getRelationTagModel:(id)a0;
- (long long)trackerCellOrderOfCellModel:(id)a0;
- (void)trackSearchResultIfNeededWithCellModel:(id)a0;
- (id)cellModelWithShareModel:(id)a0;
- (void)createChat;
- (BOOL)shouldReturnBeforeCreateChat;
- (void)trackIncentiveRecommendCreateGroupPanelClickEvent;
- (id)createSingleChatWithShouldRouter:(BOOL)a0 willTransferToMessageVCBlock:(id /* block */)a1 ext:(id)a2;
- (void)trackCreateGroupClick;
- (id)groupCreationContextWithExt:(id)a0;
- (id)createGroupTrackInfoWithEnterFrom:(id)a0 enterMethod:(id)a1 selectCount:(unsigned long long)a2 ext:(id)a3 createResult:(id)a4;
- (void)callbackCompletion:(id /* block */)a0 withConversationIdentifier:(id)a1 groupChatPanelDelegate:(id)a2;
- (id)transferToConversationIfNeededWithShouldRouter:(BOOL)a0 willTransferToMessageVCBlock:(id /* block */)a1 conversationIdentifier:(id)a2 paramDict:(id)a3 ext:(id)a4 trackInfoParam:(id)a5;
- (void)showSendInviteCardIfNeededWithConversationIdentifier:(id)a0 groupCreateResult:(id)a1;
- (void)sendGroupShareCommandMessageIfNeededWithConversationIdentifier:(id)a0;
- (void)trackGroupShareFailEventWithGroupCreateResult:(id)a0;
- (id)createErrorToastWithCheckDict:(id)a0 checkMessage:(id)a1;
- (void)callbackCreateErrorWithCompletion:(id /* block */)a0 groupChatPanelDelegate:(id)a1 toastContent:(id)a2;
- (void)trackEnterChatWithConversationIdentifier:(id)a0;
- (int)createGroupSelectLimit;
- (BOOL)enableCreateGroupAlone;
- (void)updateConfirmButtonState;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)dealloc;
- (void)dismissViewControllerWithCompletion:(id /* block */)a0;

@end
