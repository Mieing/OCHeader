@class UIColor, UIView;

@interface DUXStateAvatar : DUXAvatar

@property (retain, nonatomic) UIView *dotBackgroundView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *dotBackgroundColor;

- (void)setEnlargeType:(unsigned long long)a0;
- (void)loadingAvatar;
- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 dotColor:(id)a2 clickAction:(id /* block */)a3 enlargeType:(unsigned long long)a4;
- (double)dotWidthWithIsBackground:(BOOL)a0;
- (double)dotBackgroundViewOffSet;
- (id)initWithImage:(id)a0 sizeStyle:(unsigned long long)a1 dotColor:(id)a2 clickAction:(id /* block */)a3;
- (void).cxx_destruct;
- (void)setup;

@end
