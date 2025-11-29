@class UIImageView, UIImage, NSURL;

@interface DUXAvatar : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double maxScale;
@property (nonatomic) unsigned long long sizeStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) BOOL loading;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (copy, nonatomic) id /* block */ clickAction;

- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 clickAction:(id /* block */)a2;
- (void)didClickAction;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 clickAction:(id /* block */)a2 enlargeType:(unsigned long long)a3;
- (void)loadingAvatar;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })avatarSize;

@end
