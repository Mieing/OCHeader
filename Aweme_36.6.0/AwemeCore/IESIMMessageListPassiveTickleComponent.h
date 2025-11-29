@interface IESIMMessageListPassiveTickleComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageTableViewAction> {
    void /* unknown type, empty encoding */ didFirstLoad;
    void /* unknown type, empty encoding */ firstLoadMaxGlobalIndex;
    void /* unknown type, empty encoding */ isViewAppear;
    void /* unknown type, empty encoding */ cancellables;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
