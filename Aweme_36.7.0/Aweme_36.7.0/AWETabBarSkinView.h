@class UIImageView, AWETabBarSkinViewParams;

@interface AWETabBarSkinView : UIView

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (copy, nonatomic) AWETabBarSkinViewParams *params;

- (void)updateWithParams:(id)a0;
- (void)p_loadBottomImageView;
- (void)p_loadLeftImageView;
- (void)p_loadRightImageView;
- (struct CGSize { double x0; double x1; })p_imageViewSizeWithImageView:(id)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
