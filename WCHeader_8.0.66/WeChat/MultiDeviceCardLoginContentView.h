@class WCAgreementCheckBox, UIButton, UIImageView, MMTimer, UIScrollView, MultiDeviceLoginInfo, MMUILabel;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardLoginContentView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *deviceNameLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIScrollView *tipsContainerView;
@property (retain, nonatomic) WCAgreementCheckBox *syncChatCheckbox;
@property (retain, nonatomic) WCAgreementCheckBox *autoLoginCheckbox;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) WCAgreementCheckBox *agreementCheckBox;
@property (nonatomic) BOOL agreementSelected;
@property (nonatomic) long long errorType;
@property (retain, nonatomic) MMTimer *timeoutTimer;
@property (retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo;
@property (weak, nonatomic) id<MultiDeviceCardViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContent;
- (void)updateLayout;
- (BOOL)enableRescanQRCode;
- (id)tips;
- (id)getLoginConfirmInfo;
- (void)onLoginConfirmFailed;
- (void)onTapAutoLoginCheckbox:(id)a0;
- (void)onTapConfirmButton;
- (void)onTapCancelButton;
- (void)onTimeout;
- (void).cxx_destruct;

@end
