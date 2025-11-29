@class NSLayoutConstraint, BDPStyleTextField, UIImageView, NSString, UILabel, UIView, UIButton;

@interface AWEIMConfirmView : UIView <BDPTextFieldDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) BDPStyleTextField *inputText;
@property (retain, nonatomic) UIView *horizontalSep;
@property (retain, nonatomic) UIView *verticalSep;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) NSLayoutConstraint *containerCenterYCons;
@property (retain, nonatomic) NSLayoutConstraint *containerBottomCons;
@property (copy, nonatomic) id /* block */ onTapCancel;
@property (copy, nonatomic) id /* block */ onTapConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContainerPosition:(BOOL)a0 noti:(id)a1;
- (void)onTapBtn:(id)a0;
- (void)show:(BOOL)a0 withContainer:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setDesc:(id)a0;
- (void)prepareLayout;
- (void)setImage:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)setTitle:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)keyboardWillChange:(id)a0;
- (void)setupUI;

@end
