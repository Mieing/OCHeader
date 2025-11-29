@class UIView, DYLoginNextActionButton, NSString, UIImage, UIImageView, UIButton, UITextField, AWERegisterPageInfoCollectTopView, UILabel;

@interface AWEAvatarNicknameEditViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) AWERegisterPageInfoCollectTopView *topView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *addAvatarLabel;
@property (retain, nonatomic) UITextField *nickNameTextField;
@property (retain, nonatomic) DYLoginNextActionButton *finishButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURI;
@property (retain, nonatomic) UIImage *avatarImage;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) BOOL isProfileUpdate;
@property (nonatomic) BOOL updateUserProfile;
@property (nonatomic) long long clickAvatarOrNickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserNewUserProfileEditAdapterProtocolClass;
+ (void)p_showAlertGeneralWithDialogModel:(id)a0 model:(id)a1 toastBackInfo:(id)a2 errorCode:(long long)a3;

- (id)trackParams;
- (void)skipAction;
- (id)finishButtonTitle;
- (void)avatarAction;
- (void)finishAction;
- (void)configTopView;
- (id)trackBioResultParams;
- (id)trackFinishParams;
- (id)aAWEUserNewUserProfileEditAdapterProtocol;
- (void)updateFinishButtonState;
- (void)handlePickedImage:(id)a0;
- (void)decideIfToastBackInfoAndShowToastWithAWEUserModel:(id)a0 toastAndReturn:(BOOL)a1 statusMsg:(id)a2 error:(id)a3 toastBack:(long long)a4 toastBackInfo:(id)a5;
- (void)routeToNextPage;
- (void)hasKeyBoardUI:(double)a0;
- (void)setNoKeyBoardUI;
- (void)showImagePicker;
- (id)trackClickParams;
- (void)decideIfDialogAndShowDialogWithProfileEditResponseModel:(id)a0 toastAndReturn:(BOOL)a1 error:(id)a2 toastBackInfo:(id)a3;
- (void)clearTextFieldAction;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)isSmallScreen;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
