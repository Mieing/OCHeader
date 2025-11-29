@class IESECBDImageView, NSString, UILabel, UIView;

@interface IESECShopBrandFloatLiveView : UIView {
    BOOL _animating;
}

@property (retain, nonatomic) IESECBDImageView *imageView;
@property (retain, nonatomic) UIView *imageBgView;
@property (retain, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) unsigned long long animationState;
@property (copy, nonatomic) NSString *imageBgViewColor;
@property (copy, nonatomic) NSString *imageViewURL;

- (double)imageBgViewHeight;
- (void)startOpaqueAnimation;
- (void)startTranslucentAnimation;
- (void)updateImageViewHeight:(double)a0;
- (void).cxx_destruct;
- (void)startAnimation:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
