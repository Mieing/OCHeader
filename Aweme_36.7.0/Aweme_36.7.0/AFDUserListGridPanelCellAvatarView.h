@class UIImageView, AFDUserListGridPanelCellAvatarLayout, UIView;

@interface AFDUserListGridPanelCellAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *badgeImageView;
@property (retain, nonatomic) UIView *badgeImageBGView;
@property (retain, nonatomic) AFDUserListGridPanelCellAvatarLayout *layout;

- (void)updateAvatarWithModel:(id)a0;
- (void)updateBadgeWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
