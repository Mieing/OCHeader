@class AWEIMMessageConversation, UIImageView, AWEIMAlphaTapGesture, UILabel, UIView, UIButton;

@interface AWEIMMessageFloatNavigationBar : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *officialView;
@property (retain, nonatomic) UILabel *officialLabel;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (nonatomic) BOOL hideAvatar;
@property (retain, nonatomic) AWEIMAlphaTapGesture *alphaTapGes;
@property (retain, nonatomic) UIView *storyRing;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *fullButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ fullButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) id /* block */ centerContainerViewTappedBlock;

- (void)closeButtonClick:(id)a0;
- (void)fullButtonClick:(id)a0;
- (void)p_createComponents;
- (BOOL)colorRingEnabled;
- (void)updateOfficialLabelText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hideAvatar:(BOOL)a1;
- (void)centerContainerViewTapped:(id)a0;
- (BOOL)__shouldShowAvatar;
- (void)titleLabelTap:(id)a0;
- (void)updateRightButtonWithMultiSelect:(BOOL)a0;
- (void)p_updateOfficialLabelColor:(id)a0;
- (void)__showVerifiedImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTitle:(id)a0;

@end
