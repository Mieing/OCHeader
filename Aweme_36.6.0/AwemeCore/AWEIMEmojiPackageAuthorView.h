@class UIStackView, UIImageView, UILabel, AWEIMEmojiMutableAuthorAvatarView;

@interface AWEIMEmojiPackageAuthorView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *arrowIndicatorView;
@property (retain, nonatomic) AWEIMEmojiMutableAuthorAvatarView *mutableAvatarView;
@property (retain, nonatomic) UIStackView *titlesStack;

- (void)__setupUIs;
- (void)updateUIWithAuthorAvatarType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
