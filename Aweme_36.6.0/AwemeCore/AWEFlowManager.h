@interface AWEFlowManager : NSObject <AWEUserMessage> {
    void /* unknown type, empty encoding */ launched;
    void /* unknown type, empty encoding */ isloadingShowing;
    void /* unknown type, empty encoding */ fromItemId;
    void /* unknown type, empty encoding */ flowAuthToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _lastMessageInfo;
    void /* unknown type, empty encoding */ currentMessageUserID;
}

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
