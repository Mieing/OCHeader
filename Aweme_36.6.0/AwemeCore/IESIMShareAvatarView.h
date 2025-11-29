@class UIImageView, BDImageView;

@interface IESIMShareAvatarView : UIView

@property (retain, nonatomic) BDImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *iconImage;

- (void)p_setupConstraint;
- (void)prepareForReUse;
- (void)setAvatarWithShareModel:(id)a0 scene:(id)a1;
- (void)setAvatarWithImage:(id)a0;
- (void)setAvatarWithSmallIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 backgroundColor:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
