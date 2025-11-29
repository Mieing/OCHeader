@class UIView, NSString, WCFinderContact, WCFinderBannerView, WCFinderCreateUserViewModel, UIButton, UITextField, UILabel, UIScrollView;
@protocol WCFinderNameEditorViewControllerDelegate;

@interface WCFinderNameEditorViewController : MMUIViewController <WCFinderVeirfyNameTipsViewControllerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) WCFinderCreateUserViewModel *viewModel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UILabel *wordTips;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) WCFinderBannerView *bannerView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *modifyAlertTips;
@property (weak, nonatomic) id<WCFinderNameEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)layoutView;
- (void)setupView;
- (void)disMissThisViewAnimated;
- (void)onSaveText;
- (id)modifyAlertTipsWithNewName:(id)a0;
- (void)afterAlertModifyName:(id)a0;
- (void)updateWordCount:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)modifyName:(id)a0;
- (void)showError:(id)a0;
- (void)updateWordCountTipsLabel:(int)a0;
- (void)showRedBanner:(id)a0;
- (void)showGrayBanner:(id)a0;
- (void)hideBanner;
- (void)checkConfirmButtonEnable;
- (void)WCFinderVerifyNameTipsViewControllerDidClickConfirmButton;
- (void).cxx_destruct;

@end
