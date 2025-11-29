@interface FlowSDK.BDFlowMananger : NSObject {
    void /* unknown type, empty encoding */ userID;
    void /* unknown type, empty encoding */ flowSDKFinishReady;
    void /* unknown type, empty encoding */ isLogout;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ messagingVCDelegate;
    void /* unknown type, empty encoding */ conversationDelegate;
    void /* unknown type, empty encoding */ conversationReciever;
    void /* unknown type, empty encoding */ appInfoModel;
}

- (void)tryNotifyConversationChangedWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
