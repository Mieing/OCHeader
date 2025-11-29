@class UIView, NSString, WCPayNoticeItemView, UIButton, WCPayCss, TransferPhoneHomePageResp, UITextField, UILabel, KindaUIView;
@protocol WCPayTransferPhoneHomePageDelegate;

@interface WCPayTransferPhoneHomePage : WCPayBaseViewController <WCActionSheetDelegate>

@property (weak) id<WCPayTransferPhoneHomePageDelegate> m_delegate;
@property (retain) UIView *containerView;
@property (retain) KindaUIView *noticeView;
@property (retain) UILabel *noticeLabel;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *subTitleView;
@property (retain) UIView *firstLineView;
@property (retain) UIView *inputContainerView;
@property (retain) UILabel *inputTipsLabel;
@property (retain) UITextField *textField;
@property (retain) UIButton *iconButton;
@property (retain) UIView *secondLineView;
@property (retain) UIView *bottomContainerView;
@property (retain) UIButton *startButton;
@property (retain) UIView *headerView;
@property (retain) TransferPhoneHomePageResp *homePageResp;
@property (retain) WCPayCss *css;
@property double keyboardHeight;
@property (retain, nonatomic) NSString *m_enterMobileNumber;
@property (retain, nonatomic) WCPayNoticeItemView *m_noticeBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setEnterMobileNumber:(id)a0;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidBePushed:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)updateView;
- (void)updateNoticeView;
- (void)onTapNotice;
- (void)updateHeaderView;
- (void)updateTitleView;
- (void)updateSubTitleView;
- (void)updateFirstLineView;
- (void)updateInputContainerView;
- (void)updateInputTipsView;
- (void)updateTextField;
- (void)updateIconButton;
- (void)updateSecondLineView;
- (void)updateBottomContainerView;
- (void)updateStartButton;
- (void)onTapIcon;
- (void)onTapStart;
- (void)textFieldDidChange;
- (void)onOperate:(id)a0;
- (void)onTapEmpty;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
