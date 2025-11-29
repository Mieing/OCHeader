@class UIImage;

@interface AWETabBarBackgroundImageRenderer : NSObject

@property (retain, nonatomic) UIImage *darkMainImage;
@property (retain, nonatomic) UIImage *darkLeftImage;
@property (retain, nonatomic) UIImage *darkRightImage;
@property (retain, nonatomic) UIImage *lightMainImage;
@property (retain, nonatomic) UIImage *lightLeftImage;
@property (retain, nonatomic) UIImage *lightRightImage;
@property (retain, nonatomic) UIImage *rendedDarkImage;
@property (retain, nonatomic) UIImage *rendedLightImage;
@property (nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) double leftImageLeftPadding;
@property (nonatomic) double rightImageRightPadding;

+ (id)currentTabBarModeString;
+ (id)rendererWithResourceConfig:(id)a0 reloadType:(long long)a1;

- (void)createDarkImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)createLightImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)backgroundImageWithSize:(struct CGSize { double x0; double x1; })a0 isLightMode:(BOOL)a1;
- (void).cxx_destruct;

@end
