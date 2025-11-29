@class UIStackView, NSString, UIImageView, DUXButton, UIView, UILabel;

@interface AWEIMAwemeMediaDisplayMaskView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *shootButton;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ tapButtonBlock;

- (void)tapShootButton;
- (void)p_updateSubtitle:(id)a0;
- (void)updateWithMessage:(id)a0;
- (void)p_setupUI;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
