@class AWEIMGroupChatMonitor, NSString, IESIMContactPickerComponentContext, NSDate, IESIMContactPickerUserDataProvider;
@protocol IESIMPerfFPSMonitorProtocol;

@interface IESIMCreateGroupPanelContentComponent : IESIMContactPickerCollectionViewContentComponent <IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerConfirmAction, IESIMContactPickerContentAction, IESIMRadarGroupMessage>

@property (retain, nonatomic) IESIMContactPickerUserDataProvider *stickOnTopProvider;
@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (retain, nonatomic) NSDate *viewDidLoadTimestamp;
@property (retain, nonatomic) AWEIMGroupChatMonitor *monitor;
@property (retain, nonatomic) id<IESIMPerfFPSMonitorProtocol> fpsMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)dataProvider:(id)a0 updateCellModel:(id)a1;
- (id)dataProvider:(id)a0 cellModelForShareModel:(id)a1;
- (void)beginEdit;
- (id)getProviders;
- (void)__log:(id)a0;
- (void)contactPickerConfirmService:(id)a0 didConfirmWithCurrentSelects:(id)a1;
- (id)groupCreateSource;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void)searchService:(id)a0 stateChangedTo:(BOOL)a1;
- (id)pageSwitchConfig;
- (void)radarGroupDidClickEnterGroupWithParams:(id)a0;
- (void)radarGroupEnterGroupError:(id)a0;
- (id)createGroupContext;
- (void)contactPickerConentService:(id)a0 didLoadData:(id)a1;
- (void)contactPickerConentService:(id)a0 didChangeToEmpty:(BOOL)a1;
- (void)__trackGroupQoSCreateGroupStart;
- (void)p_trackPanelDismiss;
- (void)__trackFPS;
- (BOOL)__enableCreateGroupAlone;
- (int)__createGroupSelectLimit;
- (void)__dismissViewControllerWithCompletion:(id /* block */)a0;
- (void)__createChat;
- (id)p_getRelationTagModel:(id)a0;
- (id)naviBarConfig;
- (BOOL)enableRecoverOffsetAfterSearch;
- (id)maximumSelectCount;
- (void)selectOverMaximumLimitWithCellModel:(id)a0;
- (void)didSelectCellModelFromSearch:(id)a0;
- (BOOL)disableAutoExitSearch;
- (id)__extraSectionModel;
- (id)__cellModelWithShareModel:(id)a0;
- (void)__injectCommonInfoToCellModel:(id)a0;
- (void)__didSelectWithCellModel:(id)a0;
- (void)__updateCellModel:(id)a0 withIsSelected:(BOOL)a1;
- (long long)__trackerCellOrderOfCellModel:(id)a0;
- (void)__trackSearchResultIfNeededWithCellModel:(id)a0;
- (id)__newCellModelWithShareModel:(id)a0;
- (BOOL)p_shouldReturnBeforeCreateChat;
- (id)createChatWithCompletion:(id /* block */)a0 isSingleChat:(BOOL)a1 shouldRouter:(BOOL)a2 willTransferToMessageVCBlock:(id /* block */)a3 ext:(id)a4;
- (id)__createSingleChatWithShouldRouter:(BOOL)a0 willTransferToMessageVCBlock:(id /* block */)a1 ext:(id)a2;
- (void)__trackCreateGroupClick;
- (id)__groupCreationContextWithExt:(id)a0;
- (id)__createGroupTrackInfoWithEnterFrom:(id)a0 enterMethod:(id)a1 selectCount:(unsigned long long)a2 ext:(id)a3 createResult:(id)a4;
- (void)__callbackCompletion:(id /* block */)a0 withConversationIdentifier:(id)a1 groupChatPanelDelegate:(id)a2;
- (id)__transferToConversationIfNeededWithShouldRouter:(BOOL)a0 willTransferToMessageVCBlock:(id /* block */)a1 conversationIdentifier:(id)a2 paramDict:(id)a3 ext:(id)a4 trackInfoParam:(id)a5;
- (void)__showSendInviteCardIfNeededWithConversationIdentifier:(id)a0 groupCreateResult:(id)a1;
- (void)__sendGroupShareCommandMessageIfNeededWithConversationIdentifier:(id)a0;
- (void)__trackGroupShareFailEventWithGroupCreateResult:(id)a0;
- (id)__createErrorToastWithCheckDict:(id)a0 checkMessage:(id)a1;
- (void)__callbackCreateErrorWithCompletion:(id /* block */)a0 groupChatPanelDelegate:(id)a1 toastContent:(id)a2;
- (void)__trackEnterChatWithConversationIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
