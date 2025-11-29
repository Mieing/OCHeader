@class KidsWatchButton, KidsWatchFlexibleImageView, KidsWatchRegisterFormCardView, NSString, WCAgreementCheckBox;
@protocol KidsWatchKidsRegisterFillFormViewControllerDelegate;

@interface KidsWatchKidsRegisterFillFormViewController : KidsWatchBaseViewController <KidsWatchRegisterFormCardViewDelegate>

@property (retain, nonatomic) KidsWatchRegisterFormCardView *formCardView;
@property (retain, nonatomic) KidsWatchFlexibleImageView *bottomBackgroundView;
@property (retain, nonatomic) WCAgreementCheckBox *checkBox;
@property (retain, nonatomic) KidsWatchButton *registerButton;
@property (retain, nonatomic) NSString *ISOCode;
@property (weak, nonatomic) id<KidsWatchKidsRegisterFillFormViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setupWithData:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)makePhoneNumberFirstResponder;
- (BOOL)respondToKeyboardEvent;
- (BOOL)shouldEndEditForTappedView:(id)a0;
- (void)onKeyboardWillChangeHeight:(double)a0;
- (void)onKeyboardChangingHeight:(double)a0;
- (BOOL)forceCloseBarButtonItem;
- (BOOL)validate;
- (void)updateRegisterButton;
- (void)onTapRegisterButton;
- (id)getViewController;
- (void)onFormCardInfoChanged:(id)a0;
- (void).cxx_destruct;

@end
