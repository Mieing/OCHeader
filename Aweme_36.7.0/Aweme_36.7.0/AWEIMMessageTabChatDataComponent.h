@class NSString;
@protocol AWEIMMessageTabChatDataAction;

@interface AWEIMMessageTabChatDataComponent : AWEIMComponentBase <AWEIMBaseDataControllerDelegate, AWEIMChatDataControllerCallbackDelegate> {
    BOOL _LoadRemoteOfficialChatFinished;
}

@property (weak, nonatomic) id<AWEIMMessageTabChatDataAction> dataAction;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL isFirstRenderForColdLaunch;
@property (nonatomic) BOOL isFirstRenderTriggered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)userDidLogout;
- (void)userDidLogin;
- (void)didInsertedChatListForChats:(id)a0;
- (void)didFinishLoadPagedChatList;
- (void)didClearChatList;
- (void)didAddNewMessage;
- (void)didEndPullOfflineMessages;
- (void)didInsertChatListAtIndex:(long long)a0;
- (id)willInsertChat:(id)a0;
- (void)didMoveNewMessageToNewIndex:(unsigned long long)a0 fromOldIndex:(unsigned long long)a1;
- (void)didReloadChatList;
- (void)didRemoveChat:(id)a0 animated:(BOOL)a1 animationDuration:(double)a2;
- (void)didFinishLoadFirstPageData;
- (void)didFinishLoadRemoteOfficialChat;
- (void)didReloadChatListAtIndex:(long long)a0;
- (void)didUpdatePeerUser:(id)a0;
- (void)callback_chatUpdate:(id)a0;
- (void)callback_chatDeleted:(id)a0 chatInserted:(id)a1 firstPage:(BOOL)a2 reason:(long long)a3;
- (void)callback_totalUnreadCountUpdate:(unsigned long long)a0;
- (void)callback_peerUserUpdate:(id)a0 ofChat:(id)a1;
- (void)callback_didEndPullOfflineMessagesWithHasMore:(BOOL)a0;
- (void)p_tryFireFirstRenderFinished;
- (void).cxx_destruct;

@end
