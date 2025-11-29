@interface IESIMConversationSwiftImpl.IESIMLeaveChatComponent : AWEIMComponentBase <IESIMLeaveChatInterface, AWEIMMessageTableViewAction, IESIMConversationLifeCyleMessage, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ trackSessionID;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ displayRecorder;
    void /* unknown type, empty encoding */ monitorStartTime;
    void /* unknown type, empty encoding */ monitorIsStarted;
    void /* unknown type, empty encoding */ stayTime;
    void /* unknown type, empty encoding */ startMonitorReason;
    void /* unknown type, empty encoding */ enterChatTime;
    void /* unknown type, empty encoding */ lastMessageSendTime;
    void /* unknown type, empty encoding */ firstMessageSendTime;
    void /* unknown type, empty encoding */ messageSendCount;
    void /* unknown type, empty encoding */ messageReceivedCount;
    void /* unknown type, empty encoding */ lastMessageSendUserWhenEnter;
    void /* unknown type, empty encoding */ trackPid;
    void /* unknown type, empty encoding */ slideCount;
    void /* unknown type, empty encoding */ messageTypeBlockMapper;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)messageVCDidAppearWithConversation:(id)a0 trackSessionID:(id)a1;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)hostVC_viewWillDisappear;
- (void)tableViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)app_willResignActive;
- (void)app_didBecomeActive;
- (double)getEnterChatTime;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
