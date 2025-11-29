@class UIColor, UIImageView, UIImage, UIView;

@interface DUXIdentityAvatar : DUXAvatar

@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconBackgroundColor;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 icon:(id)a2 clickAction:(id /* block */)a3;
- (void)loadingAvatar;
- (double)dotWidthWithIsBackground:(BOOL)a0;
- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 icon:(id)a2 clickAction:(id /* block */)a3 enlargeType:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)setup;

@end
