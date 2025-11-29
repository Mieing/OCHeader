@class KidsWatchButton, KidsWatchFlexibleImageView, KidsWatchRegisterVerifyCodeCardView, NSString;
@protocol KidsWatchKidsRegisterVerifyCodeViewControllerDelegate;

@interface KidsWatchKidsRegisterVerifyCodeViewController : KidsWatchBaseViewController <KidsWatchRegisterVerifyCodeCardViewDelegate>

@property (retain, nonatomic) KidsWatchRegisterVerifyCodeCardView *verifyCodeCardView;
@property (retain, nonatomic) KidsWatchFlexibleImageView *bottomBackgroundView;
@property (retain, nonatomic) KidsWatchButton *doneButton;
@property (retain, nonatomic) NSString *rawPhoneNumber;
@property (nonatomic) BOOL hasSentVerifyCode;
@property (weak, nonatomic) id<KidsWatchKidsRegisterVerifyCodeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setupWithData:(id)a0;
- (void)initSubviews;
- (void)sendVerifyCode;
- (void)onTapDoneButton;
- (BOOL)respondToKeyboardEvent;
- (BOOL)shouldEndEditForTappedView:(id)a0;
- (void)onKeyboardWillChangeHeight:(double)a0;
- (void)onKeyboardChangingHeight:(double)a0;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapSendVerifyCodeButton:(id)a0;
- (void)onVerifyCodeChanged:(id)a0;
- (void).cxx_destruct;

@end
