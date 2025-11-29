@class UIImageView, NSString, UIImage;

@interface BDPIndicatorLoadingView : UIView <BDPAPPFramePreloadProtocol> {
    UIImage *_customImage;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)preloadFrameImage;
+ (id)loadingImage;

- (void)stopAnimate;
- (void)startAnimate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCustomIcon:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
