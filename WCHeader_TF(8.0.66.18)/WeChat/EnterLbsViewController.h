@class UIButton, MMSayHelloButton, UILabel;

@interface EnterLbsViewController : MMUIViewController <FriendAsistSessionExt> {
    UIButton *m_btnLbs;
    MMSayHelloButton *m_btnSayHello;
    UILabel *m_labNoHello;
}

- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)OnOpenSayHello;
- (void)OnOpenLbs;
- (void)UpdateView;
- (void)onFriendAssistUnreadCountChanged;
- (void).cxx_destruct;

@end
