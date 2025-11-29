@class UIImageView, AWEUserLoginAvatarViewModel;

@interface AWEUserLoginAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) AWEUserLoginAvatarViewModel *model;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
