@class UIColor, NSString, UIImageView, UIImage;

@interface LynxUIFilterImage : LynxUI {
    UIImageView *_imageView;
    struct CGPoint { double x; double y; } _shadowOffset;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _blurRadius;
    BOOL _isDirty;
}

@property (nonatomic) long long resizeMode;
@property (retain, nonatomic) NSString *src;
@property (retain, nonatomic) UIImage *originalImage;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2131;
+ (id)__lynx_prop_config__2242;
+ (id)__lynx_prop_config__2333;
+ (id)__lynx_prop_config__2504;

- (void)propsDidUpdate;
- (BOOL)updateLayerMaskOnFrameChanged;
- (float)memoryUsageKB;
- (id)memoryUsageDetail;
- (void)requestImage;
- (void)setSrc:(id)a0 requestReset:(BOOL)a1;
- (void)upateFrameWithoutLayerMask;
- (void)setMode:(long long)a0 requestReset:(BOOL)a1;
- (void)setBlurRadius:(id)a0 requestReset:(BOOL)a1;
- (void)setDropShadow:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createView;
- (void)frameDidChange;

@end
