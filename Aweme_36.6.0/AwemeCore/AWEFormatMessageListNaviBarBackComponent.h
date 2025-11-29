@interface AWEFormatMessageListNaviBarBackComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, AWEIMMessageListNaviBarBackAndUnreadCountInterface, AWEFormatExitRoomService, AWEConversationFormatEnterActions, AWEFormatLeaveConversationInjectService, AWELiveRoomMessage, AWEIMMessageListDataAction> {
    void /* unknown type, empty encoding */ enterTime;
    void /* unknown type, empty encoding */ hasChat;
    void /* unknown type, empty encoding */ lastDigtalMsgReqId;
    void /* unknown type, empty encoding */ lastDigtalMsgTime;
    void /* unknown type, empty encoding */ didRunExitCompletion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)audienceDidLeaveLiveRoom:(id)a0 anchorID:(id)a1;
- (void)willSendNewMessage;
- (void)didReceiveNewMessageWithMessageProtocol:(id)a0 reason:(long long)a1;
- (void)hostVC_willDealloc;
- (void)backButtonClickAction;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)backWithCompletion:(id /* block */)a0;
- (void)exitFormatRoomWithBlock:(id /* block */)a0;
- (void)leaveFormatRoom;
- (void)didUpdateFormatRoom:(id)a0;
- (void)getFormatRoomInfoFailedWithError:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
