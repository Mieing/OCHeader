@interface AWEPaySwiftImpl.TransRecieveVC : UIViewController {
    void /* unknown type, empty encoding */ routerParams;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ statusInfos;
    void /* unknown type, empty encoding */ verificationInfo;
    void /* unknown type, empty encoding */ originMsgId;
    void /* unknown type, empty encoding */ conversationLongId;
    void /* unknown type, empty encoding */ conShortId;
    void /* unknown type, empty encoding */ isGroupChat;
    void /* unknown type, empty encoding */ teaSource;
    void /* unknown type, empty encoding */ userType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabelPrefix;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabelSuffix;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amountLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusTips;
    void /* unknown type, empty encoding */ _statusInfoContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_confirmBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_refundTips;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftCircle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightCircle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_line;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBackgroundImgV;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomWaterMark;
    void /* unknown type, empty encoding */ $__lazy_storage_$_changeLink;
    void /* unknown type, empty encoding */ $__lazy_storage_$_noticeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gotoMessageBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendAgainBtn;
    void /* unknown type, empty encoding */ nameStackView;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)refund;
- (void)backToChatPageWithSender:(id)a0;
- (void)jumpUserProfileWithGesture:(id)a0;
- (void)jumpChangePage;
- (void)p_notifyReceiver;
- (void)jumpToMessage;
- (void)openMorePage;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)receive;

@end
