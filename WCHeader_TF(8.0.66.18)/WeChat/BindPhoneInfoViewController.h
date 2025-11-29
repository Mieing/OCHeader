@class WCAccountBindPhoneControlLogic, NSString, UIImageView, LiteAppJsApiCallback, MMTableViewInfo, UIButton;
@protocol VerifyPhoneDelegate;

@interface BindPhoneInfoViewController : AccountBaseViewController <PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate> {
    UIImageView *m_bindImageView;
    UIButton *m_unChangeButton;
    UIButton *m_inviteFriendButton;
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOldPhone;
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

@property (nonatomic) BOOL showFullPhoneNum;
@property (retain, nonatomic) LiteAppJsApiCallback *callback;
@property (weak, nonatomic) id<VerifyPhoneDelegate> m_delegate;
@property (nonatomic) unsigned int m_uiFromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(id)a0;
- (BOOL)hasBound;
- (id)getBoundPhone;
- (void)showInviteFriendView;
- (void)unBoundSucess;
- (void)onUnBindAccount;
- (void)startSyncAddressBook;
- (void)onBind;
- (void)onChange;
- (void)onUnBind;
- (void)onPrivacy;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)showNoBindView;
- (void)OnOperate;
- (void)updateInviteFriendBtnTitle;
- (void)showBindedView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
