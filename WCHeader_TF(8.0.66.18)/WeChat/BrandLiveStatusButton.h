@class UIImageView, MMUILabel;

@interface BrandLiveStatusButton : MMUIButton

@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (nonatomic) unsigned long long style;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)initView:(unsigned long long)a0;
- (void)updateStatusWording:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
