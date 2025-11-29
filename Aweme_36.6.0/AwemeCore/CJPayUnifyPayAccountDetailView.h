@class UIImageView, UILabel, UIStackView;

@interface CJPayUnifyPayAccountDetailView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *mobileMaskLabel;

- (void)updateWithAvatarUrl:(id)a0 nickName:(id)a1 mobileMask:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
