@class UIImageView, YYLabel;

@interface AWEECOMIMMemberRightItemView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *infoLabel;

+ (double)designHeight;
+ (double)memberRightIconHeight;

- (void)bindRightItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
