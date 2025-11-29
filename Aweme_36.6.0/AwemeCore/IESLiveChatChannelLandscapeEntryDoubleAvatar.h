@class UIImageView, UIView;

@interface IESLiveChatChannelLandscapeEntryDoubleAvatar : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *firstAvatar;
@property (retain, nonatomic) UIImageView *secondAvatar;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
