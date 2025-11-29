@class UIImageView;

@interface AWEIMGroupDefaultAvatarView : UIView

@property (retain, nonatomic) UIImageView *leftAvatarImageView;
@property (retain, nonatomic) UIImageView *rightAvatarImageView;

- (void)__updateLayer;
- (void)updateWithDefaultAvartarAndGivenAvatartURL:(id)a0;
- (void)updateWithLeftAvararURL:(id)a0 rightAvararURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
