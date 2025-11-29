@class AWEUserModel, AFDButton, UIImageView, AWEBinding, UILabel, UIView, UIButton;

@interface AWEMateMultiCardView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *centerContainerView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIButton *removeButton;
@property (retain, nonatomic) UIView *dividerLine;
@property (retain, nonatomic) AFDButton *addMateButton;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEBinding *followStatusBinding;
@property (copy, nonatomic) id /* block */ addMateBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ tapNicknameBlock;

- (void)configWithModel:(id)a0;
- (void)p_clickCloseButton:(id)a0;
- (void)p_setupAccessibility;
- (void)p_tapCell:(id)a0;
- (void)p_tapNickname:(id)a0;
- (void)p_clickAddMateButton:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
