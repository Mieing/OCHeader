@class IESIMShareMoreSelectionContext, NSString, NSDictionary, NSMutableSet, IESIMContactPickerComponentContext, NSMutableArray;

@interface AWEIMShareMoreSelectionPanelTrackComponent : AWEIMComponentBase <IESIMShareMoreSelectionTrackAction, IESIMContactPickerSelectAction>

@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponent;
@property (retain, nonatomic) IESIMShareMoreSelectionContext *selectionContext;
@property (retain, nonatomic) NSMutableSet *shownGroupsIds;
@property (retain, nonatomic) NSMutableSet *shownConversationsIds;
@property (retain, nonatomic) NSMutableSet *shownHConversationsIds;
@property (retain, nonatomic) NSMutableSet *shownVConversationsIds;
@property (retain, nonatomic) NSMutableArray *shownRelationList;
@property (nonatomic) BOOL hasScroll;
@property (nonatomic) BOOL hasShared;
@property (copy, nonatomic) NSDictionary *commonDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)shareContact:(id)a0 didShowAtIndex:(id)a1 InModule:(long long)a2;
- (void)hasScrollInModuleType:(long long)a0;
- (void)hasShareToShareList:(id)a0;
- (void)trackEventAboutTargetTypeWithConversationId:(id)a0;
- (void)trackChatShareLiveEventWithMessage:(id)a0;
- (void)trackForwardVideoToChatWithShareList:(id)a0;
- (void)trackActivityDataIfNeededWithEvent:(id)a0 shareModel:(id)a1;
- (void)trackShareEmojiSuccessWithShareModel:(id)a0;
- (id)p_getShareContent;
- (void)p_setupProperties;
- (void)trackVerticalSharePanelParamDict;
- (void)p_trackVideoShareFriendShow;
- (void)trackOpenPlatformSharePanelShow;
- (id)p_getShowTypeWithModuletype:(long long)a0;
- (void)p_trackVideoShareFriendHeadShow:(id)a0 withShowType:(id)a1 atIndex:(id)a2;
- (void)p_trackClickContact:(id)a0 withShowType:(id)a1 atIndex:(id)a2;
- (void)p_trackShareVideo:(id)a0 withShowType:(id)a1 atIndex:(id)a2;
- (id)p_getChatTypeWithShareModel:(id)a0;
- (id)p_getForwardMessageShareContent;
- (void).cxx_destruct;

@end
