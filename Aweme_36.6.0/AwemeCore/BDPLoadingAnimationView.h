@class UIImageView, UIImage;

@interface BDPLoadingAnimationView : UIView {
    BOOL _finished;
    UIImageView *_loadingIcon;
    UIImage *_iconClose;
    UIImage *_iconOpen;
}

@property (nonatomic) long long circleStyle;

+ (void)preloadAnimationImages;
+ (id)URLWithImageName:(id)a0;

- (void)setLoadingColor;
- (void)setLoadingOpenState;
- (void)setLoadingCloseState;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)dealloc;

@end
