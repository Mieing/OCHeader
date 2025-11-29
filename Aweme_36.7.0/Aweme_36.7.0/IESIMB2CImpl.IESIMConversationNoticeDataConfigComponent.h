@interface IESIMB2CImpl.IESIMConversationNoticeDataConfigComponent : AWEIMComponentBase <AWEIMConfigNoticeDataDisplayInterface, AWEIMMessageListUserInfoAction> {
    void /* unknown type, empty encoding */ messageListInConfig;
    void /* unknown type, empty encoding */ currentRoleIDs;
    void /* unknown type, empty encoding */ peerRoleIds;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)willFilterCurrentConfigMessage:(id)a0;
- (BOOL)filterCurrentConversationRoleShouldDisplayMessage:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
