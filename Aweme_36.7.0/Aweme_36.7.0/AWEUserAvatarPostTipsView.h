@class AWEUserAvatarPostTipsViewConfigModel, UIImageView, DUXButton, UIView, UILabel, UIButton;

@interface AWEUserAvatarPostTipsView : UIView

@property (retain, nonatomic) AWEUserAvatarPostTipsViewConfigModel *model;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *photoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *publishButton;
@property (retain, nonatomic) UIButton *closeButton;

- (id)initWithConfigModel:(id)a0;
- (void)closeBtnTappedAction;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
