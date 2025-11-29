@class UIView, AWETeenModePasswordInputView, AWETeenExternalAgeGuidePageHeaderView, UITextView, UIImageView, TTTAttributedLabel, DUXButton, UILabel;
@protocol AWETeenModePasswordViewHolderDelegate;

@interface AWETeenModePasswordViewHolder : UIView

@property (weak, nonatomic) id<AWETeenModePasswordViewHolderDelegate> delegate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) UILabel *passwordHintLabel;
@property (retain, nonatomic) UIView *bottomBackView;
@property (retain, nonatomic) TTTAttributedLabel *retrievePasswordLabel;
@property (retain, nonatomic) UITextView *moreInfoTextView;
@property (retain, nonatomic) UIView *passwordInputContainerView;
@property (retain, nonatomic) AWETeenModePasswordInputView *passwordInputView;
@property (retain, nonatomic) UIView *childRequestBindingEntryView;
@property (retain, nonatomic) AWETeenExternalAgeGuidePageHeaderView *headerView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UIImageView *timelockImageView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) BOOL isSmallScreen;
@property (nonatomic) double passwordInputContainerTopMargin;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) double passwordInputViewTopMargin;
@property (nonatomic) double hintTopMargin;
@property (nonatomic) double timelockImageTopMargin;
@property (nonatomic) double headerViewTopMargin;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;

- (void)p_setupSubviews;
- (void)p_setupNotifications;
- (void)p_setupSubviewsForTypeDefault;
- (void)p_setupSubviewsForTypeOptimizeV1;
- (void)p_setupSubviewsForTypeOptimizeV2;
- (void)p_setupSubviewsForTypeOptimizeExit_New;
- (void)p_setupSubviewsForTypeOptimizeExit;
- (void)p_didTapGuardianPlatformBindingButton;
- (void)p_confirmPassword;
- (BOOL)isValidForChildRequestBindingEntryView;
- (BOOL)needShowVerificationEntrance;
- (void)showPasswordKeyboard;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)keyboardWillHideNotification:(id)a0;
- (void)clearPassword;
- (id)initWithType:(unsigned long long)a0 delegate:(id)a1;
- (void)keyboardWillShowNotification:(id)a0;

@end
