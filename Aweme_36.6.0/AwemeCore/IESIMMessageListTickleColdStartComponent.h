@interface IESIMMessageListTickleColdStartComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListUserInfoAction> {
    void /* unknown type, empty encoding */ isFirstLoad;
    void /* unknown type, empty encoding */ peerUser;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
