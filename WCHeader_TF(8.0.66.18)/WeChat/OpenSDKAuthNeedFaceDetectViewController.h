@class UIView, MMURLHandler, NSString, OpenSdkFaceDetectInfo, UIButton, AuthorizeCheckBox, UITextField, RichTextView, UILabel, FaceRecogPrivateVerifyHandler;
@protocol OpenSDKAuthNeedFaceDetectViewControllerDelegate;

@interface OpenSDKAuthNeedFaceDetectViewController : MMUIViewController <FaceRecogPrivateVerifyHandlerDelegate, UITextFieldDelegate, ILinkEventExt, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *errorTipsBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UITextField *nameTextField;
@property (retain, nonatomic) UITextField *idNumberTextFiled;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *idNumberLabel;
@property (retain, nonatomic) UIView *upperSeperatorLine;
@property (retain, nonatomic) UIView *middleSeperatorLine;
@property (retain, nonatomic) UIView *bottomSeperatorLine;
@property (retain, nonatomic) AuthorizeCheckBox *checkBox;
@property (retain, nonatomic) MMURLHandler *urlHandler;
@property (retain, nonatomic) FaceRecogPrivateVerifyHandler *faceHandler;
@property (weak, nonatomic) id<OpenSDKAuthNeedFaceDetectViewControllerDelegate> delegate;
@property (retain, nonatomic) OpenSdkFaceDetectInfo *faceDetectInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFaceDetectInfoValid:(id)a0;

- (void)viewDidLoad;
- (void)dealloc;
- (void)addKeyboardObserver;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)onStartFaceDetect;
- (void)faceRecogDidFinishWithCode:(int)a0 msg:(id)a1 verifyResult:(id)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)configureLayout;
- (id)genCommonLabel;
- (id)genTextField;
- (id)genSeperatorLine;
- (void)onNavigationBackButtonClicked;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)checkParamsValidAndShowTipsIfInvalid;
- (BOOL)checkIDCardNumberValid:(id)a0;
- (void)showErrorTipsBar:(id)a0;
- (void)hideErrorTipsBar;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
