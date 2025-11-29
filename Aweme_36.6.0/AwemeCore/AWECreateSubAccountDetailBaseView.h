@class DYLoginNextActionButton, AWECreateSubAccountDetailViewConfig, UIImage, NSString, DYUserProtocolView, UIButton, UITextField, AWENewLoginButton, UILabel;
@protocol AWECreateSubAccountDetailViewDelegate;

@interface AWECreateSubAccountDetailBaseView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate, AWECreateSubAccountDetailViewProtocol>

@property (retain, nonatomic) AWECreateSubAccountDetailViewConfig *config;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (retain, nonatomic) UILabel *phoneTextLabel;
@property (retain, nonatomic) DYLoginNextActionButton *finishButton;
@property (retain, nonatomic) AWENewLoginButton *avatarButton;
@property (retain, nonatomic) UILabel *avatarHintLabel;
@property (retain, nonatomic) UITextField *nameTextField;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UIButton *cleanNameButton;
@property (retain, nonatomic) UILabel *nameTextLabel;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECreateSubAccountDetailViewDelegate> delegate;

- (void)setupGestureRecognizer;
- (void)stopLoaingWithError:(id)a0;
- (void)endTheEditor;
- (void)dismissKeyboard:(id)a0;
- (void)nameTextFieldChanged;
- (void)nameTextFieldChanged:(id)a0;
- (void)avatarButtonTapped;
- (void)cleanTextFieldAction;
- (void)finishButtonTappped;
- (void)updateAvatarWith:(id)a0;
- (void)updateWithCurrentName:(id)a0 subName:(id)a1 phoneNumber:(id)a2;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)startLoading;
- (void)handleError:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setupSubviews;
- (void)hideError;
- (void)showError;

@end
