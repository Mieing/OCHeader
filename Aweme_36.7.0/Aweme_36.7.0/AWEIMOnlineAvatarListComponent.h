@class NSString, UIView;
@protocol AWEIMMessageTabModeInterface, AWEIMChatListHeaderInterface, AWEIMMessageTabCameraInterface, AWEIMOnlineContactAvatarListV2ViewProtocol, AWEIMSkylightViewInterface, IESLCMessageHandlerProtocol;

@interface AWEIMOnlineAvatarListComponent : AWEIMComponentBase <AWEUserMessage, AWEIMListTabWrapperAction, IESLCMessageHandlerService, AWEIMChatListHeaderProvider, AWEIMMessageTabChatDataAction, AWEIMOnlineAvatarListInterface, AFDCloseFriendsMessage, AWEIMOnlinePrivacyDisrecommendMessage, AWEIMOnlineContactAvatarListViewDelegate>

@property (retain, nonatomic) UIView<AWEIMOnlineContactAvatarListV2ViewProtocol> *onlineContactAvatarListView;
@property (weak, nonatomic) id<AWEIMChatListHeaderInterface> headerService;
@property (weak, nonatomic) id<AWEIMMessageTabCameraInterface> cameraService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeInterface;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> skylightInterface;
@property (nonatomic) double lastLCPushTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (Class)aAFDServiceCommonAdapterClass;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (BOOL)canShowCurrentHeader;
- (id)headerViewForChatList;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (id)aAFDServiceCommonAdapter;
- (void)p_handleReceivedPushServiceWithMsg:(id)a0;
- (void)didUpdatePeerUser:(id)a0;
- (void)updateCloseFriendsGuideShown;
- (id)avatarListView;
- (id)activeTrackArrayForMutualFollowUsers;
- (BOOL)isUnfoled;
- (void)listViewControllerWillDisappear:(long long)a0;
- (void)listViewControllerWillAppear:(long long)a0;
- (void)listViewControllerDidAppear:(long long)a0;
- (void)listViewControllerDidDisappear:(long long)a0;
- (void)willDisrecommendPopupViewHide;
- (void)onUserPrivacySettingChange;
- (void)handleNeedRefreshAvatarListView:(id)a0;
- (void)addRecordObserver;
- (void)p_willAppear;
- (void)onlineContactAvatarListView:(id)a0 shouldHidden:(BOOL)a1;
- (void)onlineContactAvatarListViewDidRefresh:(id)a0;
- (void)didLongPressedAvatar;
- (void)willShowLightInteractionPanelView;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (id)trackIdentifier;
- (void)dealloc;

@end
