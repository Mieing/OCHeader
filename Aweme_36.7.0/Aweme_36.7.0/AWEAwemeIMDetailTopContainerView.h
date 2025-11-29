@class AWEButton, UILabel, UIView;

@interface AWEAwemeIMDetailTopContainerView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *userAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (copy, nonatomic) id /* block */ avatarClickedBlock;

- (void)p_setupConstraints;
- (void)updateViewWithAvatarUrl:(id)a0 naviTitle:(id)a1 repliedText:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
