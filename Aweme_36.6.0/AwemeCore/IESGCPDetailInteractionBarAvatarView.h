@class UIImageView, NSString;

@interface IESGCPDetailInteractionBarAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *extImgView;
@property (copy, nonatomic) NSString *extImgUrl;

- (void)setImage:(id)a0 extImg:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
