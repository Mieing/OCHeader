@class UIView, AWEECOMIMMsgForwardBiz, AWEECOMIMMsgForwardCellModel, AWEECOMIMCustomButton, AWEECOMIMBaseMsgModel, UITextView, UIImageView, UIButton, AWEECOMIMPageTrackUtil, DUXBasicSheet, NSString, UILabel;

@interface AWEECOMIMShareConfirmViewController : UIViewController <UITextViewDelegate, DUXSheetDelegate>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) AWEECOMIMCustomButton *confirmButton;
@property (retain, nonatomic) UITextView *textArea;
@property (retain, nonatomic) AWEECOMIMMsgForwardBiz *biz;
@property (nonatomic) double originTextAreaOffset;
@property (nonatomic) BOOL sendFlag;
@property (retain, nonatomic) AWEECOMIMMsgForwardCellModel *cellModel;
@property (retain, nonatomic) AWEECOMIMBaseMsgModel *msgModel;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (weak, nonatomic) DUXBasicSheet *basicSheet;
@property (copy, nonatomic) id /* block */ shareCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (void)cancelButtonClick;
- (id)initWithBiz:(id)a0;
- (double)p_singleLineHeight;
- (id)p_bizParams;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_textContentInset;
- (double)p_textMaxHeight;
- (void)confirmButtonClick;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupUI;

@end
