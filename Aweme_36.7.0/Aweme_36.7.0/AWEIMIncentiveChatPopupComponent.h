@interface AWEIMIncentiveChatPopupComponent : AWEIMComponentBase <AWEIMGrowthImpl.IncentiveChatNotify, AWEIMIncentiveChatPopupComponentService> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ versionMap;
    void /* unknown type, empty encoding */ resolveCache;
    void /* unknown type, empty encoding */ waitAsyncAction;
    void /* unknown type, empty encoding */ infoOtherDelayTimer;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)handleReceiveInfoOtherData:(id)a0;
- (void)handleReceiveInfoOtherDataArchV2:(id)a0;
- (void)handleReceiveP2PMessageData:(id)a0;
- (long long)messageListPopupViewStatus;
- (void)messageListPopupViewShow;
- (void)asyncGetMessageListPopupViewStatus:(id /* block */)a0;
- (void)onReceiveCommandMessage:(id)a0 bizType:(id)a1 conversationID:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
