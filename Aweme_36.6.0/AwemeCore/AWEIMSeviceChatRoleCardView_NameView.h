@class UILabel, UIImageView, UIStackView;

@interface AWEIMSeviceChatRoleCardView_NameView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ tapIdentityIconActionBlock;

- (void)tapRoleIcon;
- (void)setUserModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (double)spacing;
- (id)init;

@end
