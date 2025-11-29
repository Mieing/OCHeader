@class NSString, UIImageView, UIView, RichTextView, MMUIButton;
@protocol MMLiveRewardQuotaPolicySheetViewDelegate;

@interface MMLiveRewardQuotaPolicySheetView : MMPageSheetBaseView <ILinkEventExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UIView *checkBoxView;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) RichTextView *agreementText;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (nonatomic) BOOL isAgreementChecked;
@property (nonatomic) unsigned long long verifyMode;
@property (retain, nonatomic) NSString *verifyUrl;
@property (retain, nonatomic) NSString *secverifyId;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) id<MMLiveRewardQuotaPolicySheetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVerifyMode:(unsigned long long)a0 verifyUrl:(id)a1 secverifyId:(id)a2 userInfo:(id)a3;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)addShakeOnCheckBoxView;
- (void)updateAccessbility;
- (BOOL)isFaceVerify;
- (BOOL)isFlowSign;
- (id)warningText;
- (id)actionButtonText;
- (id)cancelButtonText;
- (id)protocalLinkText;
- (double)contentViewHeight;
- (void)onCloseAction:(id)a0;
- (void)onCheckBoxClicked;
- (void)onActionButtonClicked;
- (void)onClickCancelButton:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
