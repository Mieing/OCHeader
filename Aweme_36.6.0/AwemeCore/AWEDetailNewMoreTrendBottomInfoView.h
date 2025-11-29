@class UILabel, UIImageView, AWEDetailNewMoreTrendAvatarView;

@interface AWEDetailNewMoreTrendBottomInfoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftAvatarView;
@property (retain, nonatomic) AWEDetailNewMoreTrendAvatarView *middleAvatarView;
@property (retain, nonatomic) AWEDetailNewMoreTrendAvatarView *rightAvatarView;
@property (retain, nonatomic) UILabel *useCountLabel;

- (void)handleAvatarsChange:(id)a0;
- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
