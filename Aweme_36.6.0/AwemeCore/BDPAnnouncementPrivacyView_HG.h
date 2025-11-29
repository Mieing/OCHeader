@class BDPCloseButton, UITextView, BDPCheckBox, NSString, UILabel, UIView, UIButton;

@interface BDPAnnouncementPrivacyView_HG : UIView

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITextView *desc;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UITextView *protocolView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } authenticationProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } serviceProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originProtocolRange;
@property (copy, nonatomic) NSString *originProtocolUrl;
@property (retain, nonatomic) UIView *toast;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (copy, nonatomic) id /* block */ jumpPrivacyWebViewAction;

- (void)showToast;
- (void)onCloseButtonClick;
- (void)setupUIWithModel:(id)a0;
- (void)onConfirmButtonClick;
- (void)onCheckBoxClick:(id)a0;
- (void)setupDefaultProtocolView;
- (void)setupOriginProtocolView:(id)a0;
- (void)onProtocolViewClick:(id)a0;
- (void)onOriginProtocolViewClick:(id)a0;
- (void)onConfirmAndCloseButtonClick;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutUI;

@end
