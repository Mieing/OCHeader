@class UIImageView, UILabel, AWEIMMessageUIExtraInfo;

@interface AWEIMGroupNoticeMessageCardView : UIView

@property (retain, nonatomic) UIImageView *cardAvatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEIMMessageUIExtraInfo *messageUIExtraInfo;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)configWithMessage:(id)a0;
- (void)onTapCard;
- (void)setupCardView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateBackgroundColor:(BOOL)a0;

@end
